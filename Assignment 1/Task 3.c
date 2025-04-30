#include<stdio.h>
#include<string.h>

void compress(const char *string,char *compressed){
    int i,j=0; 
	for(i=0;string[i] !='\0';i++){
        if(string[i] != string[i-1]){
            compressed[j++]=string[i];
        }
    }
    compressed[j]='\0';
}

int main(){
    char string[15],compressed[15];
    printf("Enter a word: ");
    scanf("%s",string);
    compress(string,compressed);
    int string_letters=strlen(string);
    int compressed_letters=strlen(compressed);
    int remove_letters=string_letters-compressed_letters;
    printf("Compressed word: %s\n",compressed);
    printf("Total characters removed: %d\n",remove_letters);
    return 0;
}
