#include<iostream>
using namespace std;

int main(){
    int pocketMoney = 3000;

    for(int i=0;i<30;i++){
        
        if(i%2 == 0){
            continue;
        }
         if(pocketMoney == 0){
            break;
        }
        pocketMoney = pocketMoney - 300;
        cout<<"You can go out"<<i<<" "<<pocketMoney<<endl;
       

    }

    // print no. not divisible by 3
    for(int j=1;j<=100;j++){
        if(j%3==0){
            continue;
        }else{
            cout<<j<<endl;
        }
    }

    //given number is prime or not
    int n = 96;
    int flag=0;
    for(int k=2;k<n;k++){
        if(n%k==0){
            flag=1;
            break;
        }else{
            flag=0;    
        }  
    }
     if(flag){
            cout<<"Number is composite"<<endl;
        }else{
            cout<<"Number is prime";
        }

        //print all prime numbers in given range
        int flagprime=0;
        int a=10,b=20;
        for(int h=a;h<=b;h++){
            for(int l=2;l<h;l++){
                if(h%l==0){
                    flagprime=0;
                    break;
                }
                else{
                    flagprime=1;
                }
                
            }
            if(flagprime){
                cout<<h<<endl;
            }
            
        }
        
        
}