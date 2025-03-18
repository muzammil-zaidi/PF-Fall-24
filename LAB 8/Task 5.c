#include<stdio.h>
#include<string.h>

struct info{
    char t[100];
    char a[100];
    int p;
};
void display(struct info s){
    printf("\nBook Information\n");
    printf("Book Title: %s\n", s.t);
    printf("Author Name: %s\n", s.a);
    printf("Number of Pages: %d\n", s.p);
}

int main(){
    struct info s;
    printf("Enter book title: ");
    fgets(s.t,sizeof(s.t),stdin);
    s.t[strcspn(s.t,"\n")]='\0';
    
    printf("Enter author name: ");
    fgets(s.a,sizeof(s.a),stdin);
    s.a[strcspn(s.a,"\n")]='\0';
    
    printf("Enter the number of pages: ");
    scanf("%d",&s.p);

    display(s);
    return 0;
}
