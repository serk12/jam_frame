#ifndef LEVEL_HH
#define LEVEL_HH

#include "gameobject.hh"

class Level : public GameObject
{
private:

public:
    Level();
    ~Level();

    void event(sf::Event event);
    void update(sf::Time deltatime);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif // LEVEL_H

