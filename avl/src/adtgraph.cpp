#include "trees/adtgraph.hpp"
#include "lLists/node.hpp"
#include "lLists/linkedList.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using namespace trees;
using namespace eda;

/*grafo::grafo(vector<string> l, int cant_v, LinkedList Aa[], LinkedList Dd[]){
    LinkedList A[cant_v];
	LinkedList D[cant_v];
    vector<string> lin = l;
	for(int i = 1; i < lin.size(); i++){
		int j=0;
		string v_in;
		int v_ini;
		string v_f;
		int v_fi;
		string d;
		int di;
		while(lin[i][j] != '-'){
			v_in += lin[i][j];
			j++;
		}
		j++;
		while(l[i][j] != '-'){
			v_f += l[i][j];
			j++;
		}
		j++;
		while(l[i][j] != '\0'){
			d += l[i][j];
			j++;
		}
		v_ini = stoi(v_in);
		v_fi = stoi(v_f);
		di = stoi(d);
		A[v_ini].insertFirst(v_fi);
		D[v_ini].insertFirst(di);
	}
}


void grafo::aal(vector<string> l, int cant){
    LinkedList A[cant];
    for(int i = 1; i < l.size(); i++){
		int j=0;
		string v_in;
		int v_ini;
		string v_f;
		int v_fi;
		string d;
		int di;
		while(l[i][j] != '-'){
			v_in += l[i][j];
			j++;
		}
		j++;
		while(l[i][j] != '-'){
			v_f += l[i][j];
			j++;
		}
		j++;
		while(l[i][j] != '\0'){
			d += l[i][j];
			j++;
		}
		v_ini = stoi(v_in);
		v_fi = stoi(v_f);
		di = stoi(d);
		A[v_ini].insertFirst(v_fi);
		D[v_ini].insertFirst(di);
	}
    return A;
}*/