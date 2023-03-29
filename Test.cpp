#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("playTurn")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1,p2);
    int temp = p1.stacksize();
    int temp2 = p2.stacksize();
    game.playTurn();
    CHECK(p1.stacksize() < temp);
    CHECK(p2.stacksize() < temp2);

    
}

TEST_CASE("Init")
{
    Player p1("Alic");
    Player p2("Bob"); 
    Game game(p1,p2);
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
    CHECK(p1.name == "Alice");
    CHECK(p2.name == "Bob");


}
TEST_CASE("playAll"){
    Player p1("Alic");
    Player p2("Bob"); 

    Game game(p1,p2);
    game.playAll();
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK(p1.cardesTaken ()< 27);
    CHECK(p2.cardesTaken() < 27);
}
TEST_CASE("Exeptions")
{
    Player p1("Alic");
    Player p2("Bob"); 

    Game game(p1,p2);
    CHECK_THROWS(game.playAll());
    CHECK_THROWS(game.playTurn());
    CHECK_THROWS(game.printLastTurn());
    CHECK_THROWS(game.printLog());
    CHECK_THROWS(game.printStats());
    CHECK_THROWS(game.printWiner());
    CHECK_THROWS(p1.cardesTaken());
    CHECK_THROWS(p1.stacksize());


}