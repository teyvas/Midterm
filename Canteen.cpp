#include<iostream>
using namespace std;
int main(){
      int som, tyin, cost, num,tsom, ttyin;
      cin>>som>>tyin>>num;
      tsom=som*num;
      tsom+=(tyin*num)/100;
      ttyin=(tyin*num)%100;
      cout<<tsom<<" "<<"som and "<<ttyin<<" "<<"tyiyn";
}