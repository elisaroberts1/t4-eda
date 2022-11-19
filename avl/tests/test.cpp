#include "trees/avl.hpp"
#include "trees/adtgraph.hpp"
#include "lLists/node.hpp"
#include "lLists/linkedList.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>
#include <vector>

using namespace eda;
using namespace trees;
using namespace std;

void dijkstra(const std::string grafo, int v_inicial, int v_final){

}

int main(int nargas, char** vargs){
	AVL avl;
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
	int n = lineas.size() - 1;
	//grafo(lineas, cant_v);

	LinkedList A[cant_v];
	LinkedList D[cant_v];
	for(int i = 1; i < lineas.size(); i++){
		int j=0;
		string v_in;
		int v_ini;
		string v_f;
		int v_fi;
		string d;
		int di;
		while(lineas[i][j] != '-'){
			v_in += lineas[i][j];
			j++;
		}
		j++;
		while(lineas[i][j] != '-'){
			v_f += lineas[i][j];
			j++;
		}
		j++;
		while(lineas[i][j] != '\0'){
			d += lineas[i][j];
			j++;
		}
		v_ini = stoi(v_in);
		v_fi = stoi(v_f);
		di = stoi(d);
		A[v_ini].insertFirst(v_fi);
		D[v_ini].insertFirst(di);
	}
	for(int i=0; i < cant_v; i++){
		A[i].print();
		D[i].print();
		cout << endl;
	}
	int p = A[3].pos(0);
	Node* f = D[3].find_val_pos(p);
	cout << "En la posición " << p+1 << " se encuentra el valor: " << f->getData() << endl;
	cout << f->getData() << endl;
	A[0].print();
	return 0;
}
