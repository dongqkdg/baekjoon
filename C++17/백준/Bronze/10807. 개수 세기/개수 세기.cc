#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    vector<int> vec;
    int a;
    cin>>a;
    int n;
    for(int i=0; i<a; i++){
        cin>>n;
        vec.push_back(n);
        
    }
    int x,count=0;
    cin>>x;
    
    for(auto i = vec.begin(); i<vec.end(); i++){
            if(*i == x)
                count+=1;
        }
    
    cout<<count<<endl;
    return 0;
}
