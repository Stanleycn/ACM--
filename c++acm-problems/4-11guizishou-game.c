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
        printf("Round %d\n",rnd);//第几回合
        win=lose=0;   //求解一组新数据前要初始化
        leftt=strlen(s);//单词长度
        chance =7;
        for(int i=0;i<strlen(s2);i++)
        {
            guess(s2[i]);    //猜一个字母
            if(win||lose) break; //检查状态
        }
        //根据结果输出
        if(win) printf("You win.\n");
        else if(lose) printf("You lose.\n");
        else printf("You chickened out.\n");
    }
    return 0;
}


//题目描述给一个单词，你最多只能错6次，每次猜中后会显示所有猜中的字母

//解答思路：用chance标记次数，每次遍历单词，若相同就置零，且单词长度减一，知道为0.