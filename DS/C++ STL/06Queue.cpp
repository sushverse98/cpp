#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    queue<int>q;
    q.push(10); //to add in back of the queue
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"front: "<<q.front()<<endl; //front element
    cout<<"back: "<<q.back()<<endl; //back element
    cout<<"size: "<<q.size()<<endl; //size

    q.pop(); //to remove from front

    cout<<"front(after popping): "<<q.front()<<endl;

    //empty
    if(q.empty()){
        cout<<"Empty";
    }else{
        cout<<"Not Empty";
    }
}