#include<bits/stdc++.h>
using namespace std;

int main(){

  int n = 7;
  int stars = n;
  int spaces = 0;


  for(int i=0;i<n;i++){
    for(int k=0;k<spaces;k++){
      cout<<" ";
    }

    for(int j=0;j<stars;j++){
      cout<<"*";
    }
    cout<<endl;
    spaces++;
    stars--;
  }
  return 0;
}