# -*- coding: utf-8 -*-
"""
Created on Thu May 11 00:21:19 2023

@author: jamha
"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
%matplotlib inline


# Read data as Pandas data frame as variable 'df'
df = pd.read_csv("https://raw.githubusercontent.com/grbruns/cst383/master/airquality.csv")

#%%
## Lab3.3 #2
## Display the first rows of the data frame in the console
print(df.head())

#%%
## Lab3.3 #3
## Display types of columns in the data frame
print(df.dtypes)

#%%
## Lab3.3 #4
## Calculate total number of NA values
num_na = df.isna().sum().sum()
print("Total number of NA values:", num_na)

## Calculate the fraction of all the values in the data frame are NA's
frac_na = num_na / (df.shape[0] * df.shape[1])
print("Fraction of all values that are NA's: {:.4f}".format(frac_na))

#%%
## Lab3.3 #5
## Calculate number of rows containing NA values
num_rows_with_na = df.isna().any(axis=1).sum()
print("Number of rows containing NA values: ", num_rows_with_na)

#%%
## Lab3.3 #6
## For each column, calculate fraction of the column values are NA values
frac_na_col = df.isna().mean()
print(frac_na_col)

#%%
## Lab3.3 #7
## For each row, calculate fraction of NA values in each row
frac_na_row = df.isna().mean(axis=1)
print(frac_na_row)

#%%
## Lab3.3 #8
## Plotting the fraction of NA values in each column
frac_na_col.plot(kind='bar')
plt.title('Fraction of NA values in each column')
plt.show()

#%%
## Lab3.3 #9
## If we decide to remove the NA values, we should remove the rows

#%%
## Lab3.3 #10
## creating a new data frame df_cleanrows by removing all rows containing NA values
df_cleanrows = df.dropna()
print("New data frame after remvoing rows with NA values: ")
print(df_cleanrows)

## verify that there are no NA values in df_cleanrows
print("Number of NA values in df_cleanrows: ", df_cleanrows.isna().sum().sum())

#%%
## Lab3.3 #11
## Creating a new data frame df_cleancols by removing all columns containing NA
df_cleancols = df.dropna(axis=1)
print("New data frame after remvoing columns with NA values: ")
print(df_cleancols)

#%%
## Lab3.3 #12
## Which contains more data, df_cleanrows, or df_cleancols
print("Number of elements in df_cleanrows:", df_cleanrows.size)
print("Number of elements in df_cleancols", df_cleancols.size)

## Number of elements in df_cleanrows: 666
## Number of elements in df_cleancols 612
# df_cleanrows contains more data

#%%
## Lab3.3 #13
## Creating a new data frame df_med by replacing each NA value with the median of its column
df_med = df.fillna(df.median())
print("New data frame with NA values replaced with median: ")
print(df_med)

#%%
## Lab3.3 #14
## Creating a new data frame df_mean by replacing each NA value with the mean of its column
df_mean = df.fillna(df.mean())
print("New data frame with NA values replaced with mean: ")
print(df_mean)
