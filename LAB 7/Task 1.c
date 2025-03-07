#include<stdio.h>
#include<string.h>

int main(){
    char strings[4][10]={"madam","racecar","cricket","fast"};
    char reverse[4][10]={0};
    int words=4;
    int i,j,k;
	for(k=0;k<words;k++){
        int length=strlen(strings[k]);
        for(i=length-1,j=0;i>=0;i--,j++){
            reverse[k][j]=strings[k][i];
        }
        reverse[k][length]='\0';
    }
	for(i=0;i<words;i++){
        if(strcmp(reverse[i],strings[i])==0){
            printf("%s is a palindrome\n",strings[i]);
        }
		else{
            printf("%s is not a palindrome\n",strings[i]);
        }
    }
	
    return 0;
}
