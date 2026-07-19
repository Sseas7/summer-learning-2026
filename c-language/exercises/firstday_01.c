#include <stdio.h>

//运用switch-case语句来将百分制成绩转换为五分制

int main() {
    printf("请输入成绩");
    int score;
    scanf("%d", &score);
    score /= 10;
    
    switch(score){
        case 10:
        case 9:
            printf("成绩为A");
            break;
        case 8:
            printf("成绩为B");
            break;
        case 7:
            printf("成绩为C");
            break;
        case 6:
            printf("成绩为D");
            break;
        default:
            printf("成绩为F");
            break;
    }
    
}