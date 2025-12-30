#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main() {
   srand(time(0));
   int rnd = rand() % 100 + 1;
   int answer;
   cout << "Enter your prediction (1-100):" << endl;
   cin >> answer;
   if (answer == rnd) {
      cout << "Your prediction is good!" << endl;
   }
   else {
      cout << "Your prediction is bad!" << endl;
   }
}