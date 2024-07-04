#include "stdafx.h"
#include "Mesh.h"

Mesh::Mesh(std::vector<Triangle> triangles) : triangles(triangles) {}

Mesh::Mesh(const std::string obj_file_path)
{
}

Mesh::~Mesh()
{
}
