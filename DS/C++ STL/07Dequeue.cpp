#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main(){
    deque<int>dq = {10,20,30};
    dq.push_front(5); //add at front -> 5 10 20 30
    dq.push_back(35); //add at last -> 5 10 20 30 35

    cout<<"size before popping : "<<dq.size()<<endl; //size

    dq.pop_front(); //remove front element -> 10 20 30 35
    dq.pop_back(); //remove last element -> 10 20 30


    for(auto x:dq){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"size: "<<dq.size()<<endl; //size

    cout<<"Front: "<<dq.front()<<" Back: "<<dq.back()<<endl; //front and back

    //insertion
    auto it = dq.begin();
    it++;
    dq.insert(it,19); //insert at any position
    dq.insert(it,{16,17});
    for(int x:dq){
        cout<<x<<" ";
    }
    cout<<endl;

}