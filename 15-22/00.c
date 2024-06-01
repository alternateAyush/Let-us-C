#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[100];  // Allocate sufficient space for the input string
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    // Remove newline character if present
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    // Allocate destination array based on the length of s
    char destination[strlen(s) + 1];  
    
    int j = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        j = j + 1;
        destination[j] = s[i];
    }
    
    destination[j + 1] = '\0';  // Ensure the destination is null-terminated
    
    printf("Copied string: %s\n", destination);
    
    return 0;
}
