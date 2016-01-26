#ifndef GAME_H
#define GAME_H

#include "gameobject.h"
#include "screen.h"

class Game : public GameObject
{
private:
    sf::RenderWindow window;
    sf::Clock clock;

    Screen* current_screen;

    void event_();
    void update_();
    void draw_();
public:
    Game();
    ~Game();
    void start();
};

#endif // GAME_H
