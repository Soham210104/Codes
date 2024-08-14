#include<bits/stdc++.h?
using namespace std;

int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;

  if(n==0) return 0;
  if(n==1) return 2;

  int arr[n] = {0};
  arr[0] = 0;
  arr[1] = 2;

  for(int i=2;i<=n;i++){
    arr[i] = 2 * arr[i] + i - 1 + arr[i-1];
  }

  cout<<arr[n]<<endl;

  return 0;
}