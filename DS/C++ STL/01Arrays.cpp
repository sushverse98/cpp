#include <iostream>
#include <array>
#include<algorithm>
using namespace std;

int main(){
    //Initialising Array
    int arr[5] = {5,3,4,1,2};
    //Size of the array
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is "<<size;
    cout<<"\n";
    //Maximum and Minimum
    int maxVal = *max_element(arr, arr + size);
    int minVal = *min_element(arr, arr + size);
    cout<<"Min: "<<minVal<<" Max: "<<maxVal<<endl;
    //Traversal in array using for loop
    cout<<"Elements in this array: "<<endl;
    for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
    }
    //Sorting array
    sort(arr,arr+5);
    //Traversal using for each loop
    cout<<"\nElements in this array(sorted): "<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<"\n";
    //Searching
    bool isFound = binary_search(arr,arr+5,3);
    cout<<isFound;
}