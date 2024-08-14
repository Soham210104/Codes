#include<bits/stdc++.h>
using namespace std;


int main(){
  
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  vector<int> v;
  while(n){
    if(n & 1){
      v.push_back(1);
    }
    else{
      v.push_back(0);
    }
    n = n>>1;
  }
  //reverse the vector
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  
  return 0;
}