#include<bits/stdc++.h>
using namespace std;
int sum(int num)
{
    if(num<10)
    {
        return num;
    }
    return (num%10) + sum(num/10);
}
int main()
{
   
   
      int i,l,ans,num;
        string s;
        cin>>s;
        l=s.length();
        if(l==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            
            num=0;
            for(i=0;i<l;i++)
            {
                num+=(s[i]-'0');
            }
            ans=1;
            while(num>9)
            {
                num=sum(num);
                ans++;
            }
            cout<<ans<<endl;
        }
    
}