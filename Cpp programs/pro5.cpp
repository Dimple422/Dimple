//Ther are two types of header files:
//1.System header files:It comes with the compiler
#include<iostream>
//2.User defined header files:It is written by the progrsmmer
//#include "this.h"//-->this will produce an error if this.h is no present in the directory
using namespace std;
int main(){
    int a=4, b=9;
    cout<<"operator in c++:"<<endl;
    cout<< "Following  are the types of operator in c++"<<endl;
    //Arithematic operator
    cout<< "The value  of a + b is "<<a+b<<endl;
    cout<< "The value  of a - b is "<<a-b<<endl;
    cout<< "The value  of a * b is "<<a*b<<endl;
    cout<< "The value  of a / b is "<<a/b<<endl;
    cout<< "The value  of a % b is "<<a%b<<endl;
    cout<< "The value  of a ++  is "<<a++<<endl;
    cout<< "The value  of a --  is "<<a--<<endl;
    cout<< "The value  of ++a is "<<++a<<endl;
    cout<< "The value  of --a is "<<--a<<endl;
    cout<<endl;
    //Assignment operator--> used to assign values to variables
    //int a =3, b=9;
    //char d='d';
    //Comparison operator
    cout<<"Following are the comparison oprators in c++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
     cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
     cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

    //Logical operators
    cout<<"Following are the logical operator in C++"<<endl;
    cout<<"The value of this logical AND operator((a==b)) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator((a==b)) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical NOT operator(!(a==b)) is:(!(a<b)) is:"<<(!(a==b))<<endl;
    return 0;

}