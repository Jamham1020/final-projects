# -*- coding: utf-8 -*-
"""
Created on Wed May 24 22:29:42 2023

@author: jamha
"""

# Lab5.3 Regression

# 1. Create a new Python program in Spyder (or create a notebook if you prefer)
#    and add the following imports: 
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsRegressor

# 2. Enter this code to load the college data
df = pd.read_csv('https://raw.githubusercontent.com/grbruns/cst383/master/College.csv',index_col=0)

#%%

# 3. We will try to predict whether the tuition of a college based on the
#    number of students from the top 10% of their high school class and the
#    number of undergraduates.. Create a 2D NumPy array X from the 'Top10perc'
#    and 'F.Undergrad' columns of df.

X = df[['Top10perc', 'F.Undergrad']].values

#%%

# 4. Create a 1D NumPy array y from the 'Outstate' column of df.
y = df['Outstate'].values

#%%

# 5. Split the data into training and test sets, with 30% of the data in the
#    test set. Use names X_train, y_train, X_test, y_test

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=0)
#%%

# 6. Now let's scale the values of the data.
# It's important that we split that data before scaling.  
# We want to scale the training data and the test data based on the values 
# in the training data.  
# By default, the StandardScaler class uses z-score normalization.
scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)

#%%
# 7. Build a KNN regressor and train it.  
# Use the default value of k (which is parameter n_neighbors KNeighborsRegressor).

knn = KNeighborsRegressor()
knn.fit(X_train, y_train)
#%%
# 8. Make predictions using the training set, 
# and save the predictions as variable 'predictions'.
predictions = knn.predict(X_train)

#%%
# 9. Compare the first ten predictions with the first ten correct (test set) values.
print("First ten predictions: ", predictions[:10])
print("First ten correct values: ", y_train[:10])

#%%
# 10. Which two variables do you need to compute the mean squared error of 
# your classifier on the test set?

# ANS: We need predictions and y_test (correct values from the test set)
#%%
# 11. Compute and print the mean squared error of your regressor.
mse = np.mean((predictions - y_train) ** 2)
print("Mean Squared Error (MSE) on the test set: ", mse)

#%%
# 12. What MSE would you get if you always just used the average value of 
# y_train as your prediction?  
# This is called a "blind prediction" 
# because, when predicting tuition, it doesn't look at the values for Top10perc 
# and F.Undergrad.

blind_prediction = np.mean(y_train)
mse_blind = np.mean((blind_prediction - y_test) ** 2)
print("MSE with blind prediction: ", mse_blind)
#%%
# 13. If you still have time, repeat steps 9-13, but use k=7.  
# Does using k=7 improve your MSE on the test set?

knn_7 = KNeighborsRegressor(n_neighbors = 7)
knn_7.fit(X_train, y_train)
predictions_7 = knn_7.predict(X_train)
mse_7 = np.mean((predictions_7 - y_train) ** 2)
print("Mean Squared Error (MSE) with k=7 on the test set:", mse_7)

#%%
# 14. If you still have time, read the Scikit-Learn info for KNeighborsClassifier 
# and try using an alternative distance function.
# I'm using manhattan again
def manhattan_distance(x, y):
    return np.sum(np.abs(x - y))

knn_manhattan = KNeighborsRegressor(metric = manhattan_distance)
knn_manhattan.fit(X_train, y_train)
predictions_manhattan = knn_manhattan.predict(X_train)
mse_manhattan = np.mean((predictions_manhattan - y_train) ** 2)
print("Mean Squared Error (MSE) with Manhattan distance on the test set:", mse_manhattan)




 