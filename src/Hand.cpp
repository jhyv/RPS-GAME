#include "Hand.h"

Hand::Hand()
{

}
char Hand::getType()
{
    return type;
}
string Hand::getName()
{
    return name;
}
Hand::~Hand()
{

}
Outcome Hand::compare(Hand& otherHand)
{
    Outcome result;
    if(type == 'r' && otherHand.type == 'r')
        result = DRAW;
    else if(type == 'r' && otherHand.type == 's')
        result = WIN;
    else if(type == 'r' && otherHand.type == 'p')
        result = LOSE;

    if(type == 'p' && otherHand.type == 'p')
        result = DRAW;
    else if(type == 'p' && otherHand.type == 'r')
        result = WIN;
    else if(type == 'p' && otherHand.type == 's')
        result = LOSE;

    if(type == 's' && otherHand.type == 's')
        result = DRAW;
    else if(type == 's' && otherHand.type == 'p')
        result = WIN;
    else if(type == 's' && otherHand.type == 'r')
        result = LOSE;

    return result;
}
