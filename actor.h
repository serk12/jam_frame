#ifndef ACTOR_H
#define ACTOR_H

#include "gameobject.h"

class Actor : public GameObject
{
protected:
    sf::Sprite sprite;
    sf::Texture adsada;

public:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const final
    {
        target.draw(sprite);
    }
};

#endif // ACTOR_H
