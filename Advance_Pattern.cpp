#include<iostream>
using namespace std;

int main() {
    int rows,cols,ele;
    cout<<"Enter Rows:";
    cin>>rows;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //0-1 Pattern
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    //Rhombus Pattern
    for(int i=rows;i>=1;i--){
        for(int j=i-1;j>=0;j--){
            cout<<" ";
        }
        for(int j=1;j<=rows;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Number Pattern
    int k;
    for(int i=rows,k=1;i>=1,k<=rows;i--,k++){
         for(int j=i-1;j>=0;j--){
            cout<<" ";
        }
        for(int j=1;j<=k;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Palindromic Pattern
    for(int i=1;i<=rows;i++){
         for(int j=rows-i;j>=1;j--){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //star pattern
    for(int i=1;i<=rows;i++){
         for(int j=rows-i;j>=1;j--){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"*"<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=rows;i>=1;i--){
         for(int j=1;j<=rows-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"*"<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    //Zig Zag Pattern
    int h;
    cin>>h;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=h;j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}