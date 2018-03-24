#ifndef PLAYER_H
#define PLAYER_H
#include "Hand.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissor.h"
#include <cstdlib>
#include <iostream>
#include<ctype.h>
#include<stdio.h>
#include <ctime>
using namespace std;

class Player
{
    public:
        Player();
        Hand getHand();
        string getName();
        void setHand();
        virtual void setName(string);
        virtual ~Player();
        Outcome versus(Player&);
    protected:
        Hand hand;
        string name;
    private:
};

#endif // PLAYER_H
