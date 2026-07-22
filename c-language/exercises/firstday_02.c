#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    //写一个猜数游戏来练习循环
    srand(time(0)); // 用当前时间作为随机数种子
    int guess = 0;
    int num = rand()%100 + 1; // 生成1到100之间的随机数
    int attempts  = 0;

    printf("请输入一个数：");
    scanf("%d", &guess);

    do
    {
        if(guess > num){
            
            printf("猜大了，请重新输入一个数：");
            attempts ++;
            scanf("%d", &guess);
        }
        else if(guess < num){
            printf("猜小了，请重新输入一个数：");
            attempts ++;
            scanf("%d", &guess);
        }
        else{
            printf("恭喜你，猜对了！\n");
        }
      
    } while (num != guess);

    printf("您猜了%d次就猜中了!", attempts + 1);
    return 0;
}