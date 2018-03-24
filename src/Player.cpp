#include "Player.h"

Player::Player()
{

}
Player::~Player()
{

}
void Player::setName(string name)
{
    this->name = name;
}
Hand Player:: getHand()
{
    return hand;
}
string Player::getName()
{
    return name;
}
void Player::setHand()
{
    int num =(rand()%3)+1;
    if(num == 1)
    {
        Rock rock;
        this->hand=rock;
    }
    else if (num == 2)
    {
        Paper paper;
        this->hand = paper;
    }
    else if(num == 3)
    {
        Scissor scissor;
        this->hand = scissor;
    }
}
Outcome Player::versus(Player& OtherPlayer)
{
    return this->hand.compare(OtherPlayer.hand);
}

