#pragma once

#include "Triangle.h"

class Mesh
{
public:

    std::vector<Triangle> triangles;

    Mesh(std::vector<Triangle> triangles);

    Mesh(const std::string obj_file_path);
    
    ~Mesh();
};