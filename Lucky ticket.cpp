#include<iostream>
using namespace std;
int main(){
      int n,sum=0,summ=0;
      cin>>n;
      int m=n;
      while(n>1000){
            sum+=n%10;
            n/=10;
      }
      
      while(n>0){
            summ+=n%10;
            n/=10;
      }
      if(sum==summ) cout<<"YES";
      else cout<<"NO";
}