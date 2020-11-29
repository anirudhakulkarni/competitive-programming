import os
path=os.getcwd()
ans=[]
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
    		exts = ('.exe')
    		if currentFile.lower().endswith(exts):
    		    ans+=[str(root+currentFile)]
    		    print("Deleting "+root+" "+currentFile)
    		    os.remove(os.path.join(root, currentFile))
    break
print(ans)
print("Press any key to continue ")
a=input()