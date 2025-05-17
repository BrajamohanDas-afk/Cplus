#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;
    // int main(){
    //     int n;                                           //int n is the no. of input
    //     cin >> n;
    //     vector<int> arr(n);
    //     for(int i = 0; i < n; i++){
    //         cin >> arr[i];
    //     }
    
    //     //precompute
    //     map< int, int> mpp;
    //     for(int i=0;i<n;i++){
    //         mpp[arr[i]]++;
    //     } 
    //     // iterate in the map
    //     for(auto it:mpp){
    //         cout<< it.first << "->" << it.second << endl; 
    //     }
            
    
    //     int q;                                          //int q the numbers to be checked 
    //     cin>>q;
    //     while(q--){
    //         int number;
    //         cin >> number;
    //         //fetch
    //         cout << mpp[number] << endl;
    //     }
    //     return 0;   
    // }


void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // Traverse through map to find the elements.
    for (auto it : map) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}