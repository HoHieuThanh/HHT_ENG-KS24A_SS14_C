#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    int count = 0;
    printf("Nhap vao 1 chuoi bat ky: ");
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';

    for(int i = 0; i<strlen(c); i++) {
        if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z')) {
            count++;
        }
    }
    printf("So ky tu la chu cai trong chuoi la: %d\n", count);

    return 0;
}
