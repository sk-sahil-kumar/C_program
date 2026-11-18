#include <stdio.h>
int main()
{
    int a, b, l;
    printf("Enter two no: ");
    scanf("%d %d", &a, &b);
    for (l = a>b?a:b; l <= a * b; l+=a>b?a:b)
    {
        if (l % a == 0 && l % b == 0)
        {
            break;
        }
    }
    printf("%d", l);
    return 0;
}