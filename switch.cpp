#include<iostream>
using namespace std;

int main(){
    char button;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello";
        break;
    case 'b':
        cout<<"Namaste";
        break;
    case 'i':
        cout<<"kem cho";
        break;    
    case 'v':
        cout<<"bye";
        break;
    default:
        cout<<"Learning something new";
        break;
    }

    //basic calculator

    int a,b;
    char operation;
    cin>>a>>b;
    cout<<"Enter the opertation:"<<endl;
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<"Sum:"<<a+b<<endl;
        break;
    case '-':
        cout<<"Subtract:"<<a-b<<endl;
        break;
    case '*':
        cout<<"Multiply:"<<a*b<<endl;
        break;
    case '/':
        cout<<"divide:"<<a/b<<endl;
        break;
    
    default:
        cout<<"Invalid Opertation";
        break;
    }
}