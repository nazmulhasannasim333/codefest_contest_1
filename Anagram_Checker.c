#include <stdio.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    int freq_a[26] = {0}, freq_b[26] = {0};
    if (len_a != len_b)
    {
        printf("No");
        return 0;
    }
    int i = 0;
    for (i = 0; i < len_a && i < len_b; i++)
    {
        freq_a[a[i] - 'a']++;
        freq_b[b[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        if (freq_a[i] != freq_b[i])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");

    return 0;
}