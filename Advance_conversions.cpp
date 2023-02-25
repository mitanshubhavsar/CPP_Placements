#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int binaryToDecimal(int bin){
    int deci=0;
    int x = 1;
   

    while (bin > 0)
    {
        int lastdigit = bin % 10;
        deci += lastdigit*x;
        x *= 2;
        bin /= 10;
    }
    
    
    return deci;
}

int hexadecimalToDecimal(string hexa){
    int ans = 0;
    int x = 1;

    int s = hexa.size();
    for(int i=s-1;i>=0;i--){
        if(hexa[i] >= '0' && hexa[i] <= '9'){
            ans += x*(hexa[i] - '0');
        }
        else if(hexa[i] >= 'A' && hexa[i] <= 'F'){
            ans += x*(hexa[i] - 'A' + 10);
        }
        x *= 16;
    }

    return ans;
}

int decimalToOctal(int deci){
     int ans = 0,x=1;
    while (deci > 0)
    {
        int lastdigit = deci % 8;
        ans += lastdigit*x;
        x *=10;
        deci /= 8;
    }
    return ans;
}

string decimalToHexadecimal(int deci){
    int x = 1;
    string ans = "";
    while (x <= deci)
    {
        x *=16;
        x /=16;
    }

    while (x > 0)
    {
        int lastDigit = deci/x;
        deci -= lastDigit*x;
        x/=16;

        if(lastDigit <= 9){
            ans = ans + to_string(lastDigit);
        }else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
    
}

int decimalToBinary(int deci){
    int ans = 0,x=1;
    while (deci > 0)
    {
        int lastdigit = deci % 2;
        ans += lastdigit*x;
        x *=10;
        deci /= 2;
    }
    return ans;
    

}

int octalToDecimal(int oct){
    int deci=0;
    int x = 1;
   

    while (oct > 0)
    {
        int lastdigit = oct % 10;
        deci += lastdigit*x;
        x *= 8;
        oct /= 10;
    }
    
    
    return deci;
}


bool checkTriplet(int l,int m,int x){
    int a,b,c,maximum;
    maximum = max(l , max(m,x));
    if(maximum == l){
        a=l;
        b=m;
        c=x;
    }
    else if(maximum == m){
        a=m;
        b=l;
        c=x;
    }
    else{
        a=x;
        b=m;
        c=l;
    }
    if((a*a) == (b*b)+(c*c)){
        return true;
    }  
    else{return false;} 
}

int main(){
    int n;
    cin>>n;
    
    //sum of n natural numbers
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    cout<<sum<<endl;

    //find pythogyran triplet
    int l,m,x;
    cin>>l>>m>>x;
    
    

    if(checkTriplet(l,m,x)){
        cout<<"It is a pythogras triplet"<<endl;
    }else{cout<<"It is not a pythoguras triplet"<<endl;}

    //Binary to decimal
    int bin;
    cout<<"Binary to decimal:"<<endl;
    cout<<"Enter a Binary no.:"<<endl;
    cin>>bin;
    cout<<binaryToDecimal(bin)<<endl;

    //Octal to decimal
    int oct;
    cout<<"Enter a Octal no."<<endl;
    cin>>oct;
    cout<<octalToDecimal(oct)<<endl;

    // Hexadecimal to decimal
    string hexa;
    cout<<"Enter a Hexadecimal no."<<endl;
    cin>>hexa;

    cout<<hexadecimalToDecimal(hexa);

    //Decimal to Binary
    int deci;
    cout<<"Enter a decimal number:"<<endl;
    cin>>deci;
    cout<<decimalToBinary(deci)<<endl;

    //decimal to Octal 
    cout<<decimalToOctal(deci)<<endl;

    //decimal to Hexadecimal
    cout<<decimalToHexadecimal(deci)<<endl;

}