#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include "player.hpp"
#include "card.hpp"

namespace ariel {
    class Game {
        
    public:
        Game(Player& pl1, Player& pl2){
        };
        void playTurn(){};
        void playAll(){};
        void printLastTurn() {};
        void printWiner() {};
        void printLog() {};
        void printStats() {};
    };
}

#endif 