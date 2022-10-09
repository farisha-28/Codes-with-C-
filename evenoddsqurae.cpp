#include<bits/stdc++.h>
using namespace std;

//void even();
//void odd();
//int n;//printf("Enter the size: ");
//scanf("%d ",&n);
int even(int b[],int size){
	for(int i=size-1;i<=1;i=i-2){
		if(i ==0){
			odd(b,size);
		}
		else{
			printf("%d ",(b[i]*b[i]));
		}
	}
	
//	if((m/2)-2){
//		odd((m*2)-1);
//	}
//	else{
//		printf("%d ",(m*m));
//		return even(m-2);
//	}
}
int odd(int c[],int k){
	for(int i=k-1;i<=0;i=i-2){
		if(i ==0){
			even(c,k);
		}
		else{
			printf("%d ",(c[i]*c[i]));
		}
	}
//	if(k<1){
//		even(abs(k*n)-1);
//	}
//	else{
//		printf("%d ",(k*k));
//		return odd(k-2);
//	}
}

int main(){
	int n;
	scanf("%d ", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		
	}
	if(n !=0){
		even(a,n);
	}
	else{
		odd(a,n);
	}


}
