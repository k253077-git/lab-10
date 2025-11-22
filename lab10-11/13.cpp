#include <stdio.h>

int main(){
	FILE *fptr;
	char ch;
	fptr = fopen("data.txt","w");
	if(fptr==NULL){
		printf("Cant open");
	}
	fclose(fptr);
	printf("All contents are deleted\n");
	fptr=fopen("data.txt","r");
	if(fptr==NULL){
		printf("Cant open the file");
	}
	ch = fgetc(fptr);
    if (ch == EOF) {
        printf("File is empty.");
    }
	fclose(fptr);
}
