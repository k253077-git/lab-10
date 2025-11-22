#include <stdio.h>

struct flight{
	int num;
	char depcity[10];
	char descity[10];
	char date[10];
	int avseats;
};
void book(flight *f){
    if(f->avseats > 0){
    	f->avseats--;
    	printf("Ticket is booked\n");
    	printf("Remaing seats are: %d\n",f->avseats);
	}else{
		printf("No booking");
	}
}
void show(flight f){
	printf("F_Number: %d\n",f.num);
	printf("F_Depcity: %s\n",f.depcity);
	printf("F_Descity: %s\n",f.descity);
	printf("F_date: %s\n",f.date);
	printf("F_Avail_Seats: %d\n\n\n",f.num);
}

int main(){
	printf("===Flight management system===\n");
	int ch;
    struct flight f1={1003,"Khi","Isb","19NOV2025",10};
    do{
    	 printf("1.Book seat\n2.Show flight info\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    	switch (ch){
    		case 1:
    			book(&f1);
    			break;
    		case 2:
    			show(f1);
    			break;
    		case 3:
    			printf("Thankyou");
    		default:
    			printf("Invalid");
		}
	}while (ch=3);
    
}
