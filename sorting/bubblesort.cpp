#include <iostream>
#include <vector>
using namespace std;
// this is for the worst case 
// void bubble_sort(vector<int>& arr, int n) {
//    for(int i=n-1;i>=0;i--){
//     for(int j=0;j<i;j++){
//         if(arr[j]>arr[j+1]){
//             int temp = arr[j+1];
//             arr[j+1] = arr[j];
//             arr[j] = temp;
//         }
//     }   
//    }
// }

// this for the best case

void bubble_sort(vector<int>& arr, int n) {
   for(int i=n-1;i>=0;i--){
    int didSwap=0;
    for(int j=0;j<i;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            didSwap=1;
        }
    }  
    if(didSwap==0){
        cout<<"bitch it was alredy sorted "<<endl;
        break;
    } 
   }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    bubble_sort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
