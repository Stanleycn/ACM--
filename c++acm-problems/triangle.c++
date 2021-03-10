#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0,k,m;
    cin>>n;
    for(i=n;i>0;i--)
    {
        m=j;
        while(m)
        {
            cout<<" ";
            m--;
        }
        j++;
        for(k=0;k<(2*i-1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}