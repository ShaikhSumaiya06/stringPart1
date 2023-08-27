/*
input a string of length less than 10 and convert it into integer without using builtin function
i/p : "3244"
o/P : 3244
i/p : "12"
o/P : 12
*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string : ";
    cin>>s;
    int val = 0 , pw = 1 , n=s.size();
    // while(s.size()){
    //     val +=pw*(s.back()-'0');
    //     s.pop_back();
    //     pw *=10;
    // }
    for(int i=n-1;i>=0;i--){
        val += pw*(s[i]-'0');
        pw*=10;
    }
    cout<<val;
    cout<<endl;
    
}