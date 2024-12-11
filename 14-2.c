#include <stdio.h>
#include <string.h>
int main(){
	char c[]="hello";
	for(int i=0; i<strlen(c); i++){
		printf("%c ",c[i]);
	}
	
	return 0;
}