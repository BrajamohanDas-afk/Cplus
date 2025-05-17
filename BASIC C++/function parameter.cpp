// void functionName(parameter1, parameter2, parameter3) {
//   // code to be executed
// }

#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {       //parameter
  cout << fname << " Refsnes\n";  
}

int main() {
  myFunction("Liam");    //argument 
  myFunction("Jenny");   //argument  
  myFunction("Anja");    //argument
  return 0;
}