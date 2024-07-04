#pragma once

static std::vector<std::vector<float>> createProjectionMatrix(const float aspect_ratio, const float fov_angle,
                                                              const float z_far, const float z_near);

static sf::Vector3f multiplyVectorByMatrix(sf::Vector3f &in_vec, std::vector<std::vector<float>> &matrix);