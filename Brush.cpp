#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_case=100,n;
	//int a[test_case];
	int student_num = 1000;
	int std_components;
	int sum;

	scanf("%d",&n);
	for(test_case=1; test_case<=n; test_case++){
			scanf("%d",&student_num);
			if(student_num <= 1000){
				
			sum=0;
			for(int x=1; x<= student_num ; x++){
				scanf("%d", &std_components);
				sum += std_components;
			}
		}
			printf("Case %d: %d\n",test_case,sum);
			
		
	}

}
