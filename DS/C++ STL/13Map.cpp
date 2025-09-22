#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    map<int,int>m;
    m.insert({10,200});
    m[5] = 100;
    m.insert({3,300});
    m.insert({5,500}); //no duplicate allowed

    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    cout<<"Size: "<<m.size()<<endl;
    cout<<"value of 20: "<<m[20]<<endl; //return 0 no 20 is in map
    cout<<m[10]<<endl;
    cout<<m[5]<<endl;
    cout<<m.at(5)<<endl; //also value can be checked by using at

    m.erase(5);
    for(auto it = m.begin();it != m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    if(m.count(5)==0){
        cout<<"Not Found";
    }else{
        cout<<"Found";
    }
}