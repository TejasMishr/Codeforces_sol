#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int number,guess,score=0;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100
    do
    {
        cout<<"Enter the number to guess"<<endl;
        cin>>guess;
        if(guess < number)
        cout<<"GO high"<<endl;
        else if(guess > number)
        cout<<"GO low"<<endl;
        else
        {
            cout<<"Congratulations!!"<<endl;
            cout<<"You guessed it right."<<endl;
        }
        score++;
    } while (guess!=number);
    cout<<"You guessed in "<<score<<" attempts"<<ends;
    return 0;
}