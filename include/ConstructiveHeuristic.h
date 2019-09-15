#include <vector>
#include "Graph.h"

class ConstructiveHeuristic {
private:
    Graph<int> m_graph;

public:
    ConstructiveHeuristic(Graph<int> graph);
    // int getDistance(std::vector<int> route);
    bool checkNumberRoutes(std::vector<int> route, int vehicles);
    std::vector<int> buildRoutesByDemand(int capacity, int dimension);
    std::vector<int> nearestNeighbor(int capacity, int dimension, int vehicles);
};