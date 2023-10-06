# -*- coding: utf-8 -*-
"""
Created on Wed May 24 21:47:06 2023

@author: jamha
"""
# Lab5.2 kNN Classification

#%%
# 1. Create a new Python program in Spyder (or create a notebook if you prefer)
#    and add the following imports: 
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier

# 2. Enter this code to load the college data
df = pd.read_csv('https://raw.githubusercontent.com/grbruns/cst383/master/College.csv',index_col=0)

#%%
# 3. How would you get an overview of the data?
# Display the first few rows of the DataFrame
df.head()

# Provides summary statistics of the numerical columns in the DataFrame
df.describe()

# Get information about the columsn and data types
df.info()

#%%
# 4. We will try to predict whether a college is public or private
#    using the cost of tuition and the number of full-time students
#    Use the code, to convert data to NumPy, split it into test and
#    training sets, and scale. 

X = df[['Outstate', 'F.Undergrad']].values
y = (df['Private'] == 'Yes').values.astype(int) 

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.30, random_state=42)
scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)

#%%
# 5. Print the first 10 rows of X_train to make sure the data is scaled.
print(X_train[:10])

#%%
# 6. Build a KNN classifier and train it. Use the default value of k
#    which is parameter n_neighbors KNeighborsClassifier)

knn = KNeighborsClassifier()
knn.fit(X_train, y_train)

#%%
# 7. Make predictions using the training set, and save the prdecitions as
#    variable 'predictions'.

predictions = knn.predict(X_train)
#%%
# 8. Compare the first ten predictions with the first ten correct (test set) values.
print("Predictions:", predictions[:10])
print('Actual:', y_train[:10])
#%%
# 9. Which two variables do you need to compute the accuracy of your classifier
#    on the test set?
#    ANS: To computer the accuracy of the classifier on the test set, you need
#         the predicted values('predictions') and the actual values('y_test').

#%%
# 10. Compute and print the test set accuracy of your classifier.
test_accuracy = knn.score(X_test, y_test)
print("Test Set Accuracy: ", test_accuracy)

#%%
# 11. If you still have time, repeat steps 9-13, but use k = 7.
#     Does using k = 7 improve your accuracy on the test set?
knn = KNeighborsClassifier(n_neighbors=7)
knn.fit(X_train, y_train)
prediction = knn.predict(X_train)
print("Prediction: ", prediction[:10])
print('Actual: ', y_train[:10])

test2_accuracy = knn.score(X_test, y_test)
print("Test Set Accuracy: ", test2_accuracy)

#%%
# 12. If you still have time, read the Scikit_Learn info for KNeighborsClassifier
#     and try using an alternative distance function. 
#     I used the Manhattan distance

knn = KNeighborsClassifier(metric='manhattan')
knn.fit(X_train, y_train)
test_accuracy = knn.score(X_test, y_test)
print("Test Set Accuracy (Manhattan Distance): ", test_accuracy)