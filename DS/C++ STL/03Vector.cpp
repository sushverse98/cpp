#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[5] = {5,2,1,8,2};
    vector<int>v1 = {5,2,1,8,2};
    //vector<int>v1(arr,arr+5);
    //vector<int>v1{5,2,1,8,2};
    //vector<int>v1(3,10); //10 10 10
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    //add elements at back
    v1.push_back(10);
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    //remove last element
    v1.pop_back();
    for(auto it = v1.begin();it != v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\nSize: "<<v1.size()<<endl;
    cout<<"Front: "<<v1.front()<<endl;
    cout<<"Back: "<<v1.back()<<endl;
    cout<<"isEmpty: "<<v1.empty()<<endl;

    //to insert at any position
    v1.insert(v1.begin()+2,100);
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;

    //resize
    cout<<"Elements after resizing: "<<" : ";
    v1.resize(10);
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;

    //erase some elements
    v1.erase(v1.begin()+2,v1.begin()+4);
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;

    //clear all elements
    v1.clear();
    cout<<"Size(after clearing all): "<<v1.size();
}