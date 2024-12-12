#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "bcdaac";
    char characters[100];
    int counts[100] = {0};
    int length = strlen(s);
    int charIndex = 0;
    for (int i = 0; i < length; i++) {
        char currentChar = s[i];
        int found = 0;
        for (int j = 0; j < charIndex; j++) {
            if (characters[j] == currentChar) {
                counts[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            characters[charIndex] = currentChar;
            counts[charIndex] = 1;
            charIndex++;
        }
    }
    
    for (int i = 0; i < charIndex; i++) {
        printf("%c: %d\n", characters[i], counts[i]);
    }
    
    return 0;
}
