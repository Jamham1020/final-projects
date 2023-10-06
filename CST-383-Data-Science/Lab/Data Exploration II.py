# -*- coding: utf-8 -*-
"""
Created on Thu May 18 00:44:32 2023

@author: jamha
"""

# Lab 4 Data Exploration - two variable
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns


# US News and World Report college data

# Lab4.4 #2
# Create an Python file in Spyder, and write code to load the data.
df = pd.read_csv("https://raw.githubusercontent.com/grbruns/cst383/master/College.csv", index_col=0)
#%% 
# Lab4.4 #3
# Create scatter plots to compare some of the variables.  
# Here are some questions to help you get started.  
# Follow your curiosity.
# 1. Do smaller colleges spend more?  (variables F.Undergrad and Expend)
# 2. Do smaller colleges charge more?  (variables F.Undergrad and Outstate)
# 3. Define two new variables: perc.accept and perc.enroll.  
#    The first is the percentage of students who accepted out of those who applied (use variables Accept and Apps).  
#    The second is the percentage of students who enrolled out of those where were accepted (use variables Enroll and Accept).
# Now use the new variables in scatter plots.  
# For example: are more selective colleges more expensive, generally?
# For each scatter plot that you create, write something about the form/shape, the direction, and the strength.  Think about the possible meaning of the scatterplot.
# Don't just stick to my suggestions, choose some of your own variables to explore.  Think of questions that you find interesting. 

#%%
#1. Do smaller colleges spend more?  (variables F.Undergrad and Expend)
sns.scatterplot(x="F.Undergrad", y="Expend", data=df)
plt.xlabel("Number of Full-time Undergraduates")
plt.ylabel("Instructional Expenditure per Student")
plt.title("Number of Full-time Undergraduates vs. Instructional Expenditure per Student")
plt.show()

# ANS: The scatter plot suggests a positive relationship between
#      the number of full-time undergraduates and out-of-state tuition and fees.
#      Smaller colleges tend to spend less on average, while larger colleges 
#      have a wider range of expenditure.
#%%
#2. Do smaller colleges charge more?  (variables F.Undergrad and Outstate)
sns.scatterplot(x="F.Undergrad", y="Outstate", data=df)
plt.xlabel("Number of Full-time Undergraduates")
plt.ylabel("Out-of-State Tuition and Fees")
plt.title("Number of Full-time Undergraduates vs. Out-of-State Tuition and Fees")
plt.show()

#ANS: The scatter plot suggests a weak positive relationship between the 
#     the number of full-time undergraduates and out-of-state tuition and fees.
#     Smaller colleges tend to have a slightly higher tuition, but the
#     relationship is not very strong.

#%%
# Define two new variables: perc.accept and perc.enroll.  
#    The first is the percentage of students who accepted out of those who applied (use variables Accept and Apps).  
#    The second is the percentage of students who enrolled out of those where were accepted (use variables Enroll and Accept).
df["perc.accept"] = df["Accept"] / df["Apps"] * 100
df["perc.enroll"] = df["Enroll"] / df["Accept"] * 100


#%%
# Lab4.4 #4
# Think of more questions and see if you can create plots to help understand them.  For example, are more selective colleges more expensive?  
# Just create more scatterplots and explore them.  
# There are lots of things to pursue in the college data.

# Are more selective colleges more expensive, generally? (using perc.accept and Outstate)
sns.scatterplot(x="perc.accept", y="Outstate", data=df)
plt.xlabel("Percentage of Students Accepted")
plt.ylabel("Out-of-State Tuition and Fees")
plt.title("Percentage of Students Accepted vs. Out-of-State Tuition and Fees")
plt.show()

# ANS: The scatter plot indicates that colleges with a lower acceptance rate
#      (or more selective) tend to have a higher out-of-state tuition and fees.
#      This suggests a positive relationship between selectivity and cost. 
