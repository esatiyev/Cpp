
#include <iostream>
using namespace std;
int lin_search(int key, int a[], int n){
    for(int i = 0; i < n; i++)
            if(a[i] == key) return i;
    return -1;           
   
    
    
}
int main(){
 int a[] = {45, 37, 27, 15, 9, 20};
 int n = sizeof(a)/ sizeof(int);
 int searched;
 cin >> searched;
 int res = lin_search(searched, a, n);
 if(res<0) cout << searched << " is not";
 else cout <<searched<<" is at " << res;
 
 return  0;  
}
