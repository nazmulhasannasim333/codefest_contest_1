#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int digit;
        scanf("%d", &digit);
        sum += digit;
    }

    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}