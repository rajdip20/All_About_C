/*
    Frequency of characters.

    ~~~~~~ Update Date : 08/07/2021 ~~~~~~
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i, c = 0;
    int freq[26] = {0};
    printf("Enter any string in small letter: ");
    gets(s);
    while (s[c] != '\0')
    {
        if (s[c] >= 'a' && s[c] <= 'z')
        {
            i = s[c] - 'a';
            freq[i]++;
        }
        c++;
    }
    for (c = 0; c < 26; c++)
        printf("%c : %d\n", c + 'a', freq[c]);
}