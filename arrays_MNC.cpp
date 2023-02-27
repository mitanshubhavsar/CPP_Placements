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

    const int N = 10000;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for(int i=0; i<n ; i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx, idx[arr[i]]);
        }else {
            idx[arr[i]] = i;
        }
    } 

    if(minidx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx + 1<<endl;

    }

    //SubArray with Given Sum
    int sum = 12;
    int calculatedSum;
    for(int i=0;i<n;i++){
        calculatedSum = 0;
        for(int j=i;j<n;j++){
            calculatedSum += arr[j];
            if(calculatedSum == 12){
                cout<<i<<" ";
                break;
            }
        }
        
    }

    //optimised approach
    int s;
    cin>>s;

    int i=0,j=0,st=-1,en=-1,sum1=0;

    while (j<n && sum1+arr[j] <=s)
    {
        sum1 += arr[j];
        j++;
    }

    if(sum1 == s){
        cout<< i+1 <<" "<<endl;
        return 0;
    }

    while(j<n){
        sum1 += arr[j];
        while (sum1 > s)
        {
            sum1 -= arr[i];
            i++;
        }
        
        if(sum1 == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }

    cout<< st <<" "<<en;

    //find smallest positive number missing from array

    bool check[50];

    for(int i=0;i<50;i++){
        check[i] = false;
    }

    for(int i=0;i<n;i++){
        if(arr[i] >= 0){
            check[arr[i]] = true;
        }
    }

    for(int i=0;i<n;i++){
        if(check[i] == false){
            cout<<i<<endl;
            break;
        }
    }

}