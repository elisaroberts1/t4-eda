#include "trees/avl.hpp"
#include "trees/adtgraph.hpp"
#include "lLists/node.hpp"
#include "lLists/linkedList.hpp"
#include "lLists/queue.hpp"
#include "lLists/stack.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>
#include <vector>

using namespace eda;
using namespace trees;
using namespace std;

#include <iostream>
#include <stdlib.h>
#include <string.h>
class node {       // The class
  private:
    string nodeid;
    int val;  
    class node * ptr = nullptr;  
  public:
    node(int v, string y) { 
        val = v;
        nodeid = y;
        }
    int getVal(){
        return val;
    }
    string getNodeid(){
        return nodeid;
    }
    void set_nextNode(node *nodeptr){
        ptr = nodeptr;
    }
    node* get_Nodeptr(){
        return ptr;
    }

};


class min_Heap {      
    private:
        class node * primerNodo = nullptr;
    public:             
        void insert(node *nodo){
            bool listo = false;
            node* tmp = primerNodo;
            node * tmp_dsp = nullptr;

            if (tmp == nullptr){ // caso en que no haya nada guardado en heap
                listo = true;
                primerNodo = nodo;
                
            }
            else if( nodo->getVal()<= tmp->getVal()){
                nodo->set_nextNode(tmp);
                primerNodo = nodo;
                listo = true;
            }
            else{
                node* tmp_dps = tmp->get_Nodeptr();
            }
            while (!listo) {
                if (nodo->getVal() <= tmp_dsp->getVal()){
                    tmp->set_nextNode(nodo);
                    nodo->set_nextNode(tmp_dsp);
                    listo = true;
                }   
                else {
                    if ( tmp_dsp == nullptr){
                        tmp->set_nextNode(nodo);
                        listo = true;
                    }
                    else{
                        tmp = tmp_dsp;
                        tmp_dsp = tmp_dsp->get_Nodeptr();
                    }
                }
            }
        }
        node* top(){
            return primerNodo;
        }
};


/*void dijkstra(LinkedList a, LinkedList d, int v_final, int v_inicial, int cant){
	int A[cant];
	int D[cant];
	Stack H;
	for(int i=0; i < cant; i++){
		D[i] = 10000;
		A[i] = v_inicial;
	}
	D[v_inicial] = 0;
	H.push(v_inicial);
	int j = 1;
	while(!H.isEmpty()){
		int q = H.top()->getData();
		H.pop();
		bool a[v_inicial]->find(v_final){
			return found = true;
		}
		int u[a[v_inicial].size()];
		int o[d[v_inicial].size()];
		for(int  i=0; i < a[v_inicial].size(); i++){
			u[i] = a[v_inicial].find_val_pos(i);
		}
		int y=0;
		while(y<a[v_inicial].size()){
			cout << u[y] << endl;
			y++;
		}
		
	}
}*/


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
		cout << "La lista enlazada de vertices adyacentes al vertice " << i << " corresponde a: ";
		A[i].print();
		cout << endl << "Las distancias correspondientes a cada una de esas aristas son: ";
		D[i].print();
		cout << endl << endl;
	}

	int p = A[3].pos(1);
	Node* f = D[3].find_val_pos(p);

    node ejemplo(3,"1");
    node*ptrej;
    node ejemplo2(4,"3");
    node ejemplo3(1,"4");
    ptrej = &ejemplo2;

    cout<< "El nodoid es: " << ejemplo.getNodeid()<< endl;
    ejemplo.set_nextNode(ptrej);
    cout << "Ejemplo 1 apunta al nodo: " << ejemplo.get_Nodeptr()->getNodeid() << endl;
    
    min_Heap heap;
    heap.insert(ptrej);
    node * ptr2 = &ejemplo;
	heap.insert(ptr2);
    node * ptr3 = &ejemplo3;
    heap.insert(ptr3);
    cout<< "El top es: "<< heap.top()->getVal() << endl;

	return 0;
}
