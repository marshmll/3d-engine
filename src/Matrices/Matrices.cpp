#include "stdafx.h"
#include "Matrices.h"

std::vector<std::vector<float>> createProjectionMatrix(const float aspect_ratio, const float fov_angle,
                                                       const float z_far, const float z_near)
{
    float a = aspect_ratio;
    float f = atanf(fov_angle * .5f / 180.f * 3.14159f);
    float q = z_far / (z_far - z_near);

    std::vector<std::vector<float>> proj_mat = {
        {a * f, 0, 0, 0},
        {0, f, 0, 0},
        {0, 0, q, 1},
        {0, 0, -z_near * q, 0},
    };

    return proj_mat;
}

sf::Vector3f multiplyVectorByMatrix(sf::Vector3f &in_vec, std::vector<std::vector<float>> &matrix)
{
    sf::Vector3f out_vec;
    float w;

    out_vec.x = in_vec.x * matrix[0][0] + in_vec.y * matrix[1][0] + in_vec.x * matrix[2][0] + matrix[3][0];
    out_vec.y = in_vec.x * matrix[0][1] + in_vec.y * matrix[1][1] + in_vec.x * matrix[2][1] + matrix[3][1];
    out_vec.z = in_vec.x * matrix[0][2] + in_vec.y * matrix[1][2] + in_vec.x * matrix[2][2] + matrix[3][2];
    w = in_vec.x * matrix[0][3] + in_vec.y * matrix[1][3] + in_vec.x * matrix[2][3] + matrix[3][3];

    if (w != 0.f)
        out_vec /= w;

    return out_vec;
}
