#include<stdio.h>
#include <string.h>

struct movie{
	char name[10];
	char genre[10];
	char director[10];
	int date;
	float rating;
};

void add(movie m[], int *count){
	printf("Enter movie name: ");
	scanf("%s",m[*count].name);
	printf("Enter movie genre: ");
	scanf("%s",m[*count].genre);
	printf("Enter movie director: ");
	scanf("%s",m[*count].director);
	printf("Enter movie release date: ");
	scanf("%d",&m[*count].date);
	printf("Enter movie rating: ");
	scanf("%.1f",&m[*count].rating);
	(*count)++;
	printf("\nMovies added");
}

void show(movie m[], int count){
	if(count>0){
	printf("--All Movies--\n");
	for(int i=0;i<count;i++){
		printf("Movie %d\n",i+1);
		printf("Name; %s\n",m[i].name);
		printf("Genre; %s\n",m[i].genre);
		printf("Director; %s\n",m[i].director);
		printf("Realease date; %d\n",m[i].date);
		printf("Rating; %.1f\n\n",m[i].rating);
	}
}else{
	printf("No any movie\n\n");
}
}
void search(movie m[],int count){
	if (count>0){
	char gen[10];
	printf("Enter Genre: ");
	scanf("%[^\n]",gen);
	
	for (int i = 0; i < count; i++) {
        if (strcmp(m[i].genre, gen) == 0) {
            printf("\nTitle: %s\n", m[i].name);
            printf("Director: %s\n", m[i].director);
            printf("Year: %d\n", m[i].date);
            printf("Rating: %.1f\n", m[i].rating);
        }
    }
}else{
	printf("Add first");
}
}

int main(){
	printf("--Movie system--\n");
	int ch,count=0;
	struct movie m1[10];
	while(ch!=4){
			printf(" 1.Add movie\n2.view movie\n3. find movie\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
		switch(ch){
			case 1:
				add(m1,&count);
				break;
			case 2:
				show(m1,count);
				break;
			case 3:
				search(m1,count);
				
		}
	}
}
