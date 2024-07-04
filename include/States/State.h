#pragma once

class State
{
protected:
    /* ATTRIBUTES */

public:
    /* CONSTRUCTOR AND DESTRUCTOR */

    State();

    virtual ~State();

    /* METHODS */

    virtual void update(const float &dt) = 0;

    virtual void render(sf::RenderTarget &target) = 0;

    /* ACCESSORS */

    /* MODIFIERS */
};