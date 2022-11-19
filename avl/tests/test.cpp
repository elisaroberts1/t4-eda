#include "trees/avl.hpp"
#include "trees/adtgraph.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>


void dijkstra(const std::string grafo, int v_inicial, int v_final){

}

std::string read(const std::string filename){
	std::ifstream f_in(filename);
	char symbol = '\0';
	std::string leyendo;
	int cant_v = 0;
	if (f_in.is_open()){
		while (f_in.get(symbol)){
			std::cout<<symbol;
			leyendo+=symbol;
			
		}
		std::cout<<std::endl;
	}
	else{
		std::cout<< "Error al leer " << filename << std::endl;
	}
	f_in.close();
	std::cout << "se leyo" << std::endl;
	return leyendo;
}

int main(int nargas, char** vargs){
	trees::AVL avl;
	std::string doc = "migrafo.grafo";
	std::string filename(doc);
	std::string texto=read(filename);
	std::cout << texto[4] << std::endl;
	/*avl.insert(16);
	avl.insert(32);
	avl.insert(45);
	avl.insert(8);
	avl.insert(10);
	avl.insert(15);

	avl.traverse();*/
	return 0;
}
