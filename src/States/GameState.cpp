#include "stdafx.h"
#include "GameState.h"

/* INITIALIZERS */

/* CONSTRUCTOR AND DESTRUCTOR */

GameState::GameState()
    : State()
{
    tri = new Triangle(100.f, 100.f, 0.f,
                       100.f, 50.f, 0.f,
                       150.f, 50.f, 0.f,
                       true, true,
                       sf::Color::White, sf::Color::Red);
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
