#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    int a,d;
    cin>>a;
  
    d = a;
 
    
    vector<int> vec;
    for(int i = 10; i<=a*10; i=i*10){
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
            case 9:
                count[6] += 1;
                break;
            case 7:
                count[7] += 1;
                break;
            case 8:
                count[8] += 1;
                break;
                
            default:
                break;
        }
    }
    
    if(count[6]%2==0)
        count[6] = count[6]/2;
    else
        count[6] = count[6]/2+1;
    
    
    int mx = *max_element(count.begin(), count.end());
    cout<<mx<<endl;;
    
    
    return 0;
}
