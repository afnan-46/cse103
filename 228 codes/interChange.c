#include <stdio.h>

void changeCase(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {

            str[i] = str[i] - ('a' - 'A');
        }

        else if (str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] = str[i] + ('a' - 'A');
        }

        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");

    int i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF && i < 99)
    {
        str[i++] = ch;
    }
    str[i] = '\0';

    printf("Original String: %s", str);
           changeCase(str);
           printf("Changed Case String: %s", str);

                  return 0;
}
