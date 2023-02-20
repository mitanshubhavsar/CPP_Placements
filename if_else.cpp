#include<iostream>
using namespace std;

int main(){
    int savings;
    cin>>savings;
    if(savings > 5000 && savings < 7000){
        cout<<"Neha";
    }
    else if(savings>7000){
        cout<<"Sikha";
        if(savings > 8000){
            cout<<"Roadtrip";
        }else{
            cout<<"tea";
        }
    }else{
        cout<<"Ravina";
    }
    return 0;
}