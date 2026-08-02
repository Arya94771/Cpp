#include<iostream>
using namespace std;
int main(){
  int a[4];
  a[0]=1;
  a[1]=2;
  a[2]=3;
  a[3]=4;
  for(int i=0;i<4;i++){
    cout<<a[i];
  }
  int sum=0;
  for(int j=0;j<4;j++){
    sum=sum+a[j];
  }
  cout<<sum<<endl;
}
