#include <iostream>
using namespace std;
int main() {
    int a[5]={-2,3,-6,7,-8};
    
    for(int i=0;i<5;i++){
        cout<<a[i];
        if(a[i]>0){
            cout<<" is positive no."<<endl;
             }
         else if(a[i]%2==0){
            cout<<" is even no."<<endl;
            }
             if(a[i]<0){
                cout<<" is negative no."<<endl;
            }
            else if (a[i]%2==1){
                cout<<" is odd no."<<endl;
            }
            
        }
            return 0;
}