#include <stdio.h>
#include<string.h>

int search(char str1[],int start, int end){
	if(start>end){
		return 0;
	}
	int count=0;
		if(str1[start]== 'a'|| str1[start]=='e'||str1[start]=='i'|| str1[start]=='o'|| str1[start]=='u'){
			count=1;
		}
	return count+search(str1,start+1,end);
}

int main(){
	char str[20];
	printf("Enter a string: ");
	scanf("%s",str);
	int len = strlen(str);
	int total = search(str,0,len-1);
	printf("Total vowels %d",total);
}
