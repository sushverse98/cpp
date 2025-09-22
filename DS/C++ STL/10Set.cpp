#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

//insert,erase,front,back,erase,clear,find

int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(15);
    s.insert(18);
    s.insert(5); //it will not added because of duplicate 

    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;

    s.erase(10);
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    
    cout<<"Size: "<<s.size()<<"\n";

    if(s.count(18)){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    };
    cout<<endl;

    for(auto it = s.begin(); it != s.end(); it++){
        cout<<*it<<" ";
    }

    auto it = s.find(18);
    if(it == s.end()){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }

    while(it != s.end()){
        cout<<*it<<" ";
        it++;
    }

    cout<<s.count(18);


}