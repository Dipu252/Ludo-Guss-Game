#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fanct_H(int num,int **i){
       int H[]={8,9,10,11,12};
        for(int j=0;j<=4;j++){
            if(H[j]==num){
            **i=**i+20;
            break;
            }
            else if(H[j]!=num && j==4){
                **i=**i-10;
            }
        }
}
void fanct_L(int num,int **i){
        int L[] = {1, 2, 3, 4, 5, 6};
         for(int j=0;j<=5;j++){
            if(L[j]==num){
            **i=**i+20;
            break;
            }
            else if(L[j]!=num && j==5){
                **i=**i-10;
            }
        }
}
void fanct_E(int num,int **i){
        int E = 7;
         if(E==num){
            **i=**i+100;
            }
            else{
                **i=**i-10;
            }
        }
void enter_switch(char x,int num,int *i){
    switch (x)
    {
    case 'H':fanct_H(num,&i);
        break;
    case 'h':fanct_H(num,&i);
         break;
    case 'L':fanct_L(num,&i);
        break;
    case 'l':fanct_L(num,&i);
        break;
    case 'E':fanct_E(num,&i);
        break;
    case 'e':fanct_E(num,&i);
        break;
    default:printf("Your press key is wrong\nPlease try again\n");
        break;
    }
}
int main()
{
    int num, i = 200,end;
      char guess;       
    printf("Welcome to game\nYour wallet balance 200\n");
    do
    {       
        srand(time(0));
        num = rand() % 12 + 1;
        // printf("%d",num);
        printf("Number is higher or lower then 7 or equal 7 press H,h,L,l,E,e respectively \n");
        scanf("%s", &guess);
        enter_switch(guess,num,&i);
        printf("Your wallet balence=%d\n",i);
        printf("Again continue game press 1 or press any key to end the game\n");
        scanf("%d",&end);
     } while(end==1);
    return 0;
}