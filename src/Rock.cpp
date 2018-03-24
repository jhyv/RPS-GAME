#include "Rock.h"

Rock::Rock()
{
    this->type = 'r';
}
string Rock::getName()
{
    return "ROCK";
}
Outcome Rock::compare(Hand& otherHand)
{
    Outcome result;
    if(otherHand.getName() == "PAPER")
        result = LOSE;
    else if(otherHand.getName() == "SCISSOR")
        result = WIN;
    else
        result = DRAW;

    return result;
}
Rock::~Rock()
{

}
