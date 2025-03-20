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
    s.name[strcspn(s.name, "\n")]='\0';
    printf("Enter total number of books in the library: ");
    scanf("%d",&s.book);
    getchar();
    for(i=0;i<s.book;i++){
        printf("\nEnter details of book %d\n",i+1);
        printf("Title: ");
        fgets(s.books[i].title, sizeof(s.books[i].title), stdin);
        s.books[i].title[strcspn(s.books[i].title,"\n")]='\0';
        
        printf("Author: ");
        fgets(s.books[i].author,sizeof(s.books[i].author),stdin);
        s.books[i].author[strcspn(s.books[i].author,"\n")] ='\0';
        
        printf("Price: ");
        scanf("%f",&s.books[i].price);
        getchar();
    }
    FILE *fs=fopen("c.txt","w");
    if(fs==NULL){
        printf("Error opening file.\n");
        return;
    }
    fprintf(fs,"Library Name: %s\n",s.name);
    fprintf(fs,"Total Books: %d\n",s.book);
    for(i=0;i<s.book;i++){
        fprintf(fs,"\nBook %d:\n",i+1);
        fprintf(fs,"Title: %s\n",s.books[i].title);
        fprintf(fs,"Author: %s\n",s.books[i].author);
        fprintf(fs, "Price: %.2f\n",s.books[i].price);
    }
    fclose(fs);
    printf("\nLibrary Data from File:\n");
    fs=fopen("c.txt","r");
    if(fs==NULL){
        printf("Error opening file.\n");
        return;
    }
    char ch;
    while((ch=fgetc(fs))!=EOF){
        putchar(ch);
    }
    fclose(fs);
}
int main(){
    struct libraryinfo s;
    detail(s);
    return 0;
}
