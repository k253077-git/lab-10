#include <stdio.h>

int sum(int n){
	if(n==0){
		return 0;
	}
	return (n%10)+ sum(n/10);
}

int main(){
	int n,ret;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	ret=sum(n);
	printf("Sum is %d",ret);
}
