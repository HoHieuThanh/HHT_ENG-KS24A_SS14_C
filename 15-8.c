#include <stdio.h>
#include <string.h>

int main(){
	
	char text[]="hello world";
	int n=strlen(text);
	text[0]=toupper(text[0]);
	for(int i=0; i<n; i++){
		if(text[i-1]==' '){
			text[i]=toupper(text[i]);
		}
	}
	printf("%s", text);
	
	return 0;
}