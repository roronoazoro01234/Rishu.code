#include <iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5};
int b[5]={1,2,3,4,5};
int sum[5];

for(int i=0;i<=4;i++){
    sum[i]=a[i]+b[i];
}
   cout<<"sum of array:";
   for(int i=0;i<=4;i++){
       cout<<sum[i]<<" ";
   }
    
    return 0;
}