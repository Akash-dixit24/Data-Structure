#include<iostream>
using namespace std;

int main() {
	// Write your code here

	  int a ,b ;
       cin>>a ,b;
       while(a>0 && b>0){
              if(a>b){
                     a =a%b;

              }
              else{
                     b =b%a;
              }
       }
       if(a==0){
              cout<<b;
       }
       else{
              cout<<a;
       }





}
      