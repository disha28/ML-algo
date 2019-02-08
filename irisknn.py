# KNN on iris dataset
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

#importing the dataset
dataset= pd.read_csv('Iris.csv')
dataset.head
dataset.drop(["Id"],axis=1)
dataset.info()

#separating the dataset
y= dataset.iloc[:,5].values
X=dataset.drop(["Species"],axis=1).values
#y=dataset.Species.values

from sklearn.preprocessing import LabelEncoder, OneHotEncoder
# Encoding the Dependent Variable
labelencoder_y = LabelEncoder()
y = labelencoder_y.fit_transform(y)
#Normalization of data
#X=(X-np.min(X))/(np.max(X)-np.min(X))

#Splitting the dataset into training and testing dataset
from sklearn.cross_validation import train_test_split
X_train,X_test, y_train, y_test= train_test_split(X,y,test_size=0.90,random_state=0)

# Feature Scaling
from sklearn.preprocessing import StandardScaler
sc = StandardScaler()
X_train = sc.fit_transform(X_train)
X_test = sc.transform(X_test)


#Fitting the knn to training set
from sklearn.neighbors import KNeighborsClassifier
classifier= KNeighborsClassifier(n_neighbors=5, metric='minkowski',p=2)
classifier.fit(X_train,y_train)

#Preddicting the test set results
y_pred=classifier.predict(X_test)

#making the confusion metrix
from sklearn.metrics import confusion_matrix
cm=confusion_matrix(y_test,y_pred)




# accuracy
print("{} nn score:{}".format(5,classifier.score(X_test,y_test)))



