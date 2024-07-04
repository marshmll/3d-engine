#pragma once

#include "State.h"

class GameState : public State
{
private:
    /* ATTRIBUTES */

    /* INITIALIZERS */

public:
    /* CONSTRUCTOR AND DESTRUCTOR */

    GameState();

    ~GameState();

    /* METHODS */

    void update(const float &dt);

    void render(sf::RenderTarget &target);
};