

#include <iostream>
using namespace std;
#include "person.h"
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstdio>

Person:: Person(){}; 

Person::~Person(){}; 

void Person :: almacenarArch1(string name, int &score){

fstream scoreT("scoreTem.txt", ios::in | ios::out | ios::app);

    if (scoreT){

            scoreT <<name+" "+to_string(score)<<"\n";
    }else{
        cout << "Error al escribir en el archivo" << endl;
    }
    scoreT.close();
}

void Person:: OrganiceScore(){
    ifstream scoreT("scoreTem.txt");
if (scoreT){
    string linea;
    while(getline(scoreT,linea)){
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
                nuevosScore.push_back(num);
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
int i,j,newS;
string newN;

for(i= 1; i<names.size(); i++){
    newS= nuevosScore[i];
    newN= names[i];

for(j = i; j > 0 & nuevosScore[j-1] < newS; j--){
    nuevosScore[j]=nuevosScore[j-1];
    names[j]=names[j-1];
}
    nuevosScore[j] = newS;
    names[j] = newN;
}

/*for(int i = 0; i< names.size(); i++){
    if(i==0){
        remove("scoreTem.txt");
    almacenarArch1(names.at(i), nuevosScore.at(i));
}else{
    almacenarArch1(names.at(i), nuevosScore.at(i));
}*/

for(int i =0; i < names.size(); i++){
	charsito = names.at(i)+" "+to_string(nuevosScore.at(i));
    last.push_back(charsito);
}

for(int i = 0; i< names.size(); i++){
    if(i==0){
        remove("scoreTem.txt");
    	almacenarArch1(names.at(i), nuevosScore.at(i));

}else{

		almacenarArch1(names.at(i), nuevosScore.at(i));

}

}
};

void Person :: ranking(string name, int &score){

for(int i=0; i< names.size(); i++ ){

    if( name+" "+to_string(score) == last[i] ){

        cout<<"Tu puesto es: "<<i+1<<". Nombre: "<<name<<" Score: "<<score<<endl;
		i = names.size();
        
    }else{
		cout<<"";
    }	
 }

for(int i=0; i< names.size(); i++ ){
    
    cout<<i+1<<"."<<names.at(i)<< " "<<nuevosScore.at(i)<<" puntos."<<endl;
}

};



/*for(int i = 0; i< names.size(); i++){
    if(i==0){
        remove("scoreTem.txt");
    almacenarArch1(names.at(i), nuevosScore.at(i));
}else{
    almacenarArch1(names.at(i), nuevosScore.at(i));
}*/

/*for(int i = 0; i< names.size(); i++){
    if(i==0){
        remove("scoreTem.txt");
fstream scoreT("scoreTem.txt", ios::in | ios::out | ios::app);

    if (scoreT){

            scoreT <<name+" "+to_string(score)<<"\n";
    }else{
        cout << "Error al escribir en el archivo" << endl;
    }
    scoreT.close();
}
}else{

    almacenarArch1(names.at(i),&nuevosScore.at(i)); 

            vector <string> last; //global
            string charsito = name+" "+to_string(score);
            last.push_back(charsito);
    }else{
        cout << "Error al escribir en el archivo" << endl;
    }
    scoreT.close();
}

 for(int i=0; i< names.size(); i++ ){

    if( names+" "+to_string(score) == last[i] ){

        cout<<"Tu puesto es: "<<i<<"nombre bla bla";

    }else{

        cout<<"Error";
    }*/