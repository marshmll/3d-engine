#include "stdafx.h"
#include "Engine.h"

/* INITIALIZERS */

void Engine::initAttributes()
{

    vm = sf::VideoMode(900, 600);
}

void Engine::initWindow()
{
    window = new sf::RenderWindow(vm, "3D ENGINE",
                                  sf::Style::Titlebar | sf::Style::Close);
}

void Engine::initStates()
{
    states.push(new GameState());
}

/* CONSTRUCTOR AND DESTRUCTOR */

Engine::Engine()
{
    initAttributes();
    initWindow();
    initStates();
}

Engine::~Engine()
{
    delete window;

    while (!states.empty())
    {
        delete states.top();
        states.pop();
    }
}

/* METHODS */

void Engine::run()
{
    while (isRunning())
    {
        update();

        render();
    }
}

void Engine::update()
{
    pollEvents();

    if (!states.empty())
    {
        states.top()->update(dt);
    }
    else
    {
        stop();
    }
}

void Engine::render()
{
    window->clear();

    if (!states.empty())
    {
        states.top()->render(*window);
    }

    window->display();
}

void Engine::pollEvents()
{
    while (window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            stop();
    }
}

void Engine::stop()
{
    window->close();
}

/* ACCESSORS */

const bool Engine::isRunning() const
{
    return window->isOpen();
}
