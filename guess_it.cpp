#include<bits/stdc++.h>
#include<ctime>

using namespace std;

int randomNumber();

int guessNumber();

bool answer(int guess, int secretNumber);

void printAnswer(int guess, int secretNumber);

char check = 'y';

int range;

int main()
{
    cout<<"Guess It - Let's know your ability of prediction"<<endl;
    cout<<"________________________________________________"<<endl;
    while(check == 'Y'||check == 'y')
    {
        cout<<"Choose the range: ";
        cin>>range;
        cout<<"\nLet's begin!"<<endl;
        int count = 0;
        int guess;
        int secretNumber = randomNumber();
        do
        {
            if(count == 0)cout<<"\nEnter your guess number: ";
            else cout<<"\nRetry: ";
            guess = guessNumber();
            printAnswer(guess,secretNumber);
            count ++;
        }
        while(answer(guess,secretNumber) == 0&&count<10);
        if(count == 10){
            cout<<"\nYou lost!!! You have guessed 10 times!"<<endl;
            cout<<"The answer is "<<secretNumber<<endl;
            cout<<"Do you want to replay (Y/N) ? " ;
            cin>>check;
        }
    }

    cout<<"\n_________________________________________________"<<endl;
    cout<<"~~~~This programme was written by NECROMANCER~~~~"<<endl;
    cout<<"-------------------------------------------------"<<endl;


}

int randomNumber()
{
    srand(time(0));
    return rand()%range;
}

int guessNumber()
{
    int guess;
    cin>>guess;
    return guess;
}

bool answer(int guess,int secretNumber)
{
    if(guess!=secretNumber)return 0;
    else return 1;
}
void printAnswer(int guess, int secretNumber)
{
    if(guess>secretNumber)
    {
        cout<<"Your guess is too big!"<<endl;
    }
    else if(guess<secretNumber)
    {
        cout<<"Your guess is too small!"<<endl;
    }
    else
    {
        cout<<"Congratulation!!! Do you want to replay (Y/N) ?";
        cin>>check;
    }
}
