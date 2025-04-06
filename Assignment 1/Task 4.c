#include<stdio.h>
#include<string.h>
void letters(char word[]){
    int length=strlen(word),i,j;  
    char temp;
    for(i=0;i<length-1;i++){  
        for(j=0;j<length-i-1;j++){  
            if(word[j]>word[j+1]){  
                temp=word[j];
                word[j]=word[j+1];
                word[j+1]=temp;
            }
        }
    }
}

int main(){
    int a,i,j;
    printf("Enter the number of words: ");
    scanf("%d",&a);  
    char str_arr[a][30],sort_arr[a][30];  
    int flag[a];
    memset(flag,0,sizeof(flag));
    printf("Enter the words:\n");
    for(i=0;i<a;i++){
        scanf("%s",str_arr[i]);  
        strcpy(sort_arr[i],str_arr[i]); 
        letters(sort_arr[i]);
    }
    printf("\nOutput:\n");
    for(i=0;i<a;i++){
        if(flag[i])
		continue;
        printf(" {'%s'",str_arr[i]);
        flag[i]=1;
        for(j=i+1;j<a;j++){
            if(!flag[j] && strcmp(sort_arr[i],sort_arr[j])==0){
                printf(" '%s'",str_arr[j]);
                flag[j]=1;
            }
        }
        printf(" }\n");
    }
    return 0;
}
