  #include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
  if(n==1 || n==0) return false;
  if(n<=3) return true;
  //we can iterate till sqrt of n for further optimization means i*i < =n
  for(int i=2;i<=n/2;i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int main(){

  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  vector<int> v;
  for(int i=2;i<n;i++){
    if(checkPrime(i)){
      v.push_back(i);
    }
  }

  int sum = 0;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    sum += v[i];
  }

  cout<<"The sum is "<<sum<<endl;
}