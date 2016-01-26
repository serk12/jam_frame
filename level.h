#ifndef LEVEL_H
#define LEVEL_H

#include "gameobject.h"

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

