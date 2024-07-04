#include "stdafx.h"
#include "GameState.h"

/* INITIALIZERS */

/* CONSTRUCTOR AND DESTRUCTOR */

GameState::GameState()
    : State()
{
}

GameState::~GameState()
{
}

/* METHODS */

void GameState::update(const float &dt)
{
}

void GameState::render(sf::RenderTarget &target)
{
    target.draw(sf::RectangleShape(sf::Vector2f(100.f, 100.f)));
}
