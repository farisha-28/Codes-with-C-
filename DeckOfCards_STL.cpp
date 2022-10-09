#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> deck_of_cards;
    int n;
    cout <<"Total number of cards ? - "<< endl;
    cin >> n;
    
    for(int i=1;i<=n;i++){
        deck_of_cards.push(i);
    }
    
    cout<<"Discarded cards are : ";
    for(int s =deck_of_cards.size(); s!=1; s--){

        int var= deck_of_cards.front();
        cout<<var<<" ";
        deck_of_cards.pop();
        deck_of_cards.push(deck_of_cards.front());
        deck_of_cards.pop();
    }
    cout <<" "<<"Remaining cards are : "<< deck_of_cards.front() << endl;
}
