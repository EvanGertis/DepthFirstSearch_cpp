#include "pch.h"
#include "DFS.h"


void DFS::operator()()
{

	for (auto v : vertexList) {
		// visit nodes only once
		if (!v->isVisited()) {
			dfs(v.get());
		}
	}
}

void DFS::dfs(Vertex * vertex) {
	std::cout << vertex->getName() << std::endl;

	for (Vertex *v : vertex->getNeighbourList()) {
		if (!v->isVisited()) {
			v->setVisited(true);
			dfs(v);
		}
	}
}

DFS::DFS(std::vector<std::shared_ptr<Vertex>> const &_vertexList)
	: vertexList(_vertexList)
{
}

void DFS::printVertices() const
{
}

DFS::~DFS()
{
}
