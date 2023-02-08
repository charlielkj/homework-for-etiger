#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i,b,sum=6,df;
    srand((unsigned)time(NULL));
    i = rand()%100;
    printf("Choose your mode,easy,hard,difficult or custom mode\n");
    printf("easy input 0\n");
    printf("hard input 1\n");
    printf("difficult input 2\n");
    printf("custom mode input 3\n");
    scanf("%d",&df);
    if(df==0){
        sum=11;
        printf("OK,you have %d chance\n",sum);
    }
    if(df==1){
        sum=7;
        printf("OK,you have %d chance\n",sum);
    }
    if(df==2){
        sum=5;
        printf("OK,you have %d chance\n",sum);
    }
    if(df==3){
        printf("Input how many chance would you like\n");
        scanf("%d",&sum);
        printf("OK,you have %d chance\n",sum);
    }
    if(df!=0 && df!=1 && df!=2 && df!=3)
    {
       printf("！！！！！！！！！！！！！！！！！！！！！！！！！invalid number！！！！！！！！！！！！！！！！！！！！！！！！！");
       return 0;
    }
        
    while(1){
        sum--;
        scanf("%d",&b);
        if(b>i){
            printf("That's so big,%d chances left\n",sum);
        }
        if(b<i){
            printf("That's so small,%d chances left\n",sum);
        }
        if(b==i){
            printf("Congratulations\n");
            break;
        }
        if(sum==0){
            printf("There is no chance left\n");
            break;
        }
    }
    printf("The number is %d",i);
    return 0;
}
//編編祥陛弊