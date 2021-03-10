#include<stdio.h>
#include<string.h>
#include<ctype.h>
const char* rev="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[]={"not a palindrome","a regular palindrome","a mirrored string","a mirrored palindrome"};
char r(char ch)
{
    if(isalpha(ch)) return rev[ch-'A'];
    return rev[ch-'0'+25];
}
int main()
{
    char s[20];
    while(scanf("%s",s)==1)
    {
        int len=strlen(s);
        int m=1,p=1;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]!=s[len-i-1]) m=0;
            if(r(s[i])!=s[len-i-1]) p=0;
        }
        printf("%s--is %s.\n\n",s,msg[p*2+m]);
    }
    return 0;
}