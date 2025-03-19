#include<stdio.h>
#include<string.h>

struct Student{
    char name[50];
    int age,rollnum,marks[3];
};

void display(struct Student s,float average){
    printf("\nStudent Information:\n");
    printf("Name: %s\n",s.name);
    printf("Age: %d\n",s.age);
    printf("Roll Number: %d\n",s.rollnum);
    printf("Marks: %d, %d, %d\n",s.marks[0],s.marks[1],s.marks[2]);
    printf("Average Marks: %.2f\n",average);
}

float average(int marks[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum=sum+marks[i];
    }
    return (float)sum/n;
}

int main(){
    int n,i,j;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    getchar();

    if(n>=0){
        struct Student s[n];

        for(i=0;i<n;i++){
            printf("\nEnter details for student %d:\n",i+1);
            printf("Name: ");
            fgets(s[i].name,sizeof(s[i].name),stdin);
            s[i].name[strcspn(s[i].name,"\n")]='\0';

            printf("Age: ");
            scanf("%d",&s[i].age);

            printf("Roll Number: ");
            scanf("%d",&s[i].rollnum);

            printf("Enter marks for 3 subjects: ");
            for(j=0;j<3;j++){
                scanf("%d",&s[i].marks[j]);
            }
            getchar();
        }

        printf("\nDisplaying Student Information:\n");
        for(i=0;i<n;i++){
            float avg=average(s[i].marks,3);
            display(s[i],avg);
        }
    }
    else{
        printf("Invalid Input");
    }

    return 0;
}
