#include <iostream>
using namespace std;
#include <limits.h>
/*
Question - Find maximum and minimum element in the array
input : 5
        4 3 12 1 6
output : Maximum element is 12 and Minimum element is 1
*/
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int min = a[0];
    int max = a[0];
    for (int i = 1;i<n;i++){
        if (a[i]>max){
            max = a[i];
        }
        if (a[i]<min) {
            min = a[i];
        }
    }
    cout<<"Maximum element is "<<max<<" and Minimum element is "<<min<<endl;
}
