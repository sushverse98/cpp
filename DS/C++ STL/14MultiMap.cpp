#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    multimap<int,int>m;
    m.insert({10,20});
    m.insert({5,50});
    m.insert({10,25});
    m.insert({10,25});

    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    cout<<m.count(10);
}