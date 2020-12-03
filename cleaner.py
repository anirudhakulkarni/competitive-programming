import os
path=os.getcwd()
deleted_list=[]
while True:
    for root, dirs, files in os.walk(path):
    	if('.git' in dirs):
    		dirs.remove('.git')
    	# print(root)
    	# print(dirs)
    	# print(files)
    	for currentFile in files:
    		#print(root)
    		print (" processing file: "+root + currentFile)
    		exts = ('.exe','.class')
    		if currentFile.lower().endswith(exts):
    		    deleted_list+=[str(root+currentFile)]
    		    print("Deleting "+root+" "+currentFile)
    		    os.remove(os.path.join(root, currentFile))
    break
print("Deleted items:")
print(deleted_list)
print("Press any key to continue ")
a=input()