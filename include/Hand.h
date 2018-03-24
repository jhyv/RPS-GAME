#ifndef HAND_H
#define HAND_H
#include<string>
#include<iostream>
#include<ctype.h>
using namespace std;


enum Outcome { WIN, LOSE, DRAW };
class Hand
{
    public:
        Hand();
        char getType();
        virtual string getName();
        virtual Outcome compare(Hand&);
        virtual ~Hand();
    protected:
        char type;
        string name;
};

#endif // HAND_H
