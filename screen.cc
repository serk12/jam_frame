#include "screen.h"

Screen::Screen()
{

}
Screen::~Screen()
{

}

void Screen::event(sf::Event event)
{
    player.event(event);
}

void Screen::update(sf::Time deltatime)
{

}

void Screen::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

}
