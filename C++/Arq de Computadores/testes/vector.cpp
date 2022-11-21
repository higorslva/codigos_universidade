#include<iostream>
#include<vector>
using namespace std;
int main() {
   vector<string> animal_vec;
   animal_vec.push_back("Elephant");
   animal_vec.push_back("Lion");
   animal_vec.push_back("Deer");
   animal_vec.push_back("Tiger");
   for(int i = 0; i<animal_vec.size(); i++) {
      cout << animal_vec[i] << endl;
   }
}