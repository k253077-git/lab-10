#include <stdio.h>
#include <string.h>

struct salary{
	int basicpay;
	int bonuses;
	int deduction;
};
struct emp{
	int id;
	char name[10];
	struct salary sal;
};

int salary( emp emp1){
	return emp1.sal.basicpay + emp1.sal.bonuses - emp1.sal.deduction;
}
void details(emp emp1){
    printf("Employee details:");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Basic Pay: %d\n", emp1.sal.basicpay);
    printf("Bonus: %d\n", emp1.sal.bonuses);
    printf("Deductions: %d\n", emp1.sal.deduction);
    printf("Net Salary: %d\n", salary(emp1));
}

int main(){
   struct emp e1;
   printf("Enter id: ");
   scanf("%d",&e1.id);
   printf("Enter Name: ");
   scanf("%s",e1.name);
   printf("Enter basic pay: ");
   scanf("%d",&e1.sal.basicpay);
    printf("Enter bonouses: ");
   scanf("%d",&e1.sal.bonuses);
    printf("Enter deductions:");
   scanf("%d",&e1.sal.deduction);
   details(e1);
   
	
}

