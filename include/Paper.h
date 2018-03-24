#ifndef PAPER_H
#define PAPER_H
#include "Hand.h"

class Paper:public Hand
{
    public:
        Paper();
        string getName();
        Outcome compare(Hand&);
        ~Paper();

};

#endif // PAPER_H
