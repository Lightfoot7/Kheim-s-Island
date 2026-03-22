#include <iostream>
#include <vector>
using namespace std;

class TicTacToe_Game{

private:

public: // test

// Prints the game board
void Create_Arena() {
    vector<vector<char>> map(3, vector<char>(3, '.'));
   
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
    Current_Player = 'X';
    cout << "PLAY YOUR FIRST MOVE BITCH!" << endl;
}
//
// Check if the player ('X' or 'O') has won the game
// Just breaks the line in 2 for better readability    
//function that returns True if all elements in an iterable.
//The all() function is used to check whether certain conditions all conditions are met
void Check_Winner(){
    // Check horizontal and vertical lines
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(map[i][j] == Current_Player || map[i][j] == Current_Player){
                cout << "YOU WIN BUDDY!" << endl;
                return true;
            }
            // Check diagonal lines
            else if(map[i][i] == Current_Player || map[i][2-i] == Current_Player){
                cout << "YOU WIN BUDDY!" << endl;
                return true;
            }                      
        }
        //return false    
    }
}

void Is_Board_Full(){
    // Check if the board is full (no empty spots), which is a Draw
        if self.is_full():
        self.print_board()
   
        cout << "It's a draw! BORIIING" << endl;
        break

    // nested loop
    return all([map[i][j] != '.' for i in range(3) for j in range(3)])  
}

void Switch_Player(){
    if (Current_Player == 'X'){
        Current_Player = 'O';
        else if (Current_Player == 'O'){
            Current_Player = 'X';
        }
    }

void Player_Move(){
    // Get a valid move from the player
        while(True){
            int move; cout << "Enter your move (1-9): " << endl; cin >> move; move--;
                row, col = divmod(move, 3)      
 //Takes dividend, divisor and gives quotient, remainder.
 //Floor division, remainder = move - (quotient*dividend).
            if (map[row][col] == '.'){
                map[row][col] = 'X';
                break;
            }
            else{
                cout << "This spot is already taken. Try again." << endl;
            }
            except (ValueError, IndexError):                                  # try this code, except if u get these errors, value: a, indec: int > 9
                print("Invalid move. Please enter a number between 1 and 9.")
        }
}

void Play(){
    while(True){

        // Clear the previous output
    // Clear_output();

        // Print the game
        Create_Arena();
           
        // PLAYER 1 move
        cout << "Player 1's turn" << endl;

        if Current_Player == 'X':
        self.human_move()
        if self.is_winner('X'):
        self.print_board()
        cout << "YOU WINNNNNNNN LOSER!" << endl;
        break
        Current_Player = 'O'

        // PLAYER 2 move
        cout << "Player 2's turn" << endl;
        if Current_Player == 'O':
        self.computer_move()
        if self.is_winner('O'):
        self.print_board()
        cout << "YOU LOST TO A 95 LINE CODE XD HAHAHAAHAHAHAHAHAHAHAHAHAHAHAAHAHAHA!" << endl;
        break;
        Current_Player = 'X';
    }
 }
 }

}