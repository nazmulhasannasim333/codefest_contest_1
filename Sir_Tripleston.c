#include <stdio.h>

int main()
{
    char s[78];
    scanf("%s", s);
    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 2)
        {
            printf("%c", 'a' + i);
        }
    }
    return 0;
}