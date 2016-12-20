// Player.hpp
//
// Player class

#include <string>

#include "GenericPlayer.hpp"

#ifndef player_hpp
#define player_hpp

class Player : public GenericPlayer {

    private:
        int bank;
        int bet;

    public:
        Player(const string& name = "");

        virtual ~Player();

        // returns whether or not the player wants another hit
        virtual bool IsHitting() const;

        // announces that the player wins
        void Win() const;

        // announces that the player loses
        void Lose() const;

        // announces that the player pushes
        void Push() const;
};

#endif /* player_hpp */