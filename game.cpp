#include<iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
   
    char ch;
    
    int win = 0;
    int tie = 0;
    int lose = 0;
    
    do{
    int choice;
    
    cout << "--------------------------------------" << endl;
    cout << "-- Lets play Man, Gorilla, Gun! --" << endl;
    cout << "--------------------------------------" << endl;
    // Ask the player to choose Man, Gorilla, Gun
    cout << "Press 1 for Man, 2 for Gorilla, 3 for Gun:" << endl;
    cin >> choice;
    // gets a random number between 1 and 3 and tell the player what was chosen
    int ai = rand() % 3 + 1;
    cout <<  "The computer chose: " << ai << endl;
    // starts possible outcome sequence in rock paper scissors there are 9 possible out comes 3 wins 3 ties and 3 losses.
    if(choice == 1 && ai == 1){
         cout << "Man meets Man its a tie!" << endl;
         tie++;
         }
    else if(choice ==1 && ai== 2){
         cout << "Man is devoured by Gorilla the computer wins!." << endl;
         lose++;
         }
    else if(choice == 1 && ai == 3){
         cout << "Man breaks the gun you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 1){
         cout << "Gorilla beat man the hell up you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 2){
         cout << "Gorilla meets Gorilla its a tie!" << endl;
         tie++;
         }
    else if(choice == 2 && ai == 3){
         cout << "Gorilla is wasted by gun the computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 1){
         cout << "Gun is crushed by man computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 2){
         cout << "gun breaks gorilla back you win!" << endl;
         win++;
         }
    else if(choice == 3 && ai == 3){
         cout << "Gun meet gun its a tie!" << endl;
         tie++;
         }
         // this is what happens if the player doesn't hit 1 2 or 3
    else{
         cout << "You didn't select 1, 2, or 3 you idot next time choose the right number fool" << endl;
         }
         
         cout << "Wins: " << win << endl;
         cout << "Ties:" << tie << endl;
         cout << "Losses:" << lose << endl;
         cout << "Would you like to play again? Y/N" << endl;
         cin >> ch;
         
         }while(ch == 'Y' || ch == 'y');
    
    return 0;
   
}