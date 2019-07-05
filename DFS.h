#include "Vertex.h"
#include <deque>
#include <memory>
#include <iostream>
#pragma once

class DFS
{
	std::vector<std::shared_ptr<Vertex>> vertexList;
public:
	DFS(std::vector<std::shared_ptr<Vertex>> const &_vertexList);
	void printVertices() const;
	~DFS();

	void operator()();
	void dfs(Vertex * vertex);
};

