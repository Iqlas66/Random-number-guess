#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main() {

   int input = 0;
   cout << "Select difficulty:" << endl;
   cout << "Press 1 for easy" << endl;
   cout << "Press 2 for hard " << endl;
   cin >> input;
   bool easy = (input == 1);
   int attempts = 0;
   srand(time(0));
   int rnd = rand() % 100 + 1;
   int answer = 0;

   while (attempts < 5) {
      cout << "Enter your prediction (1-100):" << endl;
      cin >> answer;
      attempts++;
      if (answer == rnd) {
         cout << "Your prediction is good!" << endl;
         cout << "You got " << 5 - attempts << " points" << endl;
         break;
      }else if (answer < rnd and easy) {
         cout << "Your prediction is too small" << endl;
         cout << "Attempts left: " << (5 - attempts) << endl;
      }else if (answer > rnd and easy) {
         cout << "Your prediction is too high" << endl;
         cout << "Attempts left: " << (5 - attempts) << endl;
      }else {
         cout << "Your prediction is bad!" << endl;
         cout << "Attempts left: " << (5 - attempts) << endl;
      }

   }
   if (answer != rnd) {
      cout << "You lose, random number was:  " << rnd  <<endl;
   }

}