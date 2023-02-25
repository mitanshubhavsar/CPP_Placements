#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main() {
    int n,flag;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            flag=0;
            break;
        }else{
            flag=1;
        }
    }

    if(flag){
        cout<<"Prime Number";
    }else{cout<<"Not a Prime Number";}

    //Reverse a Number
    int num;
    cin>>num;
    int reverse = 0;
    
    while (num>0)
    {
        int lastdigit = num%10;
        reverse = reverse*10 + lastdigit;
        num = num / 10;
    }

    cout<<reverse<<endl;

    //Armstrong number
    int num1,sum = 0,savednum1;
    cin>>num1;
    savednum1 = num1;
    
    while (num1>0)
    {
        int lastdigit1 = num1%10;
        sum = sum + (lastdigit1*lastdigit1*lastdigit1); //pow(lastdigit1,3)
        num1 /= 10;
    }
    cout<<sum;

    if(savednum1 == sum){
        cout<<"Armstrong Number";
    }else{
        cout<<"Not Armstrong number";
    }
    
    
}