#include <iostream>
#include <string>
using namespace std;

// int main() {
//   string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
//   cout << cars[0];
//   return 0;
// }
// int main(){
//     string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
//     for(int i=0;i<5;i++){
//     cout<<cars[i]<<endl;
//     }
//     return 0;
// }

int main(){
    string letter[3][3]={
        {"A","B","C"},
        {"F","E","D"},
        {"G","H","I"}
    };
    cout<<letter[2][2];
    return 0;
}