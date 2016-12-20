
#include <string>
#include <vector>

#include "Deck.hpp"
#include "House.hpp"
#include "Player.hpp"

#ifndef game_hpp
#define game_hpp

using namespace std;

class Game
{
public:
    Game(const vector<string>& names);

    ~Game();

    //plays the game of blackjack
    void Play();

private:
    Deck m_Deck;
    House m_House;
    vector<Player> m_Players;
};

#endif /* game_hpp */