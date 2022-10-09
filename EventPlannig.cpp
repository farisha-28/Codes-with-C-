#include<bits/stdc++.h>
using namespace std;
int main()
{
    int participants,total_budget,hotels_consider,no_of_weekends;
    scanf("%d%d%d%d",&participants,&total_budget,&hotels_consider,&no_of_weekends);
    if(participants<=200 && total_budget<=500000 && hotels_consider<=18 &&no_of_weekends<=13){
    	
    int is_possible=0,total_cost=0,count=0,j,i,index=0,failed=0;
    int total_cost_in_hotel[20];
    
    for(j=0;j<hotels_consider;j++){
    	
        int hotel_cost;
        scanf("%d",&hotel_cost);
        total_cost=0;
        total_cost=participants*hotel_cost;
            int available_beds_per_weekend;
            is_possible=0;
            
            for(int w=1;w<=no_of_weekends;w++){
            	
            available_beds_per_weekend=0;
            scanf("%d",&available_beds_per_weekend);
            
            if(participants<=available_beds_per_weekend && total_cost<=total_budget){
                is_possible++;
            }
          }
        if(no_of_weekends==is_possible){
            count++;
        }

      if(count>0){
        for(i=0;i<count;i++){

            total_cost_in_hotel[index]=total_cost;
            index++;
        }
      }
    }
    if(count>0){
            int min=total_cost_in_hotel[0];
    for(index=0;index<count;index++){
        if(min>total_cost_in_hotel[index]){
            min=total_cost_in_hotel[index];
        }
    }
    printf("%d\n",min);

    }
    if(count==0){
        printf("stay home");
    }

    }
}
