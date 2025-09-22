#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;

int main(){
    forward_list<int>l = {10,15,20};
    l.push_front(5); //add front
    l.push_front(3);
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;

    l.pop_front(); //remove front
    cout<<"After removing front: "<<endl;
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;

    //removing element
    l.remove(10);
    cout<<"After removing 10 from the list l: "<<endl;
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;

    //assigning l in l2
    forward_list<int>l2;
    l2.assign(l.begin(),l.end());

    //traversing list through iterators
    for(auto it = l2.begin();it != l2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //assigning l3
    forward_list<int>l3;
    l3.assign(5,10);
    cout<<"Elements in list3 are: ";
    for(auto it = l3.begin();it != l3.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //reversing an list
    l.reverse();
    cout<<"reversed l: ";
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;

    //sorting 
    l.sort();
    cout<<"sorted l: ";
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;

    //merge (it will be sorted)
    cout<<"l2 before merging: ";
    for(int x:l2){
        cout<<x<<" ";
    }
    cout<<endl;
    l2.merge(l3);
    cout<<"l2 after merging: ";
    for(int x:l2){
        cout<<x<<" ";
    }
    cout<<endl;

    //insert after
    forward_list<int>l4 = {15,20,30}; //15 20 30
    auto it = l4.insert_after(l4.begin(),40); //15 40 20 30
    cout<<"l4(inserted 40 after it(15)): ";
    for(int x:l4){
        cout<<x<<" ";
    }
    cout<<endl;

    it = l4.insert_after(it,{2,3,5}); //15 40 2 3 5 20 30
    cout<<"l4(inserted 2,3,5 after it(40)): ";
    for(int x:l4){
        cout<<x<<" ";
    }
    cout<<endl;

    it = l4.emplace_after(it,40); //15 40 2 3 5 40 20 30
    cout<<"l4(emplace 40 after it(5)): ";
    for(int x:l4){
        cout<<x<<" ";
    }
    cout<<endl;

    it = l4.erase_after(it); //15 40 2 3 5 40 30
    cout<<"l4(after erasing (after it)): ";
    for(int x:l4){
        cout<<x<<" ";
    }
    cout<<endl;

    //clear(to clear all elements in list)
    cout<<"l2 before clearing: ";
    for(int x:l2){
        cout<<x<<" ";
    }
    cout<<endl;
    l2.clear();
    cout<<"l2 after clearing: ";
    for(int x:l2){
        cout<<x<<" ";
    }
    cout<<endl;

    //empty(to check is this empty)
    if(l2.empty()){
        cout<<"Empty";
    }else{
        cout<<"Not Empty";
    }

}
