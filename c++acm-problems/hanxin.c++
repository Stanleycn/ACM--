#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c;
    cin>>a>>b>>c;
    for(x=10;x<=100;x++)
    {
        if(x%3==a&&x%5==b&&x%7==c)
        {
            cout<<x<<endl;
            return 0;
        }
    }
    cout<<"NO ANSWER"<<endl;
    return 0;


}