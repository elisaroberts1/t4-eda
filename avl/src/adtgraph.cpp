#include "trees/adtgraph.hpp"
#include "lLists/node.hpp"
#include "lLists/linkedList.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace trees {
grafo::grafo(int vertices, int aristas){
  for (int i=0;i<vertices;i++){
    v_vertices.push_back(i);
  }
  this->vertices=vertices;
}
}