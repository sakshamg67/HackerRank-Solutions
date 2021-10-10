#include <stdio.h>

int length(char arr[]){
	int count=0;
	for(int i=0; arr[i]!='\0'; i++){
		count++;
	}
	return count;
}

int main(){
	char str[1000];
	gets(str);
	for(int i=0; i<length(str); i++){
		if(str[i]>='a' && str[i]<='z' ){
		  str[i]-=32;
		}
		else if(str[i]>='A' && str[i]<='Z'){
			str[i]+=32;
		}
	}
	printf("%s", str);
}
