#include<iomanip>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    const double pi=acos(-1.0);
    double r,h,s1,s2,s;
    cin>>r>>h;
    s1=pi*r*r;
    s2=2*pi*r*h;
    s=2.0*s1+s2;
    cout<<fixed<<setprecision(3)<<s;
    return 0;

}