#include "stdafx.h"
#include "GameState.h"

/* INITIALIZERS */

/* CONSTRUCTOR AND DESTRUCTOR */

GameState::GameState()
    : State()
{
    projectionMatrix = createProjectionMatrix(900.f / 600.f, 90.f, 0.1f, 1000.f);
}

GameState::~GameState()
{
    delete tri;
}

/* METHODS */

void GameState::update(const float &dt)
{
}

void GameState::render(sf::RenderTarget &target)
{
    tri->render(target);
}
