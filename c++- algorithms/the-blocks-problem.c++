#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

const int maxn=30;
int n;
vector<int> pile[maxn];
//find index of block
void find_block(int a,int& p,int& h)
{
    for(p=0;p<n;p++)
    {
        for(h=0;h<pile[p].size();h++)
        {
            if(pile[p][h]==a) return;
        }
    }
}
//把p堆高度为h的木块上方的所有木块移回原位
void clear_over(int p,int h)
{
    for(int i=h+1;i<pile[p].size();i++)
    {
        int b=pile[p][i];
        pile[b].push_back(b);

    }
    pile[p].resize(h+1);
}
//把第p堆高度为h及其上方的木块整体移动到p2堆的顶部
void pile_onto(int p,int h,int p2)
{
    for(int i=h;i<pile[p].size();i++)
    {
        pile[p2].push_back(pile[p][i]);
    }
    pile[p].resize(h);
}

void print(){
    for(int i=0;i<n;i++)
    {
        printf("%d:",i);
        for(int j=0;j<pile[i].size();j++) printf(" %d",pile[i][j]);
        printf("\n");
    }
}

int main()
{
    int a,b,c=0;
    cin>>n;
    string s1,s2;
    for(int i=0;i<n;i++) pile[i].push_back(i);
    while(cin>>s1>>a>>s2>>b&&c<1){
        int pa,pb,ha,hb;
        find_block(a,pa,ha);
        find_block(a,pb,hb);
        if(pa==pb) continue;
        if(s2=="onto") clear_over(pb,hb);
        if(s1=="move") clear_over(pa,ha);
        pile_onto(pa,ha,pb);
        c++;
    }
    print();
    return 0;
}