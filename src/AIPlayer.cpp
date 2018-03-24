#include "AIPlayer.h"

AIPlayer::AIPlayer()
{
    static int AI_ctr=0;
    AI_ctr++;
    if(AI_ctr == 1)
    {
        name = "AI-1";
    }
    else if(AI_ctr == 2)
    {
        name = "AI-2";
        AI_ctr = 0;
    }
}
