#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& arr, int n) {
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
            // cout<<"run"<<endl; this is to check hwo many times the arry is running
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    insertion_sort(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i]  << " ";
    }
    return 0;
}