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
    for (i = 0; i < 5; i++)//���λ�ö����һ����ʹ�ý��ֻ������һ��
    {
        printf("%d,", sum(a));
    }
}
