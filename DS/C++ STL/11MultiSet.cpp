#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    multiset<int>ms;
    ms.insert(10);
    ms.insert(5);
    ms.insert(20);
    ms.insert(15);
    ms.insert(18);
    ms.insert(5); 

    for(auto it = ms.begin();it != ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<ms.count(5); //return count of 5 i.e 2
}