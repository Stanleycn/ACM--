#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int j=0,i=0,k;
    double n[100],m[100];
    while(1)
    {
        cin>>n[j]>>m[j];
        if(n[j]==0&&m[j]==0)
        {
            break;
        }
        j++;
    }
    double s[100];
    int x=0;
    for(k=0;k<j;k++,x++)
    {
        s[x]=0;
        while(n[i]<=m[i])
        {
            s[x]=s[x]+1/(n[i]*n[i]);
            n[i]=n[i]+1;
        }
        cout<<fixed<<setprecision(5)<<s[x]<<endl;
        i++;
    }
    return 0;


}