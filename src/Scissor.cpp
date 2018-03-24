#include "Scissor.h"

Scissor::Scissor()
{
    this->type = 's';
}
string Scissor::getName()
{
    return "SCISSOR";
}
Outcome Scissor::compare(Hand& otherHand)
{
    Outcome result;
    if(otherHand.getName() == "ROCK")
        result = LOSE;
    else if(otherHand.getName() == "PAPER")
        result = WIN;
    else
        result = DRAW;

    return result;
}
Scissor::~Scissor()
{

}
