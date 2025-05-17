#include <iostream>
using namespace std;
// int cnt = 0;
// void print() {
//     if(cnt == 4) return;
//     cout<< cnt << endl;
//     cnt++;
//     print(); 
// }

// int main() {
//     print();
// }




// print name n time using reccurtion
// void printName(int n){
//     if(n < 1){
//         return;
//     } 
//     cout << "raj" << endl;
    
//     printName(n - 1);
// }

// int main(){
//     int n;
//     cout << "Enter the no. of times u want to print 'raj':";
//     cin >> n;

//     printName(n);
//     return 0;
// }

// void printName(int i, int n){
//     if(i > n) return;
     
//     cout << "raj" << endl;
    
//     printName(i+1,n);
// }

// int main(){
//     int n;
//     cout << "Enter the no. of times u want to print 'raj':";
//     cin >> n;

//     printName(1,n);
//     return 0;
// }

// print 1 to n using recursion

void printName(int i, int n){
    
    if(i > n) return;
    cout << i << endl;
    
    printName(i+1,n);
}

// int main(){
//     int n;
//     cout << "Enter the no. of times u want to print:";
//     cin >> n;

//     printName(1,n);
//     return 0;
// }


// print n to 1 in reccurtion;

void printName(int i, int n){
    
    if(i < 1) return;
    cout << i << endl;
    
    printName(i-1,n);
}

// int main(){
//     int n;
//     cout << "Enter the no. of times u want to print :";
//     cin >> n;

//     printName(n,n);
//     return 0;
// }

// some of 1st n no.s

// void solve(int n){
//     int sum = n*(n+1)/2;
//     cout << sum << endl;
// }



// int main(){
//     solve(5);
//     solve(6);
// }

// Factorial of a Number : Iterative and Recursive

// void fac(int n){

//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *= i; 
//     }
//     cout << fact << endl; 
// }

// int main(){
//     fac(5);
//     return 0;
// }

// reverse of an array


// void reverseArray(int arr[], int size) {
//     int left = 0;
//     int right = size - 1;

//     // Two-pointer approach
//     while (left < right) {
//         // Swap elements at left and right
//         int temp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = temp;

//         // Move the pointers
//         left++;
//         right--;
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     printArray(arr, size);

//     reverseArray(arr, size);

//     cout << "Reversed array: ";
//     printArray(arr, size);

//     return 0;
// }

// 