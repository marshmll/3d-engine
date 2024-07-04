#pragma once

class Line
{
public:
    sf::VertexArray line;
    sf::Vector3f points[2];

    Line(const float start_x, const float start_y, const float start_z,
         const float end_x, const float end_y, const float end_z,
         const sf::Color color = sf::Color::White);

    ~Line();

    void render(sf::RenderTarget &target);
};