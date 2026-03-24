#include <iostream>
#include<vector>
using namespace std;

int main () {
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    
    d = a*b*c;
    vector<int> vec;
    for(int i = 1; i<=a*b*c*1; i=i*10){
        vec.push_back(d%10);
        d = d/10;
    }
    vector<int> count(10,0);
    for(int elem:vec){
        switch (elem) {
            case 0:
                count[0] += 1;
                break;
            case 1:
                count[1] += 1;
                break;
            case 2:
                count[2] += 1;
                break;
            case 3:
                count[3] += 1;
                break;
            case 4:
                count[4] += 1;
                break;
            case 5:
                count[5] += 1;
                break;
            case 6:
                count[6] += 1;
                break;
            case 7:
                count[7] += 1;
                break;
            case 8:
                count[8] += 1;
                break;
            case 9:
                count[9] += 1;
                break;
                
            default:
                break;
        }
    }
    
    for(int elem: count){
        cout<<elem<<endl;
    }
    
    
    return 0;
}
