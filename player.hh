#ifndef PLAYER_HH
#define PLAYER_HH

#include "actor.hh"

class Player : public Actor
{
private:

public:
    Player();
    ~Player();

    void event(sf::Event event) final;
    void update(sf::Time deltatime) final;
};

#endif // PLAYER_HH
