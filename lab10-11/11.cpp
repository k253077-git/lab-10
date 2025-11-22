#include <stdio.h>
#include <string.h>


int main(){
	char words[5][15]={"Umar","Happy","programming","Tech","Fast"};
	int found=0;
	char chara[15];
	printf("Enter a word to search: ");
	scanf("%s",chara);
	for(int i=0;i<5;i++){
		if(strcmp(words[i],chara)==0){
			found=1;
		}
	}
	if(found){
		printf("Found");
	}else{
		printf("Not found");
	}
}
