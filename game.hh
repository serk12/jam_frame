#ifndef GAME_HH
#define GAME_HH

#include "gameobject.hh"
#include "screen.hh"
//ASDFASFAS
//qwerertqwe
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

#endif // GAME_HH
