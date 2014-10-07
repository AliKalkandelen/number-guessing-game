#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
int guess;
int randomnumber;

srand (time(NULL));

randomnumber = rand() % 10;

cout<<"Guess the number\n";

do{
    cin>>guess;
    if(guess < randomnumber)
    {
        cout<<"Guess Higher\n";
    }
    else if(guess > randomnumber)
    {
        cout<<"Guess Lower\n";
    }

}while(guess != randomnumber);


cout<<"Thats correct! Congrats!";
return 1;
}
