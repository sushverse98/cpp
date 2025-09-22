#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    list<int>l;
    l.push_back(10); //10
    l.push_back(20); //10 20
    l.push_front(5); //5 10 20
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;

    l.pop_back(); //5 10
    l.pop_front();//10
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"l2: ";
    list<int>l2 = {10,20,30};
    auto it = l2.begin(); //it->10
    it++; //it->20
    l.insert(it,15); //10 15 20 30
    l.insert(it,2,7); //10 15 7 7 20 30
    for(int x:l2){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Front: "<<l2.front()<<" Back: "<<l2.back(); //10 30 
    cout<<"\nSize: "<<l2.size();

    //deletion
    list<int>l3 = {5,10,15,20};
    cout<<"l before deletion"<<endl;
    for(int x:l3){
        cout<<x<<" ";
    }
    cout<<endl;
    auto it2 = l3.begin();
    it2 = l.erase(it2); //erase 
    cout<<"l after deletion"<<endl;
    for(int x:l3){
        cout<<x<<" ";
    }
    cout<<endl;

    l3.remove(15); //remove any element
    cout<<"l3 after removing 15 : "<<endl;
    for(int x:l3){
        cout<<x<<" ";
    }
    cout<<endl;

    //merging list
    cout<<"after merging l2 and l3: ";
    l2.merge(l3);
    for(int x:l2){
        cout<<x<<" ";
    }
    cout<<endl;

    //reverse
    list<int>l4 = {1,2,3,4,5};
    cout<<"original l4: ";
    for(int x:l4){
        cout<<x<<" ";
    }
    cout<<endl;
    l4.reverse();
    cout<<"l4 reversed: ";
    for(int x:l4){
        cout<<x<<" ";
    }
    cout<<endl;

    //unique
    list<int>l5 = {1,1,2,3,4,5,5,6,7};
    cout<<"Original l5: ";
    for(int x:l5){
        cout<<x<<" ";
    }
    cout<<endl;
    l5.unique();
    cout<<"Unique elements in l5: ";
    for(int x:l5){
        cout<<x<<" ";
    }
    cout<<endl;

    //Sorting
    list<int>l6 = {4,1,3,2,8,5,7,11};
    cout<<"Original l6: "<<endl;
    for(int x:l6){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Sorted l6: "<<endl;
    l6.sort();
    for(int x:l6){
        cout<<x<<" ";
    }
    cout<<endl;

}