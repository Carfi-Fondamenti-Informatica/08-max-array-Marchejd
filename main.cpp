#include <iostream>
#include "lib.h"

using namespace std;

int main(){
      
      int x=0;
      float s=0;
      
    cin>>x;
    float ar[x];
      
    for (int i=0; i<x; i++)
    {
        cin>>ar[i];
        s=max(ar[i]);
    }
      
    cout<<s;

  return 0;
}
