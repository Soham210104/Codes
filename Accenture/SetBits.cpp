/*REDO*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;

  int count = 0;
  while(n>0){
    if(n&1){
      count++;
    }
    n>>=1;
  }

  int ans = 0;
  int power = 1;

  for(int i=0;i<count;i++){
    ans += power * 1;
    power *= 2;
  }
  
  cout<<ans<<endl;

  return 0;
}