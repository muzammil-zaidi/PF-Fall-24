#include<stdio.h>
#include<string.h>

void generateArray(char arr[6][5],int userID[4]){
    int i,j;
    for(i=0;i<6-1;i++){
        for(j=0;j<5;j++){
            arr[i][j]='A'+(rand()%26);
        }
    }
    for(j=0;j<4;j++){
        arr[6-1][j]='0'+userID[j];
    }
    arr[6-1][4]='A';
}

void printArray(char arr[6][5]){
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<5;j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
}

int searchString(char arr[6][5], char *pattern){
    int patternLen=strlen(pattern),i,j,k;
    for(i=0;i<6;i++){
        for(j=0;j<=5-patternLen;j++){
            int found=1;
            for(k=0;k<patternLen;k++){
                if(arr[i][j+k]!=pattern[k]){
                    found=0;
                    break;
                }
            }
            if(found) return 1;
        }
    }
    return 0;
}

int main(){
    char arr[6][5];
    int userID[4]={0,8,8,7},score=0;
    char input[20];
    srand(time(0));
    while(1){
        generateArray(arr,userID);
        printArray(arr);
        printf("Search string (or 'END' to Exit): ");
        scanf("%s",input);
        int i=0;
        while(input[i]){
            input[i]=toupper(input[i]);
            i++;
        }
        if(strcmp(input,"END")==0) break;
        if(searchString(arr,input)){
            score++;
            printf("%s is present. Score: %d\n",input,score);
        }else{
            score--;
            printf("%s is not present. Score: %d\n",input,score);
        }
    }
    printf("Final Score is %d\n",score);
    return 0;
}
