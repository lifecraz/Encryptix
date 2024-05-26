#include<iostream>
using namespace std;
#define clrscr() system("cls");

void Addition(){
    int a,b,sum;
cout<<"\nGive any two number for addition:";
cin>>a>>b;

sum=a+b;

cout<<"\nThe addition is:"<<sum;


}

void Subtracton(){
    int a,b,sub;
cout<<"\nGive any two number for subtraction:";
cin>>a>>b;

sub=a-b;

cout<<"\nThe Subtraction is:"<<sub;


}

void Multiplication(){
    int a,b,mul;
cout<<"\nGive any two number for Multiplication:";
cin>>a>>b;

mul=a*b;

cout<<"\nThe Multiplaction is:"<<mul;


}

void Division(){
    float a,b,Div;
cout<<"\nGive any two number for Division:";
cin>>a>>b;

Div=a/b;

cout<<"\nThe Division is:"<<Div;


}

int main()
{
int choose;

do{
cout<<"\n_____________________choose Function__________________________________";
cout<<"\n1.Addition";
cout<<"\n2.Subtraction";
cout<<"\n3.Multiplication";
cout<<"\n4.Division";
cout<<"\n5.Exit";
cout<<"________________________________________________________________________";

cout<<"\n\nChoose any operation ";
cin>>choose;


switch(choose){



case 1:          Addition();
                 break;

case 2 :          Subtracton();
                  break;


case 3:              Multiplication();
                      break;


case 4:          Division();
                 break;

 case 5:        
                   break;

default :       cout<<"\nPlease choose valid option";
}

}while(choose!=5);



return 0;
}