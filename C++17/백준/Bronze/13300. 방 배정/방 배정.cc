#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    vector<vector<int>> vec(6,vector<int>(2,0));
    int n, k;
    cin>>n>>k;
    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        vec[b-1][a]+=1;
        
    }
    
    int count =0;
    
    for(int i =0; i<6; i++){
        for(auto elem:vec[i]){
            if(elem==0)
                continue;
            if(elem%k==0)
                count+=elem/k;
            else
                count+=elem/k + 1;
        }
        
    }
    cout<<count<<endl;

}
