
    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll;
    typedef long double ld;

 
 class Complex {
     public:
     double imaginary; 
     double real;
     Complex(){
        imaginary=0;
        real=0;
    };
    Complex add(Complex r1,Complex r2){
        Complex result;
        result.imaginary=r2.imaginary+r1.imaginary;
        result.real=r2.real+r1.real;
        return result;
    }
        Complex add(Complex r1,Complex r2){
        Complex result;
        result.imaginary=r2.imaginary-r1.imaginary;
        result.real=r2.real-r1.real;
        return result;
    }

    void print (){
        cout<<"( "<<real<<", "<<imaginary<<" )";
    }
    
 };

 int main(){
     Complex num;
     num.imaginary=4;
     num.real=5;
    num.print();
 }
