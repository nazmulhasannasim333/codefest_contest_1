#include <stdio.h>

int main()
{
    int initial, given, bought;
    scanf("%d %d %d", &initial, &given, &bought);
    int after_given = initial - given;
    int after_bought = after_given + bought;
    printf("%d\n", after_bought);
    return 0;
}