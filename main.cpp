#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main() {
   int attempts = 0;
   srand(time(0));
   int rnd = rand() % 100 + 1;
   int answer;

   while (attempts < 5) {
      cout << "Enter your prediction (1-100):" << endl;
      cin >> answer;
      attempts++;
      if (answer == rnd) {
         cout << "Your prediction is good!" << endl;
         cout << "You got " << 5 - attempts << "points" << endl;
         break;
      }
      else {
         cout << "Your prediction is bad!" << endl;
         cout << "Attempts left: " << (5 - attempts) << endl;


      }
   }
   if (answer != rnd) {
      cout << "You lose, random number was:  " << rnd  <<endl;
   }

}