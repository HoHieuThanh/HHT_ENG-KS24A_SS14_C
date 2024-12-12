#include <stdio.h>
#include <string.h>
int main(){
	
	char str[]="a2bc@4?";
	int countChar=0;
	int countNum=0;
	int countSpecial=0;
	int size = strlen(str);
	
	for(int i=0; i<size; i++){
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			countChar++;
		}else if(str[i]>='0' && str[i]<='9'){
			countNum++;
		}else{
			countSpecial++;
		}
	}
	printf("So ky tu chu: %d\nSo ky tu so: %d\nSo ky tu dac biet: %d", countChar, countNum, countSpecial);
	
	return 0;
}