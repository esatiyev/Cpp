#include <iostream>
using namespace std;
int binary_search(int key, int a[],int left, int right){
    while(left <= right){
        int mid = left+(right-left)/2;  // (left+right)/2
        if(a[mid] ==key) return mid;
        else if(a[mid] < key) left = mid+1;
        else right = mid - 1;
    }
    return -1;
}
int main(){
 int a[] = {45, 37, 27, 15, 9, 20};
 int n = sizeof(a)/ sizeof(int);
 int searched;
 cin >> searched;
 int res = binary_search(searched, a,0, n-1);
 if(res<0) cout << searched << " is not";
 else cout <<searched<<" is at " << res;
 
 return  0;  
}
