#include <stdio.h>

void changeCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // If lowercase, convert to uppercase by subtracting 32
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // If uppercase, convert to lowercase by adding 32
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char str[100];
    
    // Input the string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Change case of the string
    changeCase(str);
    
    // Output the modified string
    printf("Modified string: %s\n", str);
    
    return 0;
}
