#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    int ans=0;
    for (a=1;a<1000;a++){
  for (b=1;b<1000;b++){
    for (c=1;c<1000;c++){
      if (a+b+c==1000){
        if((a*a)+(b*b)==(c*c)){
          ans=a*b*c;
          break;
                                }
                  }
          }
  }
     }

cout<<ans;
return 0;

}
