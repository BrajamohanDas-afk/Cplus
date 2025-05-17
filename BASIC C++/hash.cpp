#include <iostream>
#include <vector>
#include <string>
using namespace std;

// int main(){
//     int n;                                           //int n is the no. of input
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] +=1;
//     }

//     int q;                                          //int q the numbers to be checked 
//     cin>>q;
//     while(q--){
//         int number;
//         cin >> number;
//         //fetch
//         cout << hash[number] << endl;
//     }
//     return 0;
// }

int main(){
    string s ;                                           //int n is the no. of input
    cin >> s;
    
    //precompute
    int hash[26]={0};                                   //because there are 26 letter in the alfabet and if doesnot have the just the lower case then 256
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++;                             //we remove -'a' if we take 256
    }

    int q;                                          //int q the numbers to be checked 
    cin>>q;
    while(q--){
        char c;
        cin >> c ;
        //fetch
        cout << hash[c-'a' ] << endl;                     // we remove -'a' if we take 256
    }
    return 0;
}