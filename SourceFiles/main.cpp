#include <iostream>
#include <cassert>
#include "../Headers/CliqueFinder.h"

void toast(Graph g) {
    assert(!g.isEdge(10, 20, 1));//out of scope
    assert(!g.isEdge(1, 2, 1));// no feat
    assert(!g.isEdge(3, 0, 0));//wrong direction
    assert(g.isEdge(5, 1, 1));


}
int main() {
    srand((unsigned int) time(NULL));
    std::string filename;
    std::cin>>filename;
    Graph graph(filename);
    //toast(graph);
    CliqueFinder finder(graph, 20, 10, 0, 100);
    auto res = finder.start();
    std::cout << res.first.worth << std::endl;
    return 0;
}
