# -*- coding: utf-8 -*-
"""
Created on Thu May 18 00:17:06 2023

@author: jamha
"""

# Lab 4 Data Exploration - single variable
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

# 1994 US Census Data
# Create an Python file in Spyder, and enter this code to read the data:
# Lab4.3 #2
df =  pd.read_csv("https://raw.githubusercontent.com/grbruns/cst383/master/1994-census-summary.csv")

#%%
# Lab4.3 #3
# Visually explore the data frame using the Variable explorer tab in 
# Spyder, which can be found in the upper right pane.

#%%
# Lab 4.3 #4
# Which Pandas commands can you use to get a quick overview of the data?
df.info()
df.head()
df.describe()

#%%
# Lab4.3 #5
# Remove the 'usid' and 'fnlwgt' columns from the data frame.
df.drop(['usid', 'fnlwgt'], axis=1, inplace=True)

#%%
# Lab4.3 #6
# Use a Pandas command to look at the first rows of the data frame.
df.head()

#%%
# Lab4.3 #7
# The ‘education_num’ column records the number of years of education.  
# Use ‘describe’ to find min, max, median values for education_num.  
# Plot education_num using a histogram.  
# Label the x axis with 'years of education'.
education_num_stats = df['education_num'].describe()
print(education_num_stats)

plt.hist(df['education_num'], bins=20)
plt.xlabel('Years of Education')
plt.ylabel('Count')
plt.title('Distribution of Years of Education')
plt.show()

#%%
# Lab4.3 #8
# Does it make sense to use education_num with a histogram?  
# Try it, and compare with a plot using a bar plot of the count of the rows by education_num (as shown in lecture).
sns.countplot(data=df, x='education_num')
plt.xlabel('Years of Education')
plt.ylabel('Count')
plt.title('Count of Rows by Years of Education')
plt.show()

# ANS: Using a histogram makes sense because it represents a continuous variable
#      (number of years of education). The histogram shows the distribution and
#     frequency of different education levels.

    
#%%
# Lab4.3 #9
# Plot capital_gain with a density plot.  
# Did you find anything interesting?  
# Save your plot to a png file.
sns.kdeplot(df['capital_gain'])
plt.xlabel('Capital Gain')
plt.ylabel('Density')
plt.title('Density Plot of Capital Gain')
plt.savefig('capital_gain_output.png')
plt.show()

# ANS: It reveals peaks and clusters of capital gains, which I find is interesting.

#%%
# Lab4.3 #10
# Investigate attribute ‘workclass’. 
# Plot it in an appropriate way.
sns.countplot(data=df, x='workclass')
plt.xlabel('Workclass')
plt.ylabel('Count')
plt.title('Distribution of Workclass')
plt.xticks(rotation=45)
plt.show()

#%%
# Lab4.3 #11
# Use a bar plot to show the distribution of attribute ‘sex’.  
# Label the 'Male' and 'Female' bars with the fraction of rows associated with each sex (not a count). 
# Comment on what you find.  
# Why do you think the distribution is like this?
sex_counts = df['sex'].value_counts(normalize=True)
sns.barplot(x=sex_counts.index, y=sex_counts.values)
plt.xlabel('Sex')
plt.ylabel('Fraction of Rows')
plt.title('Distribution of Sex')
plt.show()

# ANS: The distribution of 'sex' in the dataset is not equal, with higher proportion 
#      of males compared to females. 
#      The reasons for this could be influenced by various factors such as sample
#      bias, population demographics, or gender disparities in the workforce.

#%%
# Lab4.3 #12
# Use a horizontal bar plot to visualize attribute marital_status.
marital_status_counts = df['marital_status'].value_counts()
sns.barplot(y=marital_status_counts.index, x=marital_status_counts.values, orient='horizontal')
plt.xlabel('Count')
plt.ylabel('Marital Status')
plt.title('Distribution of Marital Status')
plt.show()

#%%
# Lab4.3 #13
# If you have time, visualize all the attributes you haven’t explored yet.  
# Be sure to include 'native_country'.
attributes = ['race', 'occupation', 'relationship', 'native_country']
for attribute in attributes:
    sns.countplot(data=df, x=attribute)
    plt.xlabel(attribute.capitalize())
    plt.ylabel('Count')
    plt.title(f'Distribution of {attribute.capitalize()}')
    plt.xticks(rotation=45)
    plt.show()

#%%
# Lab4.3 #14
#If you still have time, do single-variable visualization for the attributes in the contribution campaign data.
campaign_attributes = ['capital_loss', 'hours_per_week']
for attribute in campaign_attributes:
    sns.histplot(df[attribute])
    plt.xlabel(attribute.capitalize())
    plt.ylabel('Count')
    plt.title(f'Distribution of {attribute.capitalize()}')
    plt.show()