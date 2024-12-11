#include <stdio.h>
#include <string.h>
int main(){
	char c[]="hello world", s;
	int n=strlen(c);
	int count=0;
	
	printf("Nhap ky tu can tim: ");
	scanf("%c", &s);
	
	for(int i=0; i<n; i++){
		if(c[i]==s){
			count++;
		}
	}
	printf("Ky tu '%c' xuat hien %d lan trong chuoi '%s'\n", s, count, c);

	
	return 0;
}
