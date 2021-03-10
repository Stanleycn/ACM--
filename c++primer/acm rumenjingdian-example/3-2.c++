#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int n,k,first=1;
    int i,j;
    cin>>n>>k;
    int num[1001];
    memset(num,0,sizeof(num));
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(j%i==0) num[j]=!num[j];
        }
    }
    for(i=1;i<=n;i++)
    {
        if(num[i])
       {
           if(first) first=0;
           else cout<<" ";
           cout<<i;
        }
    }
    return 0;
}