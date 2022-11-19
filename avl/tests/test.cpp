#include "trees/avl.hpp"
#include "trees/adtgraph.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>
#include <vector>

void dijkstra(const std::string grafo, int v_inicial, int v_final){

}

std::string read(const std::string filename, vector<string> lineas){
	std::ifstream f_in(filename);
	char symbol = '\0';
	std::string leyendo;
	std::string linea;
	int cant_v = 0;
	if (f_in.is_open()){
		while(getline(f_in, linea)){
			lineas.push_back(linea);
		}
		/*while (f_in.get(symbol)){
			std::cout<<symbol;
			leyendo+=symbol;
		}*/
		std::cout<<std::endl;
	}
	else{
		std::cout<< "Error al leer " << filename << std::endl;
	}
	std::cout << lineas[1] << std::endl;
	f_in.close();
	std::cout << "se leyo" << std::endl;
	return leyendo;
}

int main(int nargas, char** vargs){
	trees::AVL avl;
	std::string filename("migrafo.grafo");
	vector<string> lineas;
	std::ifstream f_in(filename);
	std::string linea;
	std::string cant_vert;
	int cant_v = 0;
	if (f_in.is_open()){
		while(getline(f_in, linea)){
			lineas.push_back(linea);
			if(linea[0]=='V' && linea[1]==':' && linea[2]==' '){
				for(int i=3; i < linea.length(); i++){
					cant_vert += linea[i];
				}
				cant_v = stoi(cant_vert);
			}
		}
	}
	else{
		std::cout<< "Error al leer " << filename << std::endl;
	}
	f_in.close();
	std::cout << cant_v << std::endl;
	int n = lineas.size() - 1;
	trees::grafo(cant_v, n);
	std::cout << lineas[1][0] << std::endl;
	return 0;
}
