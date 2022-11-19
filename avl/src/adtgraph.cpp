#include "trees/adtgraph.hpp"
#include <iostream>
#include <vector>
#include <string>

namespace trees {
grafo::grafo(int vertices, int aristas){
  for (int i=0;i<vertices;i++){
    v_vertices.push_back(i);
  }
  this->vertices=vertices;
}
}