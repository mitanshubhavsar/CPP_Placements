#include<iostream>
using namespace std;

bool search(int arr[], int key, int n){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return true;
        }
    }

    return false;
}

int binarySearch(int arr1[],int l, int r,int key){
    
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(arr1[mid] == key){
            return mid;
        }
        else if(arr1[mid] < key){
            l = mid + 1;
            }
        else{
                r = mid - 1;
            }
        
    }
    return -1;
}

int main(){
    int n,key;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;

    if(search(arr,key,n)){
        cout<<"element Found\n";
    }else{
        cout<<"element not found\n";
    }

    //Binary Search
    int m,key1;
    cin>>m;

    int arr1[m];

    cout<<"Enter the elements in sorted order:"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>key1;

    int l = 0;
    int r = m;
    
    int index = binarySearch(arr1,l,r,key1);
    
    if(index != -1){
        cout<<"Element Found at index "<<index<<endl;
    }
    else{
        cout<<"Element Not Found";
    }


    

}