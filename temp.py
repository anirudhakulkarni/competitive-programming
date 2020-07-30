import os

path = os.getcwd()
print(1)
os.chdir('../')
print(1)
os.chdir('../')
os.chdir('../')
print(os.listdir())