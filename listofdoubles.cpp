#include <iostream>
using namespace std;

int main(){
	int n;          cin >> n;     
	double notas[n];
	for(int i = 0; i < n ; ++i){
		 cin >> notas[i];
	}
	int si=sizeof(notas)/sizeof(notas[0]);
	double maxi=notas[0],mini=notas[0];	
for(int i = 0; i < si; ++i){            
if(notas[i]< mini){
	mini = notas[i];
	
}
if(notas[i]> maxi){
	maxi=notas[i];
}                     	
}
double prom=0.0;
for(int i = 0; i < si; ++i){
	prom += notas[i];
}
prom /= (double)si;
cout << "promedio :"<<prom << endl;
cout << "minimo :"<<mini << endl;
cout << "maximo :"<<maxi << endl;
cout << "mediana :"<<notas[si/2] << endl;

       
}