#include<stdio.h>
#include<string.h>

struct bookinfo{
	char title[50];
	char author[30];
	float price;
};
struct libraryinfo{
	char name[50];
	int book;
	struct bookinfo books[10];
};
void detail(struct libraryinfo s){
	int i;
	printf("Enter library name: ");
	fgets(s.name,sizeof(s.name),stdin);
	s.name[strcspn(s.name,"\n")]='\0';
	printf("Enter total number of books in the library: ");
	scanf("%d",&s.book);
	getchar();
	for(i=0;i<s.book;i++){
		printf("\nEnter details of book %d\n",i+1);
		
		printf("Title: ");
		fgets(s.books[i].title,sizeof(s.books[i].title),stdin);
        s.books[i].title[strcspn(s.books[i].title,"\n")]='\0';
        
        printf("Author: ");
        fgets(s.books[i].author,sizeof(s.books[i].author),stdin);
        s.books[i].author[strcspn(s.books[i].author,"\n")]='\0';
        
        printf("Price: ");
        scanf("%f",&s.books[i].price);
        getchar();
	}
	printf("\nLibrary Name: %s\n",s.name);
    printf("Total Books: %d\n",s.book);
    printf("\nBooks in the library:\n");
    for(i=0;i<s.book;i++){
        printf("\nBook %d:\n",i+1);
        printf("Title: %s\n",s.books[i].title);
        printf("Author: %s\n",s.books[i].author);
        printf("Price: %.2f\n",s.books[i].price);
    }
}

int main(){
	struct libraryinfo s;
	detail(s);
	return 0;
}
