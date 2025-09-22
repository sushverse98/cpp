#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    stack<int>s;
    s.push(10); //add at top
    s.push(15);
    s.push(20);
    s.push(25);

    cout<<"Top: "<<s.top(); //shows top element
    cout<<"\nSize: "<<s.size();

    s.pop(); //delete from top

    cout<<"\nTop(after popping): "<<s.top()<<endl;

    //check empty
    if(s.empty()){
        cout<<"Empty";
    }else{
        cout<<"Not Empty";
    }

}