#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,s,b,c,d;
    for(a=100;a<1000;a++)
    {
        s=0;
        b=(a/100);
        b=b*b*b;
        c=a%10;
        c=c*c*c;
        d=(a/10)%10;
        d=d*d*d;
        s=b+c+d;
        if(s==a)
        {
            cout<<a<<" is daffodil"<<endl;
        }
    }
    return 0;
}
