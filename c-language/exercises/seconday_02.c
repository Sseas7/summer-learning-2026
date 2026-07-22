#include <stdio.h>

int main(){
    // 输入一个整数，输出其逆序数
    int x;
    printf("请输入一个整数：");
    scanf("%d", &x);
    int digit;
    int ret = 0;

    while (x > 0)
    {
        digit = x % 10;
        ret = ret * 10 + digit;
        x /= 10;
    }
    printf("%d\n", ret);




    return 0;
}   