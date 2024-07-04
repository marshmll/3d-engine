#include "stdafx.h"
#include "Triangle.h"

Triangle::Triangle(const float x1, const float y1, const float z1,
                   const float x2, const float y2, const float z2,
                   const float x3, const float y3, const float z3,
                   const bool fill, const bool use_outline,
                   const sf::Color fill_color, const sf::Color outline_color)

    : fill(fill), useOutline(use_outline)
{
    points[0] = sf::Vector3f(x1, y1, z1);
    points[1] = sf::Vector3f(x2, y2, z2);
    points[2] = sf::Vector3f(x3, y3, z3);

    triangle = sf::VertexArray(sf::PrimitiveType::Triangles, 3);

    triangle[0].position = sf::Vector2f(points[0].x, points[0].y);
    triangle[0].color = fill_color;

    triangle[1].position = sf::Vector2f(points[1].x, points[1].y);
    triangle[1].color = fill_color;

    triangle[2].position = sf::Vector2f(points[2].x, points[2].y);
    triangle[2].color = fill_color;

    outline.push_back(Line(points[0].x, points[0].y, points[0].z,
                           points[1].x, points[1].y, points[1].z,
                           outline_color));

    outline.push_back(Line(points[1].x, points[1].y, points[1].z,
                           points[2].x, points[2].y, points[2].z,
                           outline_color));

    outline.push_back(Line(points[2].x, points[2].y, points[2].z,
                           points[0].x, points[0].y, points[0].z,
                           outline_color));
}

Triangle::~Triangle()
{
}

void Triangle::render(sf::RenderTarget &target)
{
    if (fill)
    {
        target.draw(triangle);
    }
    if (useOutline)
    {
        for (auto line : outline)
            line.render(target);
    }
}
