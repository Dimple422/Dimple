//array & pointer
#include<iostream>
using namespace std;
int main(){
    int marks[] = {23,45,56,69};
    cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
      cout<<marks[2]<<endl;
       cout<<marks[3]<<endl;

       //you can changehw value of an array
       marks[2] = 455;
       cout<<"These are marks"<<endl;
       //cout<<marks[0]<<endl;
     //cout<<marks[1]<<endl;
      //cout<<marks[2]<<endl;
       //cout<<marks[3]<<endl;
       for (int i=0;i<4;i++)
       {
        cout<<"the value of marks "<<i<<"is"<<marks[i]<<endl;

       }
    //pointer nd array
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
     // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    
    return 0;
    

}