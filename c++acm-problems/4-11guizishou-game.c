#include<stdio.h>
#include<string.h>
#define maxn 100
int leftt,chance;
char s[maxn],s2[maxn];
int win,lose;
void guess(char ch)
{
    int bad=1;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==ch){ leftt--;s[i]=' ';bad=0;}
    }
    if(bad) --chance;
    if(!chance) lose=1;
    if(!leftt) win=1;
}
int main()
{
    int rnd;
    while(scanf("%d%s%s",&rnd,s,s2)==3 && rnd !=-1 )
    {
        printf("Round %d\n",rnd);
        win=lose=0;
        leftt=strlen(s);
        chance =7;
        for(int i=0;i<strlen(s2);i++)
        {
            guess(s2[i]);
            if(win||lose) break;
        }
        if(win) printf("You win.\n");
        else if(lose) printf("You lose.\n");
        else printf("You chickened out.\n");
    }
    return 0;
}