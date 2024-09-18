#include <stdio.h>

int main()
{
    char ch[100];
    int uppercaseVowels = 0, lowercaseVowels = 0;

    printf("Enter a string: ");
    scanf("%s", ch);


    for (int i = 0; ch[i] != '\0'; i++)
    {

        if (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')

            uppercaseVowels++;


        else if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')

            lowercaseVowels++;

    }

    printf("Number of uppercase vowels: %d\n", uppercaseVowels);
    printf("Number of lowercase vowels: %d", lowercaseVowels);

                  return 0;
}
