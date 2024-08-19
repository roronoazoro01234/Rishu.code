// Bubble sorting !!! //

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the no: ";
    cin>>n;
int arr[5]={34,42,69,10,0};
    int poon=1;
    while(poon<n){
    for(int i=0;i<n-poon;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
}
}
                     poon++;
}
              for(int i=0;i<n;i++){
              cout<<arr[i]<<" ";
}
    return 0;
}