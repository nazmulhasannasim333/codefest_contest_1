#include <stdio.h>

int main()
{
    char word[101];
    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == word[0] && word[i + 1] == '\0')
        {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No");
    return 0;
}