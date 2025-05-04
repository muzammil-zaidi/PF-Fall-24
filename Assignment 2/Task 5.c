#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void initializeInventory(char ***speciesSupplies,int **supplyCounts,int *numSpecies){
    int i;
    printf("Enter the number of species: ");
    scanf("%d",numSpecies);
    *speciesSupplies=(char **)malloc(*numSpecies*sizeof(char *));
    *supplyCounts=(int *)malloc(*numSpecies*sizeof(int));
    if(*speciesSupplies==NULL||*supplyCounts==NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for(i=0;i<*numSpecies;i++){
        (*speciesSupplies)[i]=NULL;
        (*supplyCounts)[i]=0;
    }
    printf("Initialized inventory for %d species.\n",*numSpecies);
}

void addSupplies(char ***speciesSupplies,int **supplyCounts,int numSpecies){
    int speciesIndex,numSupplies,i;
    printf("Enter the species index (0 to %d): ",numSpecies-1);
    scanf("%d",&speciesIndex);
    if(speciesIndex<0||speciesIndex>=numSpecies){
        printf("Invalid species index.\n");
        return;
    }
    printf("Enter the number of supplies for species %d: ",speciesIndex);
    scanf("%d",&numSupplies);
    char *temp=(char *)realloc((*speciesSupplies)[speciesIndex],(numSupplies+(*supplyCounts)[speciesIndex])*50*sizeof(char));
    if(temp==NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    (*speciesSupplies)[speciesIndex]=temp;
    printf("Enter supplies:\n");
    for(i=(*supplyCounts)[speciesIndex];i<numSupplies+(*supplyCounts)[speciesIndex];i++){
        printf("Supply %d: ",i+1);
        char supplyName[50];
        scanf("%s",supplyName);
        strcpy((*speciesSupplies)[speciesIndex]+i*50,supplyName);
    }
    (*supplyCounts)[speciesIndex]+=numSupplies;
}

void updateSupply(char **speciesSupplies,int *supplyCounts,int numSpecies){
    int speciesIndex,supplyIndex;
    char updatedSupply[50];
    printf("Enter the species index (0 to %d): ",numSpecies-1);
    scanf("%d",&speciesIndex);
    if(speciesIndex<0||speciesIndex>=numSpecies||speciesSupplies[speciesIndex]==NULL){
        printf("Invalid species index.\n");
        return;
    }
    printf("Enter the supply index (0 to %d): ",supplyCounts[speciesIndex]-1);
    scanf("%d",&supplyIndex);
    if(supplyIndex<0||supplyIndex>=supplyCounts[speciesIndex]){
        printf("Invalid supply index.\n");
        return;
    }
    printf("Enter the new supply name: ");
    scanf("%s",updatedSupply);
    strcpy(speciesSupplies[speciesIndex]+supplyIndex*50,updatedSupply);
}

void removeSpecies(char ***speciesSupplies,int **supplyCounts,int *numSpecies){
    int speciesIndex,i;
    printf("Enter the species index (0 to %d): ",*numSpecies-1);
    scanf("%d",&speciesIndex);
    if(speciesIndex<0||speciesIndex>=*numSpecies){
        printf("Invalid species index.\n");
        return;
    }
    free((*speciesSupplies)[speciesIndex]);
    for(i=speciesIndex;i<*numSpecies-1;i++){
        (*speciesSupplies)[i]=(*speciesSupplies)[i+1];
        (*supplyCounts)[i]=(*supplyCounts)[i+1];
    }
    *speciesSupplies=(char **)realloc(*speciesSupplies,(*numSpecies-1)*sizeof(char *));
    *supplyCounts=(int *)realloc(*supplyCounts,(*numSpecies-1)*sizeof(int));
    (*numSpecies)--;
    printf("Removed species %d from inventory.\n",speciesIndex);
}

void displayInventory(char **speciesSupplies,int *supplyCounts,int numSpecies){
    int i,j;
    printf("\n--- Inventory ---\n");
    for(i=0;i<numSpecies;i++){
        printf("Species %d:\n",i);
        for(j=0;j<supplyCounts[i];j++){
            printf("  - %s\n",speciesSupplies[i]+j*50);
        }
    }
}

int main(){
    char **speciesSupplies=NULL;
    int *supplyCounts=NULL;
    int numSpecies=0,choice;
    int i;
    do{
        printf("\n--- Pets in Heart Inventory System ---\n");
        printf("1. Initialize Inventory\n");
        printf("2. Add Supplies\n");
        printf("3. Update Supply\n");
        printf("4. Remove Species\n");
        printf("5. Display Inventory\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                initializeInventory(&speciesSupplies,&supplyCounts,&numSpecies);
                break;
            case 2:
                if(numSpecies>0){
                    addSupplies(&speciesSupplies,&supplyCounts,numSpecies);
                }else{
                    printf("Initialize inventory first.\n");
                }
                break;
            case 3:
                if(numSpecies>0){
                    updateSupply(speciesSupplies,supplyCounts,numSpecies);
                }else{
                    printf("Initialize inventory first.\n");
                }
                break;
            case 4:
                if(numSpecies>0){
                    removeSpecies(&speciesSupplies,&supplyCounts,&numSpecies);
                }else{
                    printf("Initialize inventory first.\n");
                }
                break;
            case 5:
                if(numSpecies>0){
                    displayInventory(speciesSupplies,supplyCounts,numSpecies);
                }else{
                    printf("Inventory is empty.\n");
                }
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
	while(choice!=6);
    for(i=0;i<numSpecies;i++) free(speciesSupplies[i]);
    free(speciesSupplies);
    free(supplyCounts);
    return 0;
}
