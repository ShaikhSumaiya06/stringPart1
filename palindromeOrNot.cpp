/*
check whether the given string is palindrome or not
i/p : abcde
o/p : no
i/p : abcdcba
o/p : yes
*/
#include<iostream>
using namespace std;
string reverse(string s, int start, int end){
    int i=start;
    int j=end-1;
    string str;
    str = s;
    while(i<=j){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}
bool check(string &str){
    int i=0;
    int n=str.size();
    int j=n-1;
    while(i<=j){
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    cout<<"enter string : ";
    cin>>s;
    
    // int n=s.size();
    // string k=reverse(s,0,n);
    // if(k==s) cout<<"Is Palindrome . ";
    // else cout<<"Not Palindrome.";

    cout<<(check(s)? "YES":"NO");
    
    
}