#include<bits/stdc++.h>
using namespace std;
// int main(){
//   int a=2;
//   int b=3;
//   int c=4;
//   cout<<((c>=a)&&(c>=b))<<endl;  //and operator to check if both conditions are true
//   cout<<((c>=a)||(a>=b));  //or operator to check if any one condition is true
// }
// int main(){
//   int n=3;
//   if(n%2==0){
//     cout<<"YES";
//   }else{
//     cout<<"NO";
//   }
// }

//SCOPES
// int main(){
//   int x;  //global scope
//   {
//     x=2;//Local Scope
//   }
//   x=3;
// }


//WHILE LOOP

// int main(){
//   int i=1;
//   while(i<10){
//     cout<<i<<endl;
//     i++;
//   }
// }

//FOR LOOP

// int main(){
//   int x=3;
//   for(int i=1;i<=x;i++){
//     for(int j=1;j<=i;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }

//FOR TEST CASES
int main(){
  int t=2;
  while(t--){
    int n=5;
    for(int i=1;i<=n;i++){
          for(int j=1;j<=i;j++){
      cout<<"*";
   }
   cout<<endl;
}
  }
}