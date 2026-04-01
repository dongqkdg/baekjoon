#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    int n;
    cin>>n;
    vector<int> cards;
    for(int i =0; i<n; i++){
        cards.push_back(i+1);
    }
   
    int j =0;
    for(int i =0; i<n-1; i++){
        cards.push_back(cards[j+1]);
        cards[j]=0;
        cards[j+1] = 0;
        j+=2;
    }
    
    
    cout<<cards[size(cards)-1];
}


