#include <stdio.h>

int search(int arr[], int n, int target, int index){
	if(index>n){
		return 0;
	}
	if(arr[index]==target){
		return index;
	}
	
	return search(arr,n,target,index+1);
}

int main(){
	int n,t;
	printf("Enter size of array: ");
	scanf("%d",&n);s
	int arr[n];
	printf("Enter elements of array:\n");
	for(int i=0;i<n;i++){   
	scanf("%d",&arr[i]);
  }
	printf("Enter nmber of search:\n");
	scanf("%d",&t);
	int res= search(arr,n,t,0);
	
	if(res==0){
		printf("%d Not found",t);
	}else {
		printf("%d found at index %d",t,res);
	}
	
	
}
