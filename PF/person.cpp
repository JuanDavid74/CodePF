

#include <iostream>
using namespace std;
#include "person.h"
#include <fstream>
#include <locale>
#include <string.h>
#include <cstdlib>

Person:: Person(){}; 

Person::~Person(){}; 

string Person::getName(){

cout<<"Escribe un nickname para almacenar tu puntaje: "<<endl; 
getline(cin>> ws, name);              
names.push_back(name);      
return ""; 
}

double Person::getScore(int puntaje){         
score.push_back(puntaje);       
return 0;
}

/*void Person :: almacenarArch(){

for(int j =0; j < score.size(); j++){
        int notes = score.at(j);
        //cout<<"Nombre: "<<names.at(j)<<" Score: "<<score.at(j)<<"\n";

        string toNote = to_string(notes);
        string ultraS = "Nombre: "+names.at(j)+"   Score: "+toNote;
        namesAndScore.push_back(ultraS);

}

fstream scoreT("score.txt", ios::in | ios::out | ios::app);
	if (scoreT){

		for (int i = 0; i < score.size(); i++){
            
			scoreT <<i+1<<". Nombre: "<<names.at(i)<<"  Score: "<<score.at(i) <<endl;
		}
	}else{
		cout << "Error al escribir en el archivo" << endl;
	}
	scoreT.close();

}*/

void Person :: almacenarArch1(){

fstream scoreT("scoreTem.txt", ios::in | ios::out | ios::app);
	if (scoreT){

		for (int i = 0; i < score.size(); i++){
 
			scoreT <<score.at(i) <<endl;
		}
	}else{
		cout << "Error al escribir en el archivo" << endl;
	}
	scoreT.close();

}

int Person :: leerArch1(){
ifstream scoreT("scoreTem.txt");
	if (scoreT)
	{
		string linea;
		while (getline(scoreT, linea))
		{

			nuevosScore.push_back( atoi(linea.c_str()));
			
int aux,i;
	
	for(i=0;i<nuevosScore.size();i++){
		for(int j=0;j<nuevosScore.size()-1;j++){
			if(nuevosScore[j] > nuevosScore[j+1]){
				aux = nuevosScore[j];
				nuevosScore[j] = nuevosScore[j+1];
				nuevosScore[j+1] = aux;
			}
		}
	}
		}
		scoreT.close();
	}
return 0;
}


void Person :: almacenarArch1L(){

fstream scoreL("score.txt", ios::in | ios::out | ios::app);
	if (scoreL){

		for (int i = 0; i < nuevosScore.size(); i++){
 
			scoreL <<nuevosScore.at(i) <<endl;
		}
	}else{
		cout << "Error al escribir en el archivo" << endl;
	}
	scoreL.close();

} 


/*cout<<"\nNumeros de forma Descendente: "<<endl;
	for(int i=nums.size()-1;i>=0;i--){
		cout<<nums[i]<<" ";
	}*/

//-----------------------------------------------------------------
