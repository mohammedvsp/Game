#include<iostream> 
#include <vector>
#include <ctime>
using namespace std;


void print()
{

cout <<"Please select the difficulty level:\n";
cout <<"1. Easy (10 chances)" <<endl;
cout <<"2. Medium (5 chances)\n";
cout <<"3. Hard (3 chances) "<<endl;
cout <<"\n";
}


int main()
{

int nmR;
int mtrob;

//
time_t TotalSec = time(nullptr);// calculate total second ;
// cout <<"Total Second beign 1970 and new Is : " << TotalSec << endl;

tm *local = localtime(&TotalSec); //Local Is Convert time to lstruct time new .
// cout << "hour : " << local->tm_sec << endl;


cout <<"Welcome to the Number Guessing Game! "<<endl;
cout <<"I'm thinking of a number between 1 and 10.\n";
cout <<"You have 5 chances to guess the correct number."<<endl;

cout <<"\n";
print();





vector<int> tkrar{
7, 2, 10, 5, 11, 4, 9, 12, 8, 3, 6, 1,
6, 12, 3, 7, 1, 10, 11, 8, 2, 9, 5, 4, 
1, 4, 6, 7, 12, 10, 5, 2, 11, 9, 8, 3,
8, 11, 2, 3, 4, 9, 6, 12, 7, 10, 5, 1, 
10, 3, 8, 5, 6, 2, 9, 4, 12, 7, 1, 11, 
5, 9, 12, 10, 11, 7, 6, 1, 3, 4, 8, 2, 
12, 6, 9, 3, 11, 4, 10, 7, 5, 1, 8, 2, 
3, 11, 4, 7, 1, 12, 6, 9, 8, 10, 5, 2, 
2, 8, 9, 10, 3, 1, 11, 5, 7, 12, 4, 6, 
9, 6, 4, 3, 8, 10, 11, 5, 1, 2, 12, 7, 
4, 7, 8, 1, 2, 12, 11, 10, 3, 6, 9, 5, 8, 3, 1, 9, 5, 7, 4, 2, 11, 6, 10, 12, 
1, 11, 7, 5, 3, 8, 12, 10, 2, 9, 6, 4, 7, 9, 3, 11, 6, 4, 10, 5, 12, 2, 8, 1, 
10, 5, 11, 12, 8, 4, 1, 7, 6, 9, 2, 3, 6, 12, 10, 8, 2, 5, 9, 3, 7, 11, 4, 1, 
3, 8, 2, 6, 12, 7, 4, 5, 11, 9, 10, 1, 9, 4, 12, 1, 7, 6, 11, 5, 3, 10, 2, 8, 
12, 1, 8, 10, 9, 5, 2, 7, 6, 4, 11, 3, 5, 6, 9, 3, 8, 7, 11, 2, 4, 1, 12, 10, 
4, 10, 2, 11, 12, 9, 7, 5, 3, 8, 1, 6, 8, 3, 12, 11, 1, 4, 7, 9, 10, 6, 5, 2, 
7, 11, 10, 5, 2, 3, 9, 12, 8, 1, 4, 6, 2, 9, 6, 12, 4, 8, 10, 11, 1, 3, 5, 7};

int Guess;
int Cou;
for (size_t i = local->tm_sec ; i < 60; i++)
{
mtrob = tkrar[i] * 8;
    break;
}

cout << mtrob << endl;

cout <<"Enter your choice: "; cin >> nmR;
switch (nmR)
{
case 1:
  cout <<"Great! You have selected the Easy difficulty level." << endl;
  cout <<"Let's start the game!\n";

  while (Cou <= 10)
  {

  Cou++;
  cout <<"\nEnter your guess: "; cin >> Guess;
  if (Guess ==mtrob)
  {
    cout <<"Congratulations! You guessed the correct number in " << Cou <<" attempts.\n";
    break;
  }else if (Guess < mtrob)
  {
     cout <<"Incorrect! The number is greater than ."<< Guess <<".\n";
  }else if (Guess > mtrob)
  {
     cout <<"Incorrect! The number is less than "<< Guess <<".\n";
  }
  }
  break;

case 2:
     cout <<"Great! You have selected the Medium difficulty level." << endl;
  cout <<"Let's start the game!\n";

  while (Cou <= 5)
  {

  Cou++;
  cout <<"\nEnter your guess: "; cin >> Guess;
  if (Guess ==mtrob)
  {
    cout <<"Congratulations! You guessed the correct number in " << Cou <<" attempts.\n";
    break;
  }else if (Guess < mtrob)
  {
     cout <<"Incorrect! The number is greater than ."<< Guess <<".\n";
  }else if (Guess > mtrob)
  {
     cout <<"Incorrect! The number is less than "<< Guess <<".\n";
  }
  }
  break;

     case 3:
      cout <<"Great! You have selected the Hard difficulty level." << endl;
      cout <<"Let's start the game!\n";

  while (Cou <= 3)
  {

  Cou++;
  cout <<"\nEnter your guess: "; cin >> Guess;
  if (Guess ==mtrob)
  {
    cout <<"Congratulations! You guessed the correct number in " << Cou <<" attempts.\n";
    break;
  }else if (Guess < mtrob)
  {
     cout <<"Incorrect! The number is greater than ."<< Guess <<".\n";
  }else if (Guess > mtrob)
  {
     cout <<"Incorrect! The number is less than "<< Guess <<".\n";
  }
  }
      break;
default:
cout <<"I'm Sorry The Option Is Incorrect ." << endl;
  break;
}


return 0;    
}