/*
input a string of size n and update all the odd positions in the string to character '#'. consider 0-based indexing.
*/
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter string : ";
    // getline(cin,str) ;
    cin>>str;
    int n = str.size();
    for(int i=0;i<n;i+=2){
        str[i] = '#';
    }
    cout<<"After updatation : "<<str;
}