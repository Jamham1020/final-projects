# -*- coding: utf-8 -*-
"""
Created on Wed May 31 08:41:14 2023

@author: jamha
"""

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.linear_model import LinearRegression

# 1. Read the CPU performance data from this csv file
#    into a Pandas DataFrame named 'df'
#    https://raw.githubusercontent.com/grbruns/cst383/master/machine.csv
df = pd.read_csv("https://raw.githubusercontent.com/grbruns/cst383/master/machine.csv")


# You may want to add the 'clock speed' feature
df.index = df['vendor'] + '' + df['model']
df.drop(['vendor', 'model'], axis = 1, inplace = True)
df['cs'] = np.round(1e3/df['myct'], 2) # clock speed in MHz (millions of cycles/sec)
#%%
# 2. Look at the information on the following page 
#    to learn about what the column names mean.  
#    ‘prp’ is the variable that we will try to estimate with linear regression.
#    Note that this data is from way back in 1988 and has little to do with today’s CPUs
#    https://archive.ics.uci.edu/ml/datasets/Computer+Hardware

df.info()

''' 
1. vendor name: 30
(adviser, amdahl, apollo, basf, bti, burroughs, c.r.d, cambex, cdc, dec,
 df, formattion, four-phase, gould, honeywall, hp, ibm, ipl, magnuson, microdata
 nas, ncr, nixdorf, perkin-elmer, prime, siemens, sperry, stratus, wang)

2. Model Name: unique symbols

3. MYCT: Machine Cycle time in nanoseconds (int)

4. MMIN: min main memory in kilobytes (int)

5. MMAX: max main memory in kilobytes (int)

6. CACH: cache memory in kilobytes (int)

7. CHMIN: min channels in units (int)

8. CHMAX: max channels in units (int)

9. PRP: published relative performance (int)

10. ERP: estimated relative performance from original article (int)
'''
#%%
# 3. Create a matrix of scatter plots using the Seaborn pairplot function.  
#    Do some features appear to be strongly correlated?
sns.pairplot(df)

#%%
# 4.Pick a feature (like ‘mmin’, ‘mmax’, ‘cach’, etc.) 
# and produce a scatterplot with that feature on the x axis and ‘prp’ on the y axis.  
# Does prp seem to change linearly with respect to the feature you chose?  
# Describe the pattern: what is the trend, 
# how focused is the pattern, are there outliers, etc.?

sns.scatterplot(x = 'mmin', y = 'prp', data = df)

# PRP does tend to have a linear trend when compared to mmax. 
# There are a few outliers that are located far to the right for most of the 
# dataset 

#%%

# 5. Fit a linear model to the data using sklearn.linear_model.LinearRegression.  
# The model should have ‘prp’ as its target variable, 
# and the feature you chose as its single predictor variable.  
# Assign the model to variable ‘fit’.
x = df[['mmax']].values #expect a 2D array, so double wrap
y = df['prp'].values # expects a 1D array
regr = LinearRegression()
regr.fit(x, y)
print(f'w0: {regr.intercept_:.2f}, w1: {regr.coef_[0]:.2f}')

#%%
# 6. Plot the predicted relationship on top of your plot of problem 4 above. 
# Compare your plot to the one you would get with Seaborn's regplot 
# (which will find and plot the regression line for you).
sns.scatterplot(x = 'mmax', y = 'prp', data = df)
plt.plot(x, regr.predict(x), color = 'aquamarine')

#%%
# 7. Create a scatterplot with the actual 'prp' value on the X axis 
# and the predicted 'prp' value on the Y axis.  
# If your predictions were great, what would this plot look like?
actual = df['prp']
predicted = regr.predict(x)
sns.scatterplot(x = actual, y = predicted)
plt.xlabel("actual")
plt.ylabel("predicted")

#%%
# 8. If you still have time, try again, using different features as your predictors.  
# Try multiple predictors.  
#In each case, plot the actual vs. predicted values, as in the last problem.  
