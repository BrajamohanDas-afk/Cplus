//this hoe a function is made

// void myFunction() {
// code to be executed
// }

#include <iostream>
using namespace std;

void myFunction();  //Function e

//the main method 
int main() {
  myFunction();  //call the function
  return 0;
}

// function defination
void myFunction() {
  cout << "hi" << "\n" << std::flush;
  cout << "I just got executed!";

}
