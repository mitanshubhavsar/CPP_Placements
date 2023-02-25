#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }else{
            return true;
        }
    }
}

int factorial(int d){
    int fact = 1;
    for(int i=d;i>=1;i--){
        fact = fact*i;
    }
    return fact;
}

findnCr(int s,int r){
    int nCr = factorial(s)/(factorial(r)*factorial(s-r));
}

void print_fibonnaci(int k){

     int t1=0,t2=1,t3;

    cout<<t1<<endl;
    cout<<t2<<endl;

    for(int j=2;j<k;j++){
        t3=t1+t2;
        cout<<t3<<endl;
        t1=t2;
        t2=t3;
    }
}


int main(){
    int n,m;
    cin>>n>>m;

    for(int i=n;i<=m;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }

    //print fibonnaci
    int k;
    cin>>k;
   
    print_fibonnaci(k);

    int d;
    cin>>d;

    cout<<factorial(d)<<endl;

    //finding nCr
    int s,r;
    cin>>s>>r;

    cout<<findnCr(s,r)<<endl;


    //Pascal Triangle
    int l;
    cin>>l;
    for(int i=0;i<l;i++){
        for(int j=0;j<=i;j++){
            cout<<findnCr(i,j)<<" ";
        }
        cout<<endl;
    }

    
}