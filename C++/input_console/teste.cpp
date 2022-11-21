#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cout << "Enter grades : ";
  string grades;
  getline(cin, grades);
  cout << "Grades are : " << grades << endl;
  return 0;
}
