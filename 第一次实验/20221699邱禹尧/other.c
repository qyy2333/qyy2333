#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("请输入三个数字，用逗号隔开：");
    scanf("%d, %d, %d", &a, &b, &c);
    max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    printf("%d", max);
}
