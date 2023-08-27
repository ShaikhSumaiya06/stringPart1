/*
input the string of even length and reverse the second half of the string
*/
#include<iostream>
using namespace std;
void reverse(string &s,int start, int end){
    int i=start;
    int j=end-1;
    while(i<=j){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}
int main(){
    string s;
    cout<<"enter string : ";
    cin>>s;
    int n=s.length();
    reverse(s,n/2,n);
    cout<<s;
}