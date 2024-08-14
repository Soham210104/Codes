#include<bits/stdc++.h>
using namespace std;

int solve(int n){
  if(n==0) return 1;
  return n*solve(n-1);
}

int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  //we can use fact *= i
  int fact = 1;
  fact = solve(n);

  cout<<"The factorial of "<<n<<" is "<<fact<<endl;
}