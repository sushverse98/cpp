#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
    array<int,5> arr = {3,5,2,1,4};
    //arr.fill(0);
    cout<<"Size: "<<arr.size()<<endl; //size
    cout<<"Front: "<<arr.front()<<endl; //front
    cout<<"Back: "<<arr.back()<<endl;  //back
    cout<<"Element at position 3: "<<arr.at(3)<<endl;  //position
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    sort(arr.begin(), arr.end());  //sort
    reverse(arr.begin(), arr.end()); //reverse
    for(int x:arr){
        cout<<x<<" ";
    }
    //searching
    bool has3 = binary_search(arr.begin(), arr.end(), 3);
}