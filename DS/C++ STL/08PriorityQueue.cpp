#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    priority_queue<int>pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<"Top(pq): "<<pq.top()<<endl;

    priority_queue<int,vector<int>,greater<int>>pq2;
    pq2.push(10);
    pq2.push(15);
    pq2.push(5);
    cout<<"Top(pq2): "<<pq2.top()<<endl;

    //size
    cout<<"Size: "<<pq2.size()<<endl;

    //showing priority queue elementss
    while(pq2.empty() == false){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }

}