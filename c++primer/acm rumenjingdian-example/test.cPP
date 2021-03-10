#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
int main()
{
    double n;
    double x;
    x=sqrt(3);
    int i,j,l=6;
    i=8,j=5;
    if(i<0) if(j<0) l=1;else l=0;
    //cout<<l<<endl;
    double d_max=INT_MAX;
    double d_min=INT_MIN;
    //cout<<d_max<<"   "<<d_min<<endl;
    int max=INT_MAX;
    int min=INT_MIN;
    //cin>>n;
    //cout<<fixed<<x<<endl;
    const double pi=acos(-1.0);
    //cout<<pi<<endl;
    const double m=pi/180.0;
    n=n*m;
    //cout<<max<<"   "<<min<<endl;
    //cout<<sin(n)<<endl<<cos(n)<<endl;
    return 0;
}