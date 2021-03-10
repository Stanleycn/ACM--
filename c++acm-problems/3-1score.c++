#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char s[85];
    scanf("%s",s);
    int n=strlen(s);
    int count=0,sub=0;
    for(int i=0;i<n;i++)
    {
        if((s[i]-'O')==0)
        {
            count+=1;
        }
        else
        {
            count=0;
        }
        sub+=count;
    }
    cout<<sub;
    return 0;
}

