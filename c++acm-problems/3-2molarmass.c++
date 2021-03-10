#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char a[5]={'C','H','O','N'};
    double b[5]={12.01,1.008,16.00,14.01};
    char s[50];
    memset(s,0,sizeof(s));
    scanf("%s",s);
    int n=strlen(s);
    double sub=0;
    for(int i=0;i<n; )
    {
        for(int j=0;j<4;j++)
        {
            if(s[i]==a[j])
            {
                if((s[i+1]-'0')>0&&(s[i+1]-'0')<=9)
                {
                    sub=sub+b[j]*(s[i+1]-'0');
                    i+=2;
                }
                else
                {
                    sub=sub+b[j];
                    i++;
                }          
            }
        }
    }
    cout<<sub<<endl;
    return 0;

}