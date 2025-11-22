#include <stdio.h>
#include <string.h>


int palindrome(char word[]){
	int len =strlen(word);
	for(int i=0;i<len/2;i++){
		if(word[i]!= word[len-1-i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char str[5][20];
	int i,j;
	printf("Enter 5 words: \n");
	for(i=0;i<5;i++){
		scanf("%s",str[i]);
	}
	
	for(i=0;i<5;i++){
		if(palindrome(str[i])){
			printf("Palindrome word\n");
		}else {
			printf("Not Palindrome\n");
		}
	}
}
