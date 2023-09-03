#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
   srand(time(0));
    int secretNumber=rand()%100+1;
    int guess;
    int attempts=0;
    cout<<"WELCOME TO NUMBER GUESSING GAME \n";
    cout<<"I HAVE SELECTED A NUMBER BETWEEN 1 AND 100, TRY TO GUESS IT \n";

do
{
    cout<<"ENTER YOUR GUESS: ";
    cin>>guess;
    attempts++;
        if(guess>secretNumber)
        {
            cout<<"TOO HIGH!, TRY AGAIN \n";
        }
        else if(guess<secretNumber)
        {
            cout<<"TOO LOW! TRY AGAIN \n";
        }
        else
        {
         cout<<"CONGRATULATIONS! YOU WIN IN "<<attempts<<" ATTEMPTS , THE NUMBER IS "<<secretNumber;  
        }
} while (guess!= secretNumber);
return 0;

}
