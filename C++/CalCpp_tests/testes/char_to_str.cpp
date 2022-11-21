#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
  string math = "4*4";
  stringstream mathStrm(math);
  double input;
  mathStrm >> input;
  cout << math << endl;
  cout << input << endl;
}
