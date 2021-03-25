import pandas as pd
import numpy as np
from sklearn import preprocessing, svm, neighbors
from sklearn.model_selection import train_test_split

df=pd.read_csv('/Users/sudershan/Downloads/MachineLearning/breast-cancer-wisconsin.data')


#Removing ID as a feature because ID doesnt make sense as a feature 

df.replace('?',-99999,inplace=True) #dumping data 
df.drop(['id'],1,inplace=True)

X= np.array(df.drop(['class'],1))
y=np.array(df['class'])

X_train,X_test,y_train,y_test = train_test_split(X,y,test_size=0.2)


#sklearn KNN 

clf=svm.SVC()
clf.fit(X_train,y_train)

accuracy=clf.score(X_test,y_test)
print(accuracy)
 