#include <iostream>
using namespace std;
int binarySearch(int array[],int key,int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid = (start + end) / 2;
        
        if(array[mid]==key) return mid;
       else if(array[mid]<key) start = mid+1;
        else end = mid-1;
    }  
}
int main() {
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int key=8;
    int result=binarySearch(array,key,n);
    cout<<result;
    return 0;
}