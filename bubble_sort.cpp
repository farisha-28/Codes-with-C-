#include<bits/stdc++.h>
using namespace std;
//It is known as bubble sort, because with every complete iteration the largest element in the given array, 
//bubbles up towards the last place or the highest index, just like a water bubble rises up to the water surface.

//Sorting takes place by stepping through all the elements one-by-one and comparing it with the adjacent element 
//and swapping them if required.
int main(){
	int i,j,n,temp;
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++){	// i er incrementation just j er loop track rakhte use hoi. and after completion of every j loop
						// ekta value auto sorted hoi. tai -1 .
						
		for(j=0; j<n-1-i;j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
