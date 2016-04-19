#ifndef ACTOR_HH
#define ACTOR_HH

#include "gameobject.hh"

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

#endif // ACTOR_HH
