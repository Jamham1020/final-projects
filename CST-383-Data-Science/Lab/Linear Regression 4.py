# -*- coding: utf-8 -*-
"""
Created on Wed May 31 18:20:26 2023

@author: jamha
"""

# Lab 6.4 Linear Regression - Tuning Models

import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import cross_val_score
from sklearn.model_selection import validation_curve
from sklearn.pipeline import make_pipeline
from sklearn.preprocessing import PolynomialFeatures

#%%
def MSE(actual, predict):
    return ((predict - actual)**2).mean()

def RMSE(actual, predict):
    return np.sqrt(MSE(actual, predict))

def test_model(x, y):
    x_train, x_test, y_train, y_test = train_test_split(x,y, test_size=0.3, random_state=42)
    reg = LinearRegression()
    reg.fit(x_train, y_train)
    prediction = reg.predict(x_test)
    return MSE(y_test, prediction)
#%% 
#1 
df = pd.read_csv("https://raw.githubusercontent.com/grbruns/cst383/master/machine.csv")
df.index = df['vendor']+' '+df['model']
df.drop(['vendor', 'model'], axis=1, inplace=True)
df['cs'] = np.round(1e3/df['myct'], 2)	# clock speed in MHz 
df.info()

#%%
# 2. Split the data randomly into a training set and a test set, using a 70/30 split (70% training data).  Use train_test_split.  
x = df[['erp', 'cs']].values
y = df['prp'].values
x_train, x_test, y_train, y_test = train_test_split(x,y, test_size=0.3, random_state=42)

#%%
# # 3. Use LinearRegression to create a linear model to predict performance (feature ‘prp’).  Use a couple of predictor variables of your own choice.  Create the model using your training set. 
reg = LinearRegression()
reg.fit(x_train, y_train)

#%%
# 4. Compute the MSE of your model on the test data.  Do this manually.
prediction = reg.predict(x_test)
MSE(y_test, prediction)

#%%
# 5. Repeat steps 2-4, but this time use new randomly-generated test and training sets.  How much does the RMSE differ?
x = df.sample(n=2, axis='columns').values
y = df['prp'].values

test_model(x,y)

#%%
mse_values = []
for x in range(100):
    x = df.sample(n=2, axis='columns').values
    y = df['prp'].values
    mse_values.append(test_model(x,y))
sns.histplot(mse_values, bins=4)
plt.title('Count of MSE')
plt.xlabel('MSE')

# MSE value differs quite a bit, anywhere from 0 to over 40K. Although, more than 40% of the runs had MSEs within 10K.

#%%
# 6.If you have time, write code that will do steps 2-4 100 times, each time creating different training/test sets. 
#  Collect the computed RMSE values, and plot them on a histogram.

#%%
# 7. If you still have time, repeat problem 6, but this time use an 80/20 split.

#%%
# 8. If you still have time, compute MSE using cross validation on the entire data set.  
# Do this many times and plot all the histogram values using a histogram.

#%%
# 
#9.	If you still have time, check out Section 5.1 of 'An Introduction to Statistical Learning'
