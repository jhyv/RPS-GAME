#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

#include "Game.h"
using namespace std;

int main(int argc, char* argv[])
{
    string file1,file2;

    if(argc == 3)
    {
        file1 = argv[1];
        file2 = argv[2];

        if(file1 != "games.txt")
        {
            cout<<"The first file is not valid"<<endl;
            return 0;
        }
        if(file2 != "result.txt")
        {
            cout<<"The second file is not valid"<<endl;
            return 0;
        }

         ifstream myfile;
         ofstream resultfile;
         int mode,round,ctr = 0;
         string name1,name2,line,winner;

         myfile.open(argv[1]);
         resultfile.open(argv[2]);

         if(resultfile.is_open())
            resultfile.clear();
         resultfile.close();

         if (myfile.is_open())
         {

             int spc = 0;
             int len;
             int scr1 = 0;
             int scr2 = 0;
            while (!myfile.eof())
            {

                getline(myfile,line);
                len = line.length();

                 for(int i = 0; i < len ; i++)
                 {
                     if(line[i] == ' ')
                        spc++;
                 }

                 if(spc == 1)
                 {
                    string arr[spc+1];
                    int i = 0;
                    stringstream ssin(line);
                    while (ssin.good() && i < spc+1)
                    {
                        ssin >> arr[i];
                        ++i;
                    }
                    mode = atoi( arr[0].c_str() );
                    round = atoi( arr[1].c_str() );

                    Game game(mode,round);
                    game.play();
                    winner = game.getWinner();
                    scr1 = game.getScoreP1();
                    scr2 = game.getScoreP2();
                 }
                 if(spc == 2)
                 {
                    string arr[spc+1];
                    int i = 0;
                    stringstream ssin(line);
                    while (ssin.good() && i < spc+1)
                    {
                        ssin >> arr[i];
                        ++i;
                    }
                    mode = atoi( arr[0].c_str() );
                    round = atoi( arr[1].c_str() );
                    name1 = arr[2];

                    Game game(mode,round,name1);
                    game.play();
                    winner = game.getWinner();
                    scr1 = game.getScoreP1();
                    scr2 = game.getScoreP2();

                 }
                 if(spc == 3)
                 {
                    string arr[spc+1];
                    int i = 0;
                    stringstream ssin(line);
                    while (ssin.good() && i < spc+1)
                    {
                        ssin >> arr[i];
                        ++i;
                    }
                    mode = atoi( arr[0].c_str() );
                    round = atoi( arr[1].c_str() );
                    name1 = arr[2];
                    name2 = arr[3];

                    Game game(mode,round,name1,name2);
                    game.play();
                    winner = game.getWinner();
                    scr1 = game.getScoreP1();
                    scr2 = game.getScoreP2();
                 }
                  spc = 0;
                  ctr++;

                 resultfile.open(argv[2],ios_base::app);
                 if(resultfile.is_open())
                 {
                     resultfile<<"Game "<<ctr<<": "<<scr1<<" "<<scr2<<" "<<winner<<endl;
                 }

                resultfile.close();
            }

             myfile.close();
            cout<<"GAME EXECUTED SUCCESSFULLY!"<<endl;
         }
         else
            cout<<"UNABLE TO OPEN FILE!"<<endl;

    }
    else if(argc == 2)
    {
        file1 = argv[1];
        if(file1 == "/?")
             cout<<"RockPaperScissorGame.exe : A Classic Rock Paper Scissor File-Based Game"<<endl;
        else if(file1 == "help" || file1 == "HELP")
        {
            cout<<"Enter your game modes and number of rounds in the file games.txt"<<endl;
            cout<<"Include the ff. text files in the prompt:"<<endl;
            cout<<"\tgames.txt"<<endl;
            cout<<"\tresult.txt"<<endl;
        }
        else
            cout<<"INSUFFICIENT ARGUMENTS"<<endl;


    }
    else
        cout<<"INSUFFICIENT ARGUMENTS"<<endl;



    return 0;
}
