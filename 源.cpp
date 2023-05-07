#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++)//这个位置多打了一个；使得结果只运行了一次
    {
        printf("%d,", sum(a));
    }
}
