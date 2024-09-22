
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    int c = 0;
    
    printf("Enter a word: ");
    fgets(ch,sizeof(ch),stdin);
    
    for(int i = 0; i < strlen(ch); i++){

        if(ch[i] == ch[i + 1]){
            printf("\n%c%c", ch[i], ch[i + 1]);
            c++;
        }
    }

    if(c == 0)
        printf("\nNo consecutive letter");
    else
        printf("\nConsecutive letters found");

    return 0;
}