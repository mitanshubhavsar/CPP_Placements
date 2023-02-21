#include<iostream>
using namespace std;

int main(){
    int i=1;
    i = i++ + ++i;
    cout<<i<<endl;

    //wheather divisible by 2 and 3 or by both
    int num;
    cin>>num;
    if(num%2==0 && num%3==0){
        cout<<"Divisible by both";

    }
    else if(num%2==0){
        cout<<"only by 2";
    }
    else if(num%3==0){
        cout<<"Only by 3";
    }else{
        cout<<"divisible by none";
    }
 

}

