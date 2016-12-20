#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

#include "card.hpp"
#include "hand.hpp"

using namespace std;

#ifndef genericPlayer_hpp
#define genericPlayer_hpp

class GenericPlayer : public Hand
{
    friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);

    public:
        GenericPlayer(const string& name = "");

        virtual ~GenericPlayer();

        //indicates whether or not generic player wants to keep hitting
        virtual bool IsHitting() const = 0;

        //returns whether generic player has busted - has a total greater than 21
        bool IsBusted() const;

        //announces that the generic player busts
        void Bust() const;

    protected:
        string m_Name;
};

#endif /* genericPlayer_hpp */