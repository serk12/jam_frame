#ifndef GAMEOBJECT_HH
#define GAMEOBJECT_HH

#include "utils.hh"

class GameObject : public sf::Drawable
{
public:
    virtual void event(sf::Event event) {};
    virtual void update(sf::Time deltatime) {};
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const {};
};


#endif // GAMEOBJECT_H
