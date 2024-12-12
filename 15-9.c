#include <stdio.h>
#include <string.h>

void removeCharacter(char str[], char ch) {
    int length = strlen(str);
    int j = 0;

    for (int i = 0; i < length; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char ch;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    removeCharacter(str, ch);
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);

    return 0;
}
