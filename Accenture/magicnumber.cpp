#include<bits/stdc++.h>
using namespace std;



void solve(int num,int &ans){

  vector<int> v;
  while(num){
    if(num&1){
      v.push_back(1);
    }
    else{
      v.push_back(0);
    }
    num>>=1;
  }
  //reverse if you want to.
  int sum = 0;
  for(int i=0;i<v.size();i++){
    if(v[i] == 1){
      v[i] = 2;
    }
    else{
      v[i] = 1;
    }
  }

  for(int i=0;i<v.size();i++){
    sum += v[i];
  }

  if(sum%2 != 0){
    ans++;
  }

}

int main(){

  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;

  int ans = 0;
  for(int i=1;i<=n;i++){
    solve(i,ans);
  }

  cout<<ans<<endl;

  return 0;
}
