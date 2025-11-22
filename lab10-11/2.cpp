#include <stdio.h>

void rev(char string[]){
    if(string[0]=='\0'){  
        return;
    } 
    
    rev(string+1);
    printf("%c",string[0]);
}

int main(){
    char arr[50];
    printf("Enter a string: "); 
    scanf("%s",arr);
    printf("Reverse: ");  
    rev(arr);
    printf("\n");
   
}
