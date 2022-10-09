#include<bits/stdc++.h>
using namespace std;
//Even though insertion sort is efficient, still, if we provide an already sorted array to the insertion sort algorithm, 
//it will still execute the outer for loop, thereby requiring n steps to sort an already sorted array of n elements,
// which makes its best case time complexity a linear function of n.
int main(){
	
	int i,j,min,temp;
	int n;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=1;i<n;i++){
		temp = a[i];
		j = i-1;
		while(j>=0 && a[j]>temp){	// First e i jeta temp rakhci otar shathei always compare korbe
			a[j+1] = a[j];	
			j--;
		}
		a[j+1] =  temp;
	}
	for(i=0; i<n;i++){
		printf("%d ", a[i]);
	}
}
