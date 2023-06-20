#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "RSPType.h"
using namespace std;


string num2RSP(int num)
{
    string rsp;
    
    // change number to string
    
    switch (num) {
        case 0:
            rsp = "rock";
            break;
            
        case 1:
            rsp = "scissors";
            break;
        
        case 2:
            rsp = "paper";
            break;
        
        default:
            break;
    }

    return rsp;
}


int main()
{

    int N;

    cin >> N;

    RSPType games(N);

    srand((unsigned int)time(NULL));

    while(!games.IsCompleted())
    {

        // makes random numbers and change them to string
        string A, B;
        int r1, r2;
        r1 = rand()%3; //r1 -> A, r2 -> B
        r2 = rand()%3; //0 -> rock, 1 -> scissors, 2 -> paper
        A = num2RSP(r1);
        B = num2RSP(r2);

        games.InsertItem(A, B);

    }

    games.Print();


    return 0;
}
