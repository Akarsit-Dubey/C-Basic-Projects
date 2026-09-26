#include <stdio.h>

int main(void){
    int p1, p2;

    printf("Player 1, Choose (1: Rock 2: Paper 3: Scissor) : ");
    scanf("%d", &p1);

    printf("Player 2, Choose (1: Rock 2: Paper 3: Scissor) : ");
    scanf("%d", &p2);

    if (p1 == p2)
    {
        printf("Its A Tie!!");
    }
    else if ((p1 == 1 && p2==3) || (p1 == 2 && p2 ==1) || (p1 == 3 && p2==2)){
        printf("Player 1 Wins!!\n");
        printf("Yayy!!");
    }
    else{
        printf("Player 2 Wins!!\n");
        printf("Yayy!!");
    }
    
}