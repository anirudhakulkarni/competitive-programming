from updater import Retriever

def main():
	spoj_pwd=open("confg",'r').read()
	starter1 = Retriever(cf_handle='4n1rudh4', cf_password='password', spoj_handle='user', spoj_password='password', codeforces=True, spoj=False, get_regular=True, get_gym=False, split_gym=False, folders=True, verbose=True)
	starter1.start()
	starter2 = Retriever(cf_handle='anirudhak47', cf_password='password', spoj_handle='anirudhak47', spoj_password=spoj_pwd, codeforces=True, spoj=True, get_regular=True, get_gym=False, split_gym=False, folders=True, verbose=True)
	starter2.start()

if __name__ == '__main__':
	main()