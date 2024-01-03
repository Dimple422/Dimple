#include<iostream>
using namespace std;
int main(){
    //int a=3;
    //int*b = &a;
    //cout<<b;
    //what is pointer?--->datatype which holds the address of other datatypes
    int a=7;
    int*b;
    b=&a;

    //&----->(Address of)operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    //*----->(value at) Deference operator
    cout<<"the value at address b is "<<*b<<endl;

    //pointer to pointer
    int** c= &b;
    cout<<"address of b is "<<&b<<endl;
    cout<<"address of b is" <<c<<endl;
    cout<<"value at address of c is "<<*c<<endl;
    cout<<"the value at address value_at(value-at(c))is "<<**c<<endl;
    return 0;

}



