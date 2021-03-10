#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char map[6][6]={"TRGSJ","XDOKI","M*VLM","WPABE","UQHCF"} ;
    char c[15];
    int k=0;
    while(1)
    {
        scanf("%c",&c[k]);
        if(c[k]=='0') break;
        k++;
    }
    int i=2,j=1;
    for(int l=0;l<k;l++)
    {
         switch(c[l])
        {
            case 'A':if(i-1<0){
                    printf("This puzzle has no final configuration!\n");
                }
                else{
                    map[i][j]=map[i-1][j];
                    map[i-1][j]='*';
                    i=i-1;
                }
                break;
           case 'B':if(i+1>=5){
                    printf("This puzzle has no final configuration!\n");
                }
                else{
                    map[i][j]=map[i+1][j];
                    map[i+1][j]='*';
                    i=i+1;
                }
                break;
            case 'L':if(j-1<0){
                    printf("This puzzle has no final configuration!\n");
                }
                else{
                    map[i][j]=map[i][j-1];
                    map[i][j-1]='*';
                    j=j-1;
                }
                break;
            case 'R':if(j+1>=5){
                    printf("This puzzle has no final configuration!\n");
                }
                else{
                    map[i][j]=map[i][j+1];
                    map[i][j+1]='*';
                    j=j+1;
                }
                break;
            default:printf("This puzzle has no final configuration!\n");  
        }

    }
    for(int O=0;O<5;O++)
    {
        printf("%s\n",map[O]);
        //for(int P=0;P<5;P++)
       // {
       //     printf("%c",map[O][P]);
       // }
    }
    return 0;
    
}