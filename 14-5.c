/*#include <stdio.h>
#include <string.h>
int main(){
	char c[100];
	char s=' ';
	int count = 1;
	
	fgets(c,strlen(c),stdin);

	
	for(int i=0; i<strlen(c); i++){
		if(c[i]==s){
			count++;
		}
	}
	if(count!=1){
		printf("Chuoi '%s' co %d tu", c, count);
	}else{
		printf("Chuoi '%s' co mot tu", c);
	}
	
	return 0;
}*/

#include <stdio.h>
#include <string.h>

int main(){
    char c[100];
    int count = 1;

	printf("Nhap 1 chuoi bat ky (Khong bat dau hoac ket thuc bang dau cach)\n");
    fgets(c, sizeof(c), stdin);

    c[strcspn(c, "\n")] = '\0';

    int n = strlen(c);

    for(int i = 0; i < n; i++) {
        if(c[i] == ' ') {
            count++;
        }
    }

    if(count > 1) {
        printf("Chuoi '%s' co %d tu\n", c, count);
    } else {
        printf("Chuoi '%s' co mot tu\n", c);
    }

    return 0;
}
