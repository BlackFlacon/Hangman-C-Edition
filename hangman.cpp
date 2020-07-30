#include <iostream>
#include <string.h>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    
    
    string answer;
    cout<<"Please Enter the Answer: ";
    cin>>answer;
    
    //defining and copying string into a new char array
    char answ[answer.length() + 1];
    char inpup[answer.length() + 1];
    char check[100];
    strcpy(answ, answer.c_str());
    
    for(int i=0; i < answer.length(); i++)
        inpup[i] = 	'-';
    
    for(int i=0; i < 99; i++)
        check[i] =  '-';
    
    //introduction
    cout<<"OK Lets start the game!\nYou will have 5 guesses to guess the right answer!\n";
    for(int i = 0; i < answer.length(); i++)
         cout<<inpup[i];
    cout<<"\n";
    
    int correct = 0;
    int wrong = 0;
    int total = answer.length();
    
    while(wrong < 5 && correct < total)
    {
        int tim = 0;
        bool xd = false;
        bool doop = false;
        char inp;
        cout<<"\nOK Enter your guess: ";
        cin>>inp;
        
        for(int i = 0; i < answer.length(); i++)
        {
            if(inp == check[i])
                doop = true;
        }
        
        if(doop)
        {
            cout<<"You have already guessed this letter!\n";
        }
        else
        {
            check[tim] = inp;

            for(int i = 0; i < answer.length(); i++)
            {
                if(inp == answ[i])
                {
                    inpup[i] = inp;
                    correct++;
                    xd = true;
                }
            }
            
            
            if(xd)
                cout<<"Good Guess!\n";
            else
            {
                wrong++;
                cout<<"Wrong!!!\n";
            }
            
            
            
            
            for(int i = 0; i < answer.length(); i++)
                 cout<<inpup[i];
            cout<<"       Number of Wrong Guess Remaining: "<< 5-wrong<<"\n";
        }
        tim++;
    }
    if(correct == total)
        cout<<"You Win!";
    if(wrong == 5)
        cout<<"You Lose!";
}

    
