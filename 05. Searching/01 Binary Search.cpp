// Binary Search Algorithm
#include <iostream>
using namespace std;

// method1
// void binary_search(int a[], int n, int x){
//     int start = 0, end = n-1, mid = 0;
//     while(1){
//         if(start>end){
//             cout<<-1<<endl;
//             break;
//         }
//         else{
//             mid = (start + end)/2;
//             if(a[mid] == x){
//                 cout<<"Ans: "<<mid<<endl;
//                 break;
//             }
//             else if(x>a[mid]){
//                 start = mid+1;
//             }
//             else if(x<a[mid]){
//                 end = mid-1;
//             }
//         }

//     }
// }

// method2
int binary_search(int a[], int n, int x){
    int start = 0, end = n-1, mid = 0;
    while(start<=end){
            mid = (start + end)/2;
            if(a[mid] == x){
                return mid;
            }
            else if(x>a[mid]){
                start = mid+1;
            }
            else if(x<a[mid]){
                end = mid-1;
            }
    }
    return -1;
}



int main()
{
    int n, a[100], x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>x;
    // cout<<binarySearch(a, x)<<endl;
    int output = binary_search(a, n, x);
    cout<<output<<endl;
    return 0;
}

