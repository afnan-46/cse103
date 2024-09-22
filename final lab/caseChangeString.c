//This program converts first letter of each word into uppercase.
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];
    int i, length;
    
    printf("Enter a word: ");
    fgets(sentence,sizeof(sentence),stdin);
    length = strlen(sentence);

    for(i = 1; i <= length; i++){

        if(sentence[i - 1] == ' '){
            if(sentence[i] >= 'a' && sentence[i] <= 'z')
            sentence[i] = sentence[i] - 32;
        }
    }

    printf("Converted word: %s", sentence);
    return 0;
}