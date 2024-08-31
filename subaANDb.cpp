#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum=num1-num2;
    return sum;
}
int main(){
     int a;
     cout<<"enter the 1st no:";
     cin>>a;
     int b;
     cout<<"enter the 2nd no:";
     cin>>b;
    cout<<add(a,b);
    return 0;
}