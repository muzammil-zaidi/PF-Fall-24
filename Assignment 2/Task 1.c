#include<stdio.h>
#include<string.h>

struct employee{
    int employeeCode;
    char employeeName[30];
    int day;
    int month;
    int year;
};

void employeeDetails(struct employee *e){
    printf("Enter employee code: ");
    scanf("%d",&e->employeeCode);
    
    printf("Enter employee name: ");
    getchar(); 
    fgets(e->employeeName,sizeof(e->employeeName),stdin);
    e->employeeName[strcspn(e->employeeName,"\n")]='\0'; 
    
    printf("Enter date of joining (day month year): ");
    scanf("%d %d %d",&e->day,&e->month,&e->year);
}

void calculateTenure(struct employee e[],int size){
    int currentDay,currentMonth,currentYear,tenureYears,i;
    int count=0;
    printf("Enter the current date (day month year): ");
    scanf("%d %d %d",&currentDay,&currentMonth,&currentYear);

    printf("\nEmployees with tenure of more than 3 years:\n");
    printf("------------------------------------------------------------\n");
    printf("Code\tName\t\tDate of Joining\t\tTenure (Years)\n");
    printf("------------------------------------------------------------\n");

    for(i=0;i<size;i++){
        tenureYears=currentYear-e[i].year;
        if(currentMonth<e[i].month || (currentMonth==e[i].month && currentDay<e[i].day)){
            tenureYears--;
        }
        if(tenureYears>3){
            printf("%d\t%-15s\t%02d-%02d-%d\t\t%d\n",e[i].employeeCode,e[i].employeeName,e[i].day,e[i].month,e[i].year,tenureYears);
            count++;
        }
    }
    printf("------------------------------------------------------------\n");
    printf("Total employees with tenure > 3 years: %d\n",count);
}

int main(){
	int i;
    struct employee e[4];
    for(i=0;i<4;i++){
        printf("Enter details for Employee %d:\n",i+1);
        employeeDetails(&e[i]);
    }
    calculateTenure(e,4);
    return 0;
}
