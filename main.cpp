#include <iostream>
#include <string.h> 

using namespace std;


void print1 (int ilg){
		for (int i = 0; i < ilg; i++){
		cout << "*";
	}
	cout << endl;
}

void print2 (int ilg){
	for (int i = 0; i < ilg; i++){
		if (i == 0 || i == ilg-1) cout << "*";
		else cout << " ";
	}
	cout << endl;
}

void print3 (string X[], int ilg){
	cout << "* ";
	
	for (int i = 0; i < 2; i++) 
    cout << X[i];
    
    cout << " *" << endl;
}

int main(){
	string X[2]; //pasisveikinimas, vardas
	string var;  //vardas
	string s;   //pasisveikinimas
	char l;
	int eil; 
	
	do {
		cout << "Koks remelio plotis? (4 ir daugiau eiluciu)";
		cin >> eil;
	} while (eil < 3);
	
	cout << "Kokia vartotojo lytis (m (mergina) ar v (vaikinas))?" << endl;
	cin >> l;
	
	cout << "Koks vartotojo vardas?" << endl; 
	cin >> var;
	int n = var.length();
	
	if (l == 'm' || l == 'M') s = "Sveika, ";
	if (l == 'v' || l == 'V' ) s = "Sveikas, ";
	
	int m = s.length();
	
	X[0] = s;
	X[1] = var;
  
	int ilg = n+m+4;
	
	//spausdinimas
    print1(ilg);  //pirma
    if (eil > 3){
	for (int i = 0; i < eil/2; i++){
	print2(ilg);  }//antra
	}
	print3(X, ilg);  //trecia
	if (eil > 3){
	for (int i = 0; i < eil-eil/2; i++){
	print2(ilg);  }}
	print1(ilg);  //penkta
	
	
}
