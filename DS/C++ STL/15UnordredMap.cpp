#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["gfg"] = 20;
    m["ide"] = 30;
    m.insert({"courses",15});

    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    //check if present
    if(m.find("ide")!=m.end()){
        cout<<"Found\n";
    }else{
        cout<<"Not Found\n";
    }

    if(m.count("ide")>0){
        cout<<"Found\n";
    }else{
        cout<<"Not Found\n";
    }

    cout<<m.size()<<endl;
    m.erase("ide");
    cout<<m.size()<<endl;

    m.erase(m.begin(),m.end());
    cout<<"Size after deleting all : "<<m.size();
}
