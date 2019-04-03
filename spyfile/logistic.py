import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

np.random.seed(0)
#Importing the dataset

dataset=pd.read_csv('Social_Network_Ads.csv')
X=dataset.iloc[:,2:4].values
X=X.astype(float)
y=dataset.iloc[:,[4]].values

def scaler(X):
    for col in range(X.shape[1]):
        minimum=min(X[:,col])
        factor=max(X[:,col])-minimum
        for i in range(X.shape[0]):
            X[i,col]=(X[i,col]-minimum)/factor
    return X

X=scaler(X)
X_pred=X

c=np.ones((X.shape[0],3))
c[:,1]=X[:,0]
c[:,2]=X[:,1]
X=c
del(c)

def sigmoid(y):
    return 1/(1+np.exp(-y))

#Logistic regression algorithm
weights=2*np.random.random((3,1))-1
a=0.01
for i in range(1000000):
    result=sigmoid(np.dot(X,weights))
    weights-=a*np.dot(X.T,result-y)*(1/(y.shape[0]))
    
result=np.round(result)

