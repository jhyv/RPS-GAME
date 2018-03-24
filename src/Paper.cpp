#include "Paper.h"

Paper::Paper()
{
    this->type = 'p';
}
string Paper::getName()
{
    return "PAPER";
}
Outcome Paper::compare(Hand& otherHand)
{
    Outcome result;
    if(otherHand.getName() == "SCISSOR")
        result = LOSE;
    else if(otherHand.getName() == "ROCK")
        result = WIN;
    else
        result = DRAW;

    return result;
}
Paper::~Paper()
{

}
