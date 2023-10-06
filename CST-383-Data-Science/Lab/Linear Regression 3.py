# -*- coding: utf-8 -*-
"""
Created on Wed May 31 17:23:13 2023

@author: jamha
"""

# Lab6.3 Linear Regression Pt. 3

import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
#from sklearn.model_selection import cross_val_score
#from sklearn.model_selection import validation_curve
from sklearn.pipeline import make_pipeline
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import mean_squared_error
#%%
# 1. Read the CPU data: 
df = pd.read_csv("https://raw.githubusercontent.com/grbruns/cst383/master/machine.csv")
df.index = df['vendor']+' '+df['model']
df.drop(['vendor', 'model'], axis=1, inplace=True)
df['cs'] = np.round(1e3/df['myct'], 2)	# clock speed in MHz 

#%%
sns.scatterplot(x ='cs', y = 'prp', data=df)
sns.scatterplot(x ='cach', y = 'prp', data=df)

#%%
# 2.From the machine data, create training and test sets, using a 70/30 split. 
# See the linear regression 2 slides if needed
x = df[['cach', 'cs']].values
y = df['prp'].values
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.3, random_state=42)

#%%
# 3. This lab is open-ended.  
# I want you to experiment with building linear models using interactions 
# and nonlinear transformations, as discussed in class.  
# The goal is still to predict performance (feature ‘prp’).  Start simple.
reg = LinearRegression()
reg.fit(x_train, y_train)
predictions = reg.predict(x_test)
print(f'R^2 score: {reg.score(x, y):.3f}')
print(f'RMSE: {np.sqrt(mean_squared_error(y_test, predictions)):.3f}')
print(f'Bias: {reg.intercept_} w0: {reg.coef_[0]} w1: {reg.coef_[1]}')

#%%
# 4.Predict prp using your test set, and write your own code to compute the RMSE.  
print(f'Test RMSE: {np.sqrt(mean_squared_error(y_test, predictions)):.3f}')


#%%
# 5. For each experiment, I want you to pick some features, transform them in some way (or not at all), and then build a linear model using the training data.  Write down the RMSE you get on the test data.  Note: if you transform ‘prp’, you will need to account for that when you compute RMSE!
pf = PolynomialFeatures(degree=2, include_bias=False)
pf.fit(x)
x_poly = pf.transform(x)

reg2 = LinearRegression()
reg2.fit(x_poly, y)
predictions2 = reg2.predict(x_poly)
print(f'R^2 score with 2nd-degree polyfeatures: {reg2.score(x_poly, y):.3f}')


#%%
# 6. See which features and transformations give you the best RMSE scores.
print(f'RMSE with 2nd-degree polyfeatures: {np.sqrt(mean_squared_error(y, predictions2)):.3f}')
# Adding a 2 degree polyfeature to my predictors almost cut my RMSE in half.
