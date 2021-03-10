#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    int index=0;
    char s[81];
    scanf("%s",s);
    int n=strlen(s);
    char match[81];
    memset(match,0,sizeof(match));
    for(int i=0;i<n;i++)
    {
        int tag=1;
        match[i]=s[i];
        index++;
        for(int j=index,k=0;j<index+i+1&&k<index;j++,k++)
        {
            if(match[k]!=s[j])
            {
                tag=0;
                break;
            }
        }
        if(tag==1)
        {
            printf("%d",i+1);
            break;
        }
    }
    return 0;
}