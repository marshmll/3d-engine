#pragma once

#include "GameState.h"

class Engine
{
private:
    /* ATTRIBUTES */

    sf::RenderWindow *window;
    sf::VideoMode vm;
    sf::Event event;

    std::stack<State *> states;

    sf::Clock dtTimer;
    float dt; // Time elapsed to render a frame.

    /* INITIALIZERS */

    void initAttributes();

    void initWindow();

    void initStates();

public:
    /* CONSTRUCTOR AND DESTRUCTOR */

    Engine();

    ~Engine();

    /* METHODS */

    void run();

    void update();

    void render();

    void updateDt();

    void pollEvents();

    void stop();

    /* ACCESSORS */

    const bool isRunning() const;
};