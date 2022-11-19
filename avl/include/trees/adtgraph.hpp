#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace trees {

class grafo{
public:
	int vertices;
	int aristas;
	vector <int> v_vertices;
	vector <string> v_aristas;
public:
	grafo(){
	}
	grafo(int, int){}; //nº de nodos que se tienen, nº de aristas
	void add_arista(int,int);
};
}

