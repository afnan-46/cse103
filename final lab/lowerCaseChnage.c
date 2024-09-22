//This program converts only lowercase word to uppercase.

#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int i, length;
    
    printf("Enter a word: ");
    fgets(word,sizeof(word),stdin);
    length = strlen(word);

    for(i = 0; i < length; i++){
        if(word[i] >= 'A' && word[i] <= 'Z')
            continue;
    word[i] = word[i] - 32;
    }

    printf("Converted word: %s", word);
    return 0;
}