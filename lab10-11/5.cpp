#include <stdio.h>
#include <string.h>

struct player{
	char Name[10];
	int age;
	char position[10];
};

struct team{
	player players[10];
	char t_name[10];
	char s_name[10];
	int p_count;
};

void add(team *t1){
	int i= (*t1).p_count;
	printf("Enter Player name: ");
	scanf("%s",(*t1).players[i].Name);
	printf("Enter age: ");
    scanf("%d", &(*t1).players[i].age);
    printf("Enter position: ");
    scanf(" %s",(*t1).players[i].position);

    (*t1).p_count++;
    printf("Player added!\n");
}

void search(struct team t1) {
    char pos[10];
    int found = 0;

    printf("Enter position of player: ");
    scanf("%s", pos);

    for (int i = 0; i < t1.p_count; i++) {
        if (strcmp(t1.players[i].position, pos) == 0) {
            printf("Name: %s  Age: %d\n", t1.players[i].Name, t1.players[i].age);
            found = 1;   // mark that we found at least one player
        }
    }

    if (found == 0) {
        printf("No player found\n");
    }
}


void view(team t1){
	printf("Team name: %s",t1.t_name);
	printf("Sports: %s",t1.s_name);
	for(int i=0;i<t1.p_count;i++){
		printf("Name: %s\n",t1.players[i].Name);
		printf("position: %s\n",t1.players[i].position);
		printf("Age: %d\n",t1.players[i].age);
	}
}

int main(){
	struct team t;
	t.p_count=0;
	printf("Enter team name: ");
	scanf("%s",t.t_name);
	printf("Enter sports: ");
	scanf("%s",t.s_name);
	printf("\n1.Add player\n2.Search by position\n3.view details\n4.exit");
	int ch;
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
do{
	
	switch(ch){
		case 1:
			add(&t);
			break;
		case 2:
			search(t);
			break;
		case 3:
			view(t);
			break;
		case 4:
			printf("Thankyou");
	}
}while(ch!=4);
}
