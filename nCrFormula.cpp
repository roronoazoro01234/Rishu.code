#include<iostream>
using namespace std;

int fact(int n){
int factorial=1;
  for(int i=2;i<=n;i++){
   factorial=factorial*i;
  }
  return factorial;
}
  int main(){
    int n;
    cout<<"enter the 1st no:";
    cin>>n;
    int r;
    cout<<"enter the 2nd no:";
    cin>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;

}