#include<stdio.h>
#include<stdlib.h>

struct Employee{
    int *ratings;
    int totalScore;
};

void inputEmployees(int **ratings,int numEmployees,int numPeriods){
    int i,j;
	for(i=0;i<numEmployees;i++){
		printf("\nEnter ratings for Employee %d:\n",i+1);
        for(j=0;j<numPeriods;j++){
            do{
                printf("Enter rating for period %d (1-10): ",j+1);
                scanf("%d",&ratings[i][j]);
            } while(ratings[i][j]< 1 || ratings[i][j]>10);
        }
    }
}

void displayPerformance(int **ratings,int numEmployees,int numPeriods){
    int i,j;
    printf("\nPerformance Ratings:\n");
    printf("---------------------------------------------------\n");
	for(i=0;i<numEmployees;i++){
        printf("Employee %d: ",i+1);
        for(j=0;j<numPeriods;j++){
            printf("%d ",ratings[i][j]);
        }
        printf("\n");
    }
}

int findEmployeeOfTheYear(int **ratings,int numEmployees,int numPeriods){
    int maxAverage=0,maxIndex=0;
    int i,j;
	for(i=0;i<numEmployees;i++){
        int sum=0;
        for(j=0;j<numPeriods;j++){
            sum+=ratings[i][j];
        }
        int avg=sum/numPeriods;
        if(avg>maxAverage){
            maxAverage=avg;
            maxIndex=i+1;
        }
    }
    return maxIndex;
}

int findHighestRatedPeriod(int **ratings,int numEmployees,int numPeriods){
    int maxAverage=0,maxPeriod=0;
    int i,j;
	for(j=0;j<numPeriods;j++){
        int sum=0;
        for(i=0;i<numEmployees;i++){
            sum+=ratings[i][j];
        }
        int avg=sum/numEmployees;
        if(avg>maxAverage){
            maxAverage=avg;
            maxPeriod=j+1;
        }
    }
    return maxPeriod;
}

int findWorstPerformingEmployee(int **ratings,int numEmployees,int numPeriods){
    int minAverage=10,minIndex=0;
    int i,j;
	for(i=0;i<numEmployees;i++){
        int sum=0;
        for(j=0;j<numPeriods;j++){
            sum+=ratings[i][j];
        }
        int avg=sum/numPeriods;
        if(avg<minAverage){
            minAverage=avg;
            minIndex=i+1;
        }
    }
    return minIndex;
}

int main(){
    int numEmployees,numPeriods,i;

    printf("Enter the number of employees: ");
    scanf("%d",&numEmployees);

    printf("Enter the number of evaluation periods: ");
    scanf("%d",&numPeriods);

    int **ratings =(int **)malloc(numEmployees * sizeof(int *));
	for(i=0;i<numEmployees;i++){
        ratings[i] = (int *)malloc(numPeriods * sizeof(int));
    }
    inputEmployees(ratings,numEmployees,numPeriods);
    displayPerformance(ratings,numEmployees,numPeriods);
    int employeeOfTheYear=findEmployeeOfTheYear(ratings,numEmployees,numPeriods);
    int highestRatedPeriod=findHighestRatedPeriod(ratings,numEmployees,numPeriods);
    int worstPerformingEmployee=findWorstPerformingEmployee(ratings,numEmployees,numPeriods);

    printf("\nEmployee of the Year: %d\n",employeeOfTheYear);
    printf("Highest Rated Period: %d\n",highestRatedPeriod);
    printf("Worst Performing Employee: %d\n",worstPerformingEmployee);

    for(i=0;i<numEmployees;i++){
        free(ratings[i]);
    }
    free(ratings);

    return 0;
}
