#include <iostream>
#include<math.h>
#include<queue>
using namespace std;

long long int next(long long int d)
{
    return d%10;
}
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        long long int ans;
        cin>>ans;
        long long int a,b;
        long long int arr[8];
        cin>>a>>b;
        long long int sum=a+b;
        if(ans<=4)
        {
            for(long long int i=2;i<ans;i++)
            {
                sum+=next(sum);
            }
            if(sum%3) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
        long long int sum1=0;
        for(long long int i=2;i<8;i++)
         {
             arr[i]=next(sum);
             sum+=arr[i];
             if(i<4)
             sum1=sum;
         }
         long long int sum2=sum-sum1;
         ans=ans-4;
         long long int v=ans/4;
         sum2=sum2*v;
         long long int c=ans%4;
         long long int i=4+c;
         for(long long int j=4;j<i;j++)
         {
             sum2+=arr[j];
         }
         sum2=sum2+sum1;
         if(sum2%3==0)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    }

}