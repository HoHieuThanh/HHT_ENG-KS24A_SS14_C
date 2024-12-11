#include <stdio.h>
#include <string.h>
int main(){
	char c[]="hello";
	char s[100];
	int n=strlen(c);
	for(int i=0; i<n; i++){
		s[n-i-1]=c[i];
	}
	printf("%s", s);
	
	return 0;
}