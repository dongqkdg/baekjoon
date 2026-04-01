#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main () {
    vector<string> brac;
    int n;
    cin>>n;
    string str;
    for(int i = 0; i<n; i++){
        cin>>str;
        brac.push_back(str);
    }
    vector<string> ox;
    for(auto elem: brac){
        int count =0;
        for(int i =0; i<size(elem);i++){
            if(elem[i]=='(')
                count++;
            else
                count--;
            if(count<0){
                ox.push_back("NO");
                break;
            }
        }
        if(count==0)
            ox.push_back("YES");
        else if(count>0)
            ox.push_back("NO");
    }
    
    for(auto elem: ox){
        cout<<elem<<endl;
    }
}



