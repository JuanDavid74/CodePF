

#include <iostream>
using namespace std;
#include "person.h"
#include <fstream>
#include <locale>
#include <string.h>
#include <cstdlib>
#include <cstdio>

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

void Person :: almacenarArch1(){

fstream scoreT("scoreTem.txt", ios::in | ios::out | ios::app);
	if (scoreT){
		for (int i = 0; i < score.size(); i++){
			scoreT <<name+" "+to_string(score)<<"\n";
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
			string dato;
        	int num = 0;

        for(int i = 0 ; i < linea.length(); i++){
            if (linea[i] == ' '){
                names.push_back(dato);
                dato = "";
            }

                dato += linea[i];
            if(i == linea.length()-1){
                num = stoi(dato);
                score.push_back(num);
                dato="";
                num=0;
            }

        }
			
int aux,i;
string aux2;
	
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

remove("scoreTem.txt");
	
fstream scoreT("scoreTem.txt", ios::in | ios::out | ios::app);
	if (scoreT){

		for(int i=nuevosScore.size()-1;i>=0;i--){
			
		scoreT << nuevosScore.at(i) <<endl;
		}

		}else{
		cout << "Error al escribir en el archivo" << endl;
	}
	scoreT.close();

} 


/*cout<<"\nNumeros de forma Descendente: "<<endl;
	
	}*/

/*void Person :: almacenarArch1(string name, int score, bool decision= true){

fstream scoreT("scoreTem.txt", ios::in | ios::out | ios::app);
if(!decision){
ofstream scoreT("scoreTem.txt");
}
    if (scoreT){

            scoreT <<name+" "+to_string(score)<<"\n";
    }else{
        cout << "Error al escribir en el archivo" << endl;
    }
    scoreT.close();
}

void Person :: insertVect(vector <string> &names, vector <int> &score){

int i,j,actual;
string actualname;

for(i= 1; i<names.size(); i++){
    actual= score[i];
    actualname= names[i];

for(j = i; j > 0 & score[j-1] < actual;j--){
    score[j]=score[j-1];
    names[j]=names[j-1];
}
    score[j] = actual;
    names[j] = actualname;
}
}

void Person:: OrganiceScore(){
vector <string> namess; 
vector <int> scoress;
    ifstream scoreT("scoreTem.txt");
if (scoreT){
    string linea;
    while(getline(scoreT,linea)){
        string dato;
        int num = 0;

        for(int i = 0 ; i < linea.length(); i++){
            if (linea[i] == ' '){
                namess.push_back(dato);
                dato = "";
            }

                dato += linea[i];
            if(i == linea.length()-1){
                num = stoi(dato);
                scoress.push_back(num);
                dato="";
                num=0;
            }

        }
    }
}
else{
    cout << "Error al leer el archivo"<<endl;
    }
    scoreT.close();
    insertVect(namess,scoress);

for(int i = 0; i< namess.size(); i++){
    if(i==0){
    almacenarArch1(namess.at(i), scoress.at(i), false);
}else{
    almacenarArch1(namess.at(i), scoress.at(i), true);
}
}
};*/