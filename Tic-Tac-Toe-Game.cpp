#include<iostream>
using namespace std;
#include <vector>
#define clrscr() system("cls");

vector <char> arr={' ',' ',' ',' ',' ',' ',' ',' ',' '};


void Player_Input(vector <char> &board,char player);
int count(char);
void GameBoard();
void DisplayBoard(vector <char> & board);
void resetBoard(vector <char> & board) ;
bool playAgain();
bool check_win(vector <char> &board,char symbol);
bool checkDraw(vector <char> &board);
//bool isInteger(const string& input);






int main()
{
      cout<<"\t\t\t TIC-TAC-TOE GAME";
       char currentPlayer = 'X';
   GameBoard();
  
  while(true){
   
    Player_Input(arr,currentPlayer);

     if(check_win(arr,currentPlayer)){
            DisplayBoard(arr);
            cout << "\nPlayer " << currentPlayer << " wins!" << endl;
            if (!playAgain()) {
                break;
            }

            resetBoard(arr);
            //DisplayBoard();
     }
    
    if(checkDraw(arr)){
     DisplayBoard(arr);
     cout << "\nGame is Draw!" << endl;
      if (!playAgain()) {
                break;
            }
        
            resetBoard(arr);
            //DisplayBoard();
    }
   
  DisplayBoard(arr);
   currentPlayer = (currentPlayer=='X') ? 'O'  :  'X';

   
  }



    return 0;
}





//______Function to Update Board Game
void DisplayBoard(vector <char> &arr){



cout<<"\n__________________Current State _________________________________________";
cout<<"\n\n\t\t"<<arr[0] <<"     |    "<< arr[1] <<" |   "<<arr[2]      ;

cout<<"\n\t\t______|______|______"; 

cout<<"\n\t\t  "<<arr[3]<<"   |    " <<arr[4]<<" |   "<<arr[5]      ;
cout<<"\n\t\t______|______|______";
cout<<"\n\t\t  "<<arr[6]<<"   |     " <<arr[7]<<"|   "<<arr[8]      ;
cout<<"\n\t\t      |      |      ";




}

// 2.......Function to reset the game board

void resetBoard(vector <char> &board) {
    
    for(int i=0;i<9;i++){
    board[i]=' ';

    }

}

//3......... Function to play again
bool playAgain() {
    char choice;
    cout << "\nDo you want to play again? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}

int count(vector <char> &board){
    int x=0,y=0;
for(int i;i<9;i++){

if(board[i]=='X')
x++;

if(board[i]=='O')
y++;

}
}


//4.......Function for plyer input

void Player_Input(vector <char> &board,char player){

int ps;
cout<<"\nPlayer_"<<player<<" Select the position(1-9):";

cin>>ps;
   // Adjust position indices to match the board
ps--;

if( 0 <=ps &&  8>=ps)
{
if(board[ps]!=' '){
cout<<"\nPlease,Select other position,it has already occupied.Try Again!";
Player_Input(board, player);
}
else{

board[ps]=player;

}

}
else{

cout<<"\nInvalid ,Select the position between (1-9).";

}
}

//5.........Check for draw 
//bool Draw(vector <char> &board ){

// char symbol
// if(!check_win(arr,symbol)){
//      return true;
//  }

//  else false;

bool checkDraw(vector<char> & board) {
    for (char cell : board) {
        if (cell == ' ')
            return false; // Empty cell found, game is not a draw
    }
    return true; // All cells filled, game is a draw
}
 

//6.......Function for Check winning 

bool check_win(vector <char> &board,char symbol){



// Check for rows

if(board[0]==board[1] && board[1]==board[2] && board[0]==symbol)
    return true;

if(board[3]==board[4] && board[4]==board[5] && board[3]==symbol)
    return true;

if(board[6]==board[7] && board[7]==board[8] && board[6]==symbol)
    return true;


//Check for colums

     if(board[0]==board[3] && board[3]==board[6] && board[0]==symbol)
    return true;

    if(board[1]==board[4] && board[4]==board[7] && board[1]==symbol)
    return true;

    if(board[2]==board[5] && board[5]==board[8] && board[2]==symbol)
    return true;

    // Check  diagonally 

    if(board[0]==board[4] && board[4]==board[8] && board[0]==symbol)
    return true;

     if(board[2]==board[4] && board[4]==board[6] && board[2]==symbol)
    return true;


     else
      return false;

}

//7.......Function GameBoard

void GameBoard(){


cout<<"\n\t\t\t  Game Board";
cout<<"\n\n\t\t   1  |   2  |   3  ";
cout<<"\n\t\t______|______|______";
cout<<"\n\t\t   4  |   5  |   6  ";
cout<<"\n\t\t______|______|______";
cout<<"\n\t\t   7  |   8  |   9  ";
cout<<"\n\t\t      |      |      ";
}


