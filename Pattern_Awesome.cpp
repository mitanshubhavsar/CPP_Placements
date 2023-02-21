#include<iostream>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter Rows:"<<endl;
    cin>>rows;
    cout<<"Enter Columnns:"<<endl;
    cin>>columns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    //hollow rectangle
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){   
            if(i==1 || i==rows){
                cout<<"* ";
            }
            else if(i!=1 && j==1 || i!=rows && j==columns){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }


        }
       
        cout<<endl;
    }
    cout<<endl;


    //inverted Half Pyramid
    for(int i=1;i<=rows;i++){
        for(int j=rows;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Half Pyramid after 180 rotation
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j<=rows-i){
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    //Half pyramid using numbers
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Floyd's Triangle
    int l=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<l++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //ButterFly Pattern
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*rows - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*rows - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
         for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}