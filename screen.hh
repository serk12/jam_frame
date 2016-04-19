#ifndef SCREEN_HH
#define SCREEN_HH

#include "gameobject.hh"
#include "player.hh"
#include "level.hh"

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


#endif // SCREEN_HH
