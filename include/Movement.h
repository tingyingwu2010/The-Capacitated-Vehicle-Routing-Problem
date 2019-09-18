#ifndef HEURISTICS_MOVEMENT_MOVEMENT_H
#define HEURISTICS_MOVEMENT_MOVEMENT_H

#include "../include/Graph.h"
#include <vector>

class Movement {
protected:
    Graph<int>& m_graph;
public:
    Movement(Graph<int>&);
    virtual ~Movement();

    virtual int getMovement(std::vector<int>&) = 0;
};

#endif // define HEURISTICS_MOVEMENT_MOVEMENT_H