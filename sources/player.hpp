#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "card.hpp"

namespace ariel {
    class Player {
        public:
        std :: string name;        
        Player();
        Player(const std::string& name){
        };

        int static stacksize() {return 0;};
        int static cardesTaken(){return 0;};
    };
}

#endif 