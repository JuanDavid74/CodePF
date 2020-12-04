
#include <iostream>
#include <vector>
using namespace std;
#include "person.cpp"
#include "discrets.cpp"
#include "politicons.cpp"
#include "calc.cpp"
#include "ipoo.cpp"
#include "english.cpp"
#include "SuperClass.cpp"
#include <stdio.h>
#include <wchar.h>
#include <locale>


int main(){
int option;
setlocale(LC_ALL, "");


Person p1 ;
Calc q1;
Politicons c1;
Discrets d1;
Ipoo v1;
English e1;


cout<<"-----Bienvenido-----"<<endl;
p1.getName();
int atempsT = 3;

do{
int opcion = p1.chooseCat();
if( opcion == 1 ){
d1.whatPoints();
atempsT -= d1.atempsitos();
}else if( opcion == 2 ){
c1.whatPoints();      
atempsT -= c1.atempsitos();
}else if(opcion == 3 ){
q1.whatPoints();
atempsT -= q1.atempsitos();
}else if(opcion == 4 ){
e1.whatPoints();
atempsT -= e1.atempsitos();
}else if(opcion == 5 ){
v1.whatPoints();
atempsT -= v1.atempsitos();
}else{
cout<<"Ingrese un numero valido"<<endl;
}
}while(atempsT!=0);
cout<<"--------------------------------"<<endl;
cout<<"---- El juego ha finalizado. ----"<<endl;
cout<<"--------------------------------"<<endl;
int contadorFin = d1.contador()+q1.contador()+c1.contador()+v1.contador()+e1.contador(); 
int puntaje = d1.sumaScore()+q1.sumaScore()+c1.sumaScore()+v1.sumaScore()+e1.sumaScore();
p1.getScore(puntaje);

cout<<"Acertaste: "<<contadorFin<<" preguntas."<<" Acumulaste: "<<puntaje<<" puntos"<<endl;
//cout<<"Te ubicas en el puesto #1 del ranking."<<endl;
p1.almacenarArch1();
p1.leerArch1();
p1.almacenarArch1L();

cout<<"--------------------------------"<<endl;
cout<<"---- Gracias por jugar. ----"<<endl;
cout<<"--------------------------------"<<endl;

return 0;
}

//Hola muchachos2
//Pruebas
