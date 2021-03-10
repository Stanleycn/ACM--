#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c[100],i=0,j=0;
    double a[100],b[100];
    double n[100];
    while(1)
    {
        cin>>a[i]>>b[i]>>c[i];
        if(a[i]==0&&b[i]==0&&c[i]==0) break;
        n[i]=a[i]/b[i];
        i++;
    }
    for(j=0;j<i;j++)
    {
        cout<<fixed<<setprecision(c[j])<<n[j]<<endl;
    }
    return 0;
}