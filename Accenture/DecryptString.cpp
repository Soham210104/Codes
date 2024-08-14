#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cout<<"Enter the string"<<endl;
  cin>>s;
  string res = "";

  for(int i=0;i<s.length();i+=2){
    int first = s[i];
    int second = s[i+1];

    int l = second - '0';

    for(int j=0;j<l;j++){
      res += first;
    }
  }

  cout<<res<<endl;
  return 0;
}