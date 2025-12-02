#include <stdio.h>
int main()
{
    int first, second, next;
    first = 0;
    second = 1;
    int n;
    printf("enter term:");
    scanf("%d", &n);
    printf("%d %d", first, second);
    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }

    return 0;
}
