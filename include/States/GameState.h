#pragma once

#include "State.h"
#include "Triangle.h"

class GameState : public State
{
private:
    /* ATTRIBUTES */

    Triangle *tri;

    /* INITIALIZERS */

public:
    /* CONSTRUCTOR AND DESTRUCTOR */

    GameState();

    ~GameState();

    /* METHODS */

    void update(const float &dt);

    void render(sf::RenderTarget &target);
};