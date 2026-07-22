#include <stdio.h>

int main(){
    //
    int count = 0; //计数器，初始化为0
    int sum = 0; //累加和，初始化为0
    int number; //存储每次输入的数字

    printf("请输入一系列整数，以-1结束：\n");
    scanf("%d", &number);

    while (number != -1) {
        sum += number; // 将输入的数字累加到sum中
        count++; // 计数器加1
        scanf("%d", &number); // 继续输入下一个数字
    }

    printf("%f\n", 1.0 * sum / count);

    return 0;
}
