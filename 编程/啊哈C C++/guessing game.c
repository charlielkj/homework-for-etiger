#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int i,b,sum=6,df,count=0,i_f,area=100,game_level=1;
    srand((unsigned)time(NULL));
    i = rand()%area;
    printf(" ___________________________________________________________________\n");
    printf("|This is a guessing game                                            |\n");
    printf("|The computer will choose a target number from 1 to 100             |\n");
    printf("|You should input the number you guess                              |\n");         
    printf("|And the computer will tell you whether the number is big or small  |\n");
    printf("|If the number you guess is right,the game will end                 |\n");
    printf("|If there are no chance,the game will end,too                       |\n");
    printf("|So first,choose your difficulty mode                               |\n");
    printf("|easy mode input 0                                                  |\n");
    printf("|hard mode input 1                                                  |\n");
    printf("|difficult mode input 2                                             |\n");
    printf("|custom mode input 3                                                |\n");
    printf("|infinite mode input 4                                              |\n" );
    printf("|PS:Do not input a mark												|\n") 
	printf("|___________________________________________________________________|\n");
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
        printf("Input the area(Input 123,the area of the target number will be 1 to 123)\n");
        scanf("%d",&area);
        i = rand()%area;
        printf("How many chance would you like\n");
        scanf("%d",&sum);
        if(sum<=0){
            printf("！！！！！！！！！！！！！！！！！！invalid number！！！！！！！！！！！！！！！！！！");
            return 0;
        }
        printf("OK,you have %d chance\n",sum );
    }
    if(df==4){
         sum=80;
    }
    if(df!=0 && df!=1 && df!=2 && df!=3 && df!=4 ){
        printf("！！！！！！！！！！！！！！！！！！invalid number！！！！！！！！！！！！！！！！！！");
        return 0;
    }
    while(1){
        if(df==4){
            printf("GAME LEVEL %d\n",game_level);
            if(game_level==10){
                sum+=70;
            }
            if(game_level==20){
                sum+=60;
            }
            if(game_level>=30 || game_level%10==0 ){
                sum+=50;
            }
        }
      
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
            game_level++;
            printf("The number is %d\n",i);
            i = rand()%area;
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
    

