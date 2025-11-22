#include <stdio.h>
#include <ctype.h>

int main(){
	int c=0,w=0,l=0,word=0;
	char ch;
	FILE *ptr;
	ptr=fopen("file.txt","r");
	
	while((ch=fgetc(ptr))!=EOF){
		c++;
		
		if(ch== '\n'){
			l++;
		}
		if (isspace(ch)) {  // check for space 
            word = 0;
        } else if(word==0){
			word=1;
			w++;
		}
	}
	fclose(ptr);
	
	printf("Characters are %d\n",c);
	printf("Words are %d\n",w);
	printf("Lines are %d",l);
	
	
	
}
