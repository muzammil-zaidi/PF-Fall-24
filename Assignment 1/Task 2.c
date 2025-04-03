#include<stdio.h>
#include<string.h>
int main(){
	int i,j,a,b=0,found=0,count[26];
	char letters[26],string[30];
	printf("Enter slogan:");
	gets(string);
	a=strlen(string);
	for(i=0;i<26;i++){
		count[i]=0;
		letters[i]=0;	
	}
	for(i=0;i<a;i++){
		for(j=0;j<26;j++){
			if(string[i]==letters[j]){
				count[j]=count[j]+1;
				found=1;
				break;
			}
		}
		if(found==0){
			letters[b]=string[i];
			count[b]=count[b]+1;
			b=b+1;
		}
	}
	for(i=0;i<26;i++){
	//	if(count[i]>0){
	//		printf("'%c':%d, ",letters[i],count[i]);
	//	}
	}
	return 0;
}
