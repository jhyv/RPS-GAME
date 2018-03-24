#ifndef ROCK_H
#define ROCK_H
#include "Hand.h"

class Rock:public Hand
{
    public:
        Rock();
        string getName();
        Outcome compare(Hand&);
        ~Rock();
};

#endif // ROCK_H
