#pragma once

#include "State.h"
#include "Triangle.h"
#include "Matrices.h"

class GameState : public State
{
private:
    /* ATTRIBUTES */

    Triangle *tri;

    std::vector<std::vector<float>> projectionMatrix;

    /* INITIALIZERS */

public:
    /* CONSTRUCTOR AND DESTRUCTOR */

    GameState();

    ~GameState();

    /* METHODS */

    void update(const float &dt);

    void render(sf::RenderTarget &target);
};