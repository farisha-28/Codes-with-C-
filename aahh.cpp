#include<bits/stdc++.h>
using namespace std;

int main(){
	char str1[100];
	char str2[100];
	int count1=0,count2=0;
	scanf("%[^\n]%*c",str1);
	scanf("%[^\n]%*c",str2);
	for(int i=0; str1[i]!='\0'; i++){
		if(str1[i] == 'h'){
			count1 ++;
		}
	}
	for(int j=0;str2[j]!='\0'; j++){
		if(str2[j] == 'h'){
			count2 ++;
		}
	}
	if(count1==1 && count2==1){
		int len1= strlen(str1);
		int len2 = strlen(str2);
		if(len1 > len2){
			printf("go");
		}
		else{
			printf("no");
		}
	}
	
	
}
