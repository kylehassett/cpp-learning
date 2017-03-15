//Game Stats program from the book

#include<iostream>
using namespace std;

int main(){
   int score;
   double distance;
   char playAgain;
   bool shieldsUp;
   short lives, aliensKilled;

   score = 34;
   distance = 1200.76;
   playAgain = 'y';
   shieldsUp = true;
   lives = 3;
   aliensKilled = 10;

   double engineTemp = 65434.234;
   cout << "\nscore: " << score << endl;
   cout << "distance: " << distance << endl;
   cout << "playAgain: " << playAgain << endl;
   cout << "Lives: " << lives << endl;
   cout << "aliens Killed: " << aliensKilled << endl;
   cout << "engineTemp: " << engineTemp << endl;
   
   int fuel;
   cout << "\nHow Much fuel? ";
   cin >> fuel;
   cout << "fuel: " << fuel << endl;
   typedef unsigned short int ushort;
   ushort bonus = 10;
   cout << "\nbonus: " << bonus << endl;

   return 0;
}
