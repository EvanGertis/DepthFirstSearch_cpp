// DepthFirstSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "DFS.h"

int main()
{
	std::vector<std::shared_ptr<Vertex>> graph;

	graph.resize(8);

	graph[0] = std::make_shared<Vertex>("A");
	graph[1] = std::make_shared<Vertex>("B");
	graph[2] = std::make_shared<Vertex>("C");
	graph[3] = std::make_shared<Vertex>("D");
	graph[4] = std::make_shared<Vertex>("E");
	graph[5] = std::make_shared<Vertex>("F");
	graph[6] = std::make_shared<Vertex>("G");
	graph[7] = std::make_shared<Vertex>("H");

	graph[0]->addNeighbour(graph[1].get());
	graph[0]->addNeighbour(graph[5].get());
	graph[0]->addNeighbour(graph[6].get());
	graph[6]->addNeighbour(graph[7].get());
	graph[1]->addNeighbour(graph[2].get());
	graph[1]->addNeighbour(graph[3].get());
	graph[3]->addNeighbour(graph[4].get());

	DFS depthFirstSearch(graph);
	depthFirstSearch();
}
