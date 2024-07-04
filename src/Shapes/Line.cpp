#include "stdafx.h"
#include "Line.h"

Line::Line(const float start_x, const float start_y, const float start_z,
           const float end_x, const float end_y, const float end_z,
           const sf::Color color)
{

    points[0] = sf::Vector3f(start_x, start_y, start_z);
    points[1] = sf::Vector3f(end_x, end_y, end_z);

    line = sf::VertexArray(sf::PrimitiveType::Lines, 2);

    line[0].position = sf::Vector2f(points[0].x, points[0].y);
    line[0].color = color;

    line[1].position = sf::Vector2f(points[1].x, points[1].y);
    line[1].color = color;
}

Line::~Line()
{
}

void Line::render(sf::RenderTarget &target)
{
    target.draw(line);
}
