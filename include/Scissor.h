#ifndef SCISSOR_H
#define SCISSOR_H
#include "Hand.h"

class Scissor:public Hand
{
    public:
        Scissor();
        string getName();
        Outcome compare(Hand&);
        ~Scissor();
};

#endif // SCISSOR_H
