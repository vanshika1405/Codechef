#include <bits/stdc++.h>
using namespace std; 

void print_iter(vector<int>& arr, int itr) {
    cout<<"this is "<<itr<<"th iteration :";
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}


void bubble_sort(vector<int> arr, int index) {
    int n = arr.size(); 
    if (index > n-1) return;
    for(int i = 0; i < n-index; i++) {
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    bubble_sort(arr, index+1);
    print_iter(arr, index);
}

int main() {
    int n;
    cin>>n; 

    vector<int> arr(n); 
    for(int i = 0; i < n; i++) {
        cin>>arr[i]; 
    }

    bubble_sort(arr, 1);
    return 0;
}