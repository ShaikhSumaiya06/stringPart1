/*
input the string of length n and count all the consonants in the given string.
ex : pwians
o/p : 4
ex : abdc
o/p : 3
*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string : ";
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'){
            count++;
        }
    }
    cout<<"No. of consonants : "<<count;
}