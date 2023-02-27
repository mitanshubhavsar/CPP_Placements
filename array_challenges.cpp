#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pos;
    cout<<"Enter the position till u want max:"<<endl;
    cin>>pos;

    int max1 = INT_MIN;
    for(int i=0;i<pos;i++){
        max1 = max(max1,arr[i]);
        cout<<max1<<" ";
    }

    //sum of subarrays
    int sum;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum<<endl;
        }
    }
    cout<<endl;
    cout<<sum<<endl;


    //Longest Arithmetic subarray
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;

    while (j<n)
    {
        if(pd == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }

    cout<<ans<<endl;

    //Record Breaker
    int h=0;
    int count = 0;
    while (h<n)
    {
        if(h==0 && arr[h] > arr[h+1]){
            count++;
        }
        else if(h==n-1 && arr[h] > arr[h-1]){
            count++;
        }
        else if(arr[h] > arr[h+1] && arr[h] > arr[h-1]){
            count++;
        }
    }
    
    cout<<count<<endl;
    
    
}