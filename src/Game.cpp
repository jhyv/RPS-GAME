#include "Game.h"

Game::Game()
{
    this->mode = 0;
    this->rounds = 3;
    AIPlayer p1;
    AIPlayer p2;
    plyr1 = p1;
    plyr2 = p2;
    scr_plyr1=0;
    scr_plyr2=0;
    srand(time(NULL));
}
Game::Game(int mode, int rounds)
{
    this->mode = mode;
    this->rounds = rounds;
    scr_plyr1=0;
    scr_plyr2=0;
    if(mode == 0)
    {
       AIPlayer p1;
       AIPlayer p2;
        plyr1 = p1;
        plyr2 = p2;
    }
    else if(mode == 1)
    {
        HumanPlayer p1;
        AIPlayer p2;
        plyr1 = p1;
        plyr1.setName("PLAYER#1");
        plyr2 = p2;

    }
    else if(mode == 2)
    {
        HumanPlayer p1;
        HumanPlayer p2;
        plyr1 = p1;
        plyr1.setName("PLAYER#1");
        plyr2 = p2;
        plyr2.setName("PLAYER#2");

    }
    srand(time(NULL));
}
Game::Game(int mode, int rounds,string name1)
{
    this->mode = mode;
    this->rounds = rounds;
    scr_plyr1=0;
    scr_plyr2=0;
    if(mode == 0)
    {
       cout<<"Argument ERROR!"<<endl;
       cout<<"\tMODE IS NOT VALID"<<endl;
       cout<<"\tHUMAN PLAYER IS PRESENT"<<endl;
    }
    else if(mode == 1)
    {
        HumanPlayer p1;
        AIPlayer p2;
        srand(time(NULL));
        int num =(rand()%2)+1;
        if(num == 1)
        {
            plyr1 = p1;
            plyr1.setName(name1);
            plyr2 = p2;
        }
        else
        {
            plyr2 = p1;
            plyr2.setName(name1);
            plyr1 = p2;
        }


    }
    else if(mode == 2)
    {
       cout<<"Argument ERROR!"<<endl;
       cout<<"\tNumber of players is not enough"<<endl;

    }
}
Game::Game(int mode, int rounds,string name1,string name2)
{
    this->mode = mode;
    this->rounds = rounds;
    scr_plyr1=0;
    scr_plyr2=0;
    if(mode == 0)
    {
       cout<<"Argument ERROR!"<<endl;
       cout<<"\tMODE IS NOT VALID"<<endl;
       cout<<"\tHUMAN PLAYER IS PRESENT"<<endl;
    }
    else if(mode == 1)
    {
        cout<<"Argument ERROR!"<<endl;
        cout<<"\tNumber of players exceeded"<<endl;

    }
    else if(mode == 2)
    {
       HumanPlayer p1;
       HumanPlayer p2;

       plyr1 = p1;
       plyr1.setName(name1);
       plyr2 = p2;
       plyr2.setName(name2);

    }
    srand(time(NULL));
}
void Game::play()
{
    for(int i = 0 ; i < rounds ; i ++)
    {
        plyr1.setHand();
        plyr2.setHand();
        Outcome result = plyr1.versus(plyr2);
        if(result == WIN)
           scr_plyr1++;
        else if(result == LOSE)
            scr_plyr2++;

    }

    if(scr_plyr1>scr_plyr2)
        winner = plyr1.getName();
    else if(scr_plyr1<scr_plyr2)
        winner = plyr2.getName();
    else
        winner = "Draw";

}
void Game::printPlayers()
{
    cout<<"PLAYERS: "<<plyr1.getName()<<" VS "<<plyr2.getName()<<endl;
}
void Game::printFinalScore()
{
    cout<<"FINAL SCORE:"<<endl;
    cout<<"\t"<<plyr1.getName()<<": "<<scr_plyr1<<endl;
    cout<<"\t"<<plyr2.getName()<<": "<<scr_plyr2<<endl;


}
void Game::printWinner()
{
    cout<<"WINNER: "<<winner<<endl;
}
string Game::getWinner()
{
    return winner;
}
int Game::getScoreP1()
{
    return scr_plyr1;
}
int Game::getScoreP2()
{
    return scr_plyr2;
}
