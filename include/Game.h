#ifndef GAME_H
#define GAME_H

#include "Rock.h"
#include "Paper.h"
#include "Scissor.h"
#include "HumanPlayer.h"
#include "AIPlayer.h"

#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;
class Game
{
    public:
        Game();
        Game(int, int);
        Game(int, int, string);
        Game(int, int, string, string);
        void play();
        void printPlayers();
        void printWinner();
        int getScoreP1();
        int getScoreP2();
        string getWinner();;
        void printFinalScore();
    private:
        int rounds;
        Player plyr1;
        Player plyr2;
        Hand hand;
        string winner;
        int scr_plyr1;
        int scr_plyr2;
        int mode;
};

#endif // GAME_H
