#include <iostream>
using namespace std;

int main() {
   char c;
   cout << "Enter any character: ";
   cin >> c;

   switch(c) {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
           cout << c << " is a vowel." << endl;
           break;
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
           cout << c << " is a vowel." << endl;
           break;
       default:
           cout << c << " is a consonant." << endl;
   }

   return 0;
}