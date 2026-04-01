#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    vector<int> total ;
    char k;
    int a=-1, count=0, splittotal=0, barcount =0 ; //a: 인덱스 값, count: 레이저 뒤까지의 숫자들의 합, splittotal: 각 레이저 당 몇개의 조각을 나누는지, barcount: 쇠 막대기의 갯수(각 막대기의 마지막 조각을 새어지지 않아서 도입)
    while(k!='\n'){
        cin.get(k);
        if(k=='('){
            total.push_back(1);
            a++;
            count++;
            barcount++;
        }
        else if(k==')'){
            if(total[a]==1){
                total[a] = 0;
                count--;
                barcount--;
                splittotal += count;
                continue;
            }
            else{
                total.push_back(-1);
                a++;
                count--;
            }
        }
        
    }
    
  
    cout<<splittotal+barcount<<endl;
    
}
