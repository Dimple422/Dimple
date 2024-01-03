//wap to demonstrate the string stream class for converting the string data into an integer.
#include<iostream>
using namespace std;
int main(){
    string str1 = "143";
    int intdata;
    stringstream obj;
    obj<<str1;
    obj>>intdata;
    cout<<"The string value is:" <<str1<<endl;
    cout<<"The representation of the string to integer type data is:" << intdata<<endl;
 }