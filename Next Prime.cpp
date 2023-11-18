#include<iostream>
#include<cmath>
using namespace std;
bool IsPrime(int num){
      if(num%2==0) return false;
      for(int i=2; i<sqrt(num);i++){
            if(num%i==0) return false;
      }
      return true;
}
int main(){
      int n;
      cin>>n;
      for (int i=n+1; i <100000; i++){
            if(IsPrime(i)==true){
                  cout<<i;
                  break;
            }
      }

      
}