#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i,b,sum=6,df;
    srand((unsigned)time(NULL));
    i = rand()%100;
    printf("__________________________________________________________________________\n");
    printf("|This is a guessing game                                                 |\n");
    printf("|The computer will choose a target number from one to one hunderd        |\n");
    printf("|You should input the number you guess                                   |\n");         
    printf("|And the computer will tell you whether the number is big or small       |\n");
    printf("|If the number you guess is right,the game will end                      |\n");
    printf("|If there are no chance,the game will end,too                            |\n");
    printf("|So first,choose your difficulty level,easy,hard,difficult or custom mode|\n");
    printf("|easy input 0                                                            |\n");
    printf("|hard input 1                                                            |\n");
    printf("|difficult input 2                                                       |\n");
    printf("|custom mode input 3                                                     |\n");
    printf("|________________________________________________________________________|\n");
    scanf("%d",&df);
    if(df==0){
        sum=11;
        printf("OK,you have %d chance\n",sum );
    }
    if(df==1){
        sum=8;
        printf("OK,you have %d chance\n",sum );
    }
    if(df==2){
        sum=6;
        printf("OK,you have %d chance\n",sum );
    }
    if(df==3){
        printf("How many chance would you like\n");
        scanf("%d",&sum);
        printf("OK,you have %d chance\n",sum );
    }
    
    if(df!=0 && df!=1 && df!=2 && df!=3)
    {
        system("color 4");
        printf("！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！invalid number！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！");
        return 0;
    }
        
    while(1){
        printf("Input the number you guess\n");
        sum--;
        scanf("%d",&b);
        if(b>i){
            printf("That's so big, %d chances left\n",sum);
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


