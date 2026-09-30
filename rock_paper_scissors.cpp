#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){

// function for random number selection by computer  
srand ( time (0));

int user_choice = 0 ; int comp_choice = 0 ;
int user = 0; int comp = 0;
char play_again;


// menu for user 
do {
    comp_choice = rand()%3 + 1 ;
cout << "\n------ROCK PAPER SCISSORS GAME!------\n";
cout << "1. ROCK  \n";
cout << "2. PAPER \n";
cout << "3. SCISSORS \n";
cout << "4. EXIT THE GAME \n";
cout << "----Enter your choice:---- \n";
cin >> user_choice;


 if (user_choice == 4){
    cout << "You exited the game!\n";
    play_again = 'n';
continue ; }
 
 switch (user_choice){
    case 1 : // if user choses rock 
    if(comp_choice == 1){
        cout << "YOU CHOSE ROCK \n";
        cout << "PC CHOSE ROCK \n";
        cout << "----DRAW! PLAY AGAIN----\n";
    } else {
        if(comp_choice == 2){
            cout << "YOU CHOSE ROCK \n";
            cout << "PC CHOSE PAPER \n";
            cout << "----YOU LOSE! PC WINS! ----\n";
            comp ++;
        }else {
            cout << "YOU CHOSE ROCK \n";
            cout << "PC CHOSE SCISSORS \n";
            cout << "----YOU WIN! PC LOST! ----\n";
            user ++;
        }
    }; break;

    case 2: // user chooses paper 
      if (comp_choice == 2){
        cout << "YOU CHOSE PAPER \n";
        cout << "PC CHOSE PAPER \n";
        cout << "----DRAW! PLAY AGAIN----\n";
    } else {
        if(comp_choice == 3){
            cout << "YOU CHOSE PAPER \n";
            cout << "PC CHOSE SCISSOR  \n";
            cout << "----YOU LOSE! PC WINS! ----\n";
            comp ++;
        }else {
            cout << "YOU CHOSE PAPER \n";
            cout << "PC CHOSE ROCK \n";
            cout << "----YOU WIN! PC LOST! ----\n";
            user++;
        }
    }; break;

        case 3: // user chooses scissors 
           if(comp_choice == 3){
        cout << "YOU CHOSE SCISSORS \n";
        cout << "PC CHOSE SCISSORS \n";
        cout << "----DRAW! PLAY AGAIN----\n";
    } else {
        if(comp_choice == 1){
            cout << "YOU CHOSE SCISSORS \n";
            cout << "PC CHOSE ROCK \n";
            cout << "----YOU LOSE! PC WINS! ----\n";
            comp ++;
        }else {
            cout << "YOU CHOSE SCISSORS \n";
            cout << "PC CHOSE PAPER \n";
            cout << "----YOU WIN! PC LOST! ----\n";
            user++;
        }
    }; break;
        
    default : cout << "\nInvalid Data Entry!\n";

}


    cout << "Play again? (Y/N): ";
    cin >> play_again;

} while (play_again == 'Y' || play_again == 'y');
    cout << "Score -> You: " << user << " PC: " << comp << endl;
return 0;
}