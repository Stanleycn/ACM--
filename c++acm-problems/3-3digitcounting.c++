#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char num[11]={'0','1','2','3','4','5','6','7','8','9'};
    int count[11]={0};
    int n;
    char s[10001];
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(s[i]==num[j])
            {
                count[j]+=count[j]+1;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",count[i]);
    }
    printf("\n");
    return 0;
}