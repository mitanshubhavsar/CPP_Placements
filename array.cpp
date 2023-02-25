#include<iostream>
#include<climits>
using namespace std;

int main(){
    int array[4] = {10,20,30,40};
    cout<<array[3]<<endl;

    //print max & min

    int n;
    cin>>n;
    int array1[n];

    for(int i=0;i<n;i++){
        cin>>array1[i];
    }

    for(int i=0;i<n;i++){
        cout<<array1[i]<<" ";
    }

    int minNo = INT_MAX,maxNo = INT_MIN;

    // for(int i=1;i<n;i++){
    //     max = array1[0];
    //     if(max < array1[i]){
    //         max = array1[i];
    //     }
        
    // }

    // for(int i=1;i<n;i++){
    //     min = array1[0];
    //     if(min > array1[i]){
    //         min = array1[i];
    //     }
        
    // }

     for(int i=0;i<n;i++){
        maxNo = max(maxNo,array1[i]);
        minNo = min(minNo,array1[i]);
    }

    cout<<"Max:"<<maxNo<<endl;
    cout<<"Min:"<<minNo<<endl;
}