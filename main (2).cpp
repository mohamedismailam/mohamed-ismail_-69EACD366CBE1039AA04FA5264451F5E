#include <iostream>

class Player {
public:
    void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

class Batsman : public Player {
public:
    void play() {
        std::cout << "The batsman is batting." << std::endl;
    }
};

class Bowler : public Player {
public:
    void play() {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    Player genericPlayer;
    Batsman batsman;
    Bowler bowler;

    genericPlayer.play(); // Calls the play() method of the Player class
    batsman.play();       // Calls the play() method of the Batsman class
    bowler.play();        // Calls the play() method of the Bowler class

    return 0;
}
