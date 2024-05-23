#include<iostream> 
using namespace std;
#include <time.h> 
#include <cstdlib>
#define clrscr() system("cls");

int main(){
int up_value=10;
int lw_value=0;

clrscr();
cout<<"\t \t\tNUMBER GUSSING GAME";
srand(time(0));
int num,random,T;
 char c;



do{
random=rand() % (up_value-lw_value)+1;



cout<< "\nGuess a number between 0-10 :";
cin>>num;

if(num==random ){
cout<<"\nCongratulation !you guess the correct number. ";

}
 
else if(num > up_value){
cout<<"\nGuess number is too long,try again.";
}

else if(num < lw_value){
cout<<"\nGuess number is too low,try again.";

}

else{
   cout<<"You guess the wrong number.";

}

cout<<"\n\nif you want to continue the game please press Y or Not press N:";
cin>>c;

if(c=='n'||c=='y'){}
        else
        {
            cout<<"Invalid input.Plz enter again to play game or to exit    "<<endl;
        }
}while(c!='n');


    return 0;
}
