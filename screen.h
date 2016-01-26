#ifndef SCREEN_H
#define SCREEN_H

#include "gameobject.h"
#include "player.h"
#include "level.h"

class Screen : public GameObject
{
private:
    Player player;
    Level level;

public:
    Screen();
    ~Screen();

    void event(sf::Event event) final;
    void update(sf::Time deltatime) final;
    void draw(sf::RenderTarget& target, sf::RenderStates states) const final;
};


#endif // SCREEN_H
