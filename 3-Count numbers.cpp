#include<iostream>
using namespace std;
int main(){
     int n,m,od=0,ev=0;
     cin>>n;
     for (int i = 0; i < n; i++)
     {
            cin>>m;
            if(m%2==0) ev++;
            else od++;
     }
     cout<<"Odds : "<<od<<endl;
     cout<<"Even : "<<ev;
      
}