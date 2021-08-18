#include <iostream>
using namespace std;
/*
Question - Reverse an array
input : 5
        1 2 3 4 5
output : 5 4 3 2 1
*/
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
