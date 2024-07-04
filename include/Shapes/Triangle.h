#pragma once

#include "Line.h"

class Triangle
{
public:
    sf::VertexArray triangle;
    sf::Vector3f points[3];

    std::vector<Line> outline;

    bool fill;
    bool useOutline;

    Triangle(const float x1, const float y1, const float z1,
             const float x2, const float y2, const float z2,
             const float x3, const float y3, const float z3,
             const bool fill = true, const bool use_outline = false,
             const sf::Color fill_color = sf::Color::White,
             const sf::Color outline_color = sf::Color::White);

    ~Triangle();

    void render(sf::RenderTarget &target);
};