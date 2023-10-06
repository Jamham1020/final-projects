# -*- coding: utf-8 -*-
"""
Created on Wed May 31 11:28:33 2023

@author: jamha
"""
# Lab6.2 Linear Regression Pt. 2
import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split

# 1. Read the CPU data
df = pd.read_csv("https://raw.githubusercontent.com/grbruns/cst383/master/machine.csv")
df.index = df['vendor']+' '+df['model']
df.drop(['vendor', 'model'], axis=1, inplace=True)
df['cs'] = np.round(1e3/df['myct'], 2)	# clock speed in MHz 

#%%
# 2. Create NumPy arrays X and y from the data. 
# The target variable y should come from column 'prp' of df.  
# For X, choose two other columns of df
x = df[['cs', 'cach']].values
y = df['prp'].values

#%%
# 3. Create training and test sets using train_test_split().  
# Use Scikit-Learn's LinearRegression class to 
# create a linear model from X_train and y_train.
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.33, random_state = 23)
reg = LinearRegression()
reg.fit(x_train, y_train)

#%%
# 4. What are the coefficients of your model?
print(f'intercept: {reg.intercept_:.3f}, cs: {reg.coef_[0]:.3f}, cach: {reg.coef_[1]:.3f}')

#%%
# 5. Are both the predictor variables of your model important in predicting ‘prp’?
# Both of my predictor varaibles don't seem to carru much weight and it seems that 
# CS have more influence in predicting 'prp'

#%%
# 6. What is the R-squared value for your model?  
# (Use X_train and y_train to get the R-squared value.) 
# Did you get a good R-squared value?  
# What's the best possible R-squared value?
predicted = reg.predict(x_test)
print(f'R-Score: {reg.score(x_train, y_train):.3f}')

# The best R-Squared values would have been a 1
#%%
# 7. Produce a scatterplot in which the predicted prp values are shown on the 
# x axis and the actual prp values are shown on the y axis
sns.scatterplot(x = predicted, y = y_test)
plt.xlabel('actual')
plt.ylabel('predicted')
plt.title("Predicted vs Actual")

#%%
# 8. Repeat steps 2-7 using a different pair of predictor variables
x = df[['erp', 'mmax']].values
y = df['prp'].values

# split data
x_train, x_test, y_train, y_test = train_test_split(x,y, test_size=0.30, random_state=23)

# train
reg2 = LinearRegression()
reg2.fit(x_train, y_train)
print(f'intercept: {reg2.intercept_:.3f}, erp: {reg2.coef_[0]:.3f}, mmax: {reg2.coef_[1]:.6f}')

# predict
predict2 = reg2.predict(x_test)
print(f'R-Score: {reg2.score(x_train, y_train):.3f}')

#%%
sns.scatterplot(x = predict2, y = y_test)
plt.xlabel('Actual')
plt.ylabel('Predicted')
plt.title("Predicted vs Actual")

#%%
# 9.	Repeat steps 2-7 using all predictor variables. 
# Which predictors appear to be most important?
x = df[['chmin', 'chmax']].values
y = df['prp'].values

# split data
x_train, x_test, y_train, y_test = train_test_split(x,y, test_size=0.30, random_state=23)

# train
reg2 = LinearRegression()
reg2.fit(x_train, y_train)
print(f'intercept: {reg2.intercept_:.3f}, erp: {reg2.coef_[0]:.3f}, mmax: {reg2.coef_[1]:.6f}')

# These do not seem to carry as much weight as the last 2.

# predict
predict2 = reg2.predict(x_test)
print(f'R-Score: {reg2.score(x_train, y_train):.3f}')

sns.scatterplot(x = predict2, y = y_test)
plt.xlabel('Actual')
plt.ylabel('Predicted')
plt.title("Predicted vs Actual")
# The predictors that appear to be the most important are erp and nmax. They are the closest to 1 R-Score

