
#include <iostream>
using namespace std;
#include <vector>
#include "person.cpp"
#include "discrets.cpp"
#include "politicons.cpp"
#include "calc.cpp"
#include "ipoo.cpp"
#include "english.cpp"
#include "SuperClass.cpp"

int main(){
int option;
Person p1 ;
Calc q1;
Politicons c1;
Discrets d1;
Ipoo v1;
English e1;
string name;
int atempsT = 3;
cout<<"-------------------------------------------------------------------------"<<endl;
cout<<"*************************************************************************"<<endl;
cout<<"***                     Bienvenido a la trivia J&C                    ***"<<endl;
cout<<"*************************************************************************"<<endl;
cout<<"***         Escribe un nickname para almacenar tu puntaje:            ***"<<endl; 
cin>>name;
cout<<"**************************************************************************"<<endl;
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
cout<<"**************************************************************************"<<endl;
cout<<"**                       Ingrese un numero valido                      ***"<<endl;
cout<<"*************************************************************************"<<endl;
}
}while(atempsT!=0);
cout<<"**************************************************************************"<<endl;
cout<<"***                      El juego ha finalizado.                       ***"<<endl;
cout<<"*************************************************************************"<<endl;
int contadorFin = d1.contador()+q1.contador()+c1.contador()+v1.contador()+e1.contador(); 
int puntaje = d1.sumaScore()+q1.sumaScore()+c1.sumaScore()+v1.sumaScore()+e1.sumaScore();

cout<<"** Acertaste: "<<contadorFin<<" preguntas."<<" Acumulaste: "<<puntaje<<" puntos **"<<endl;

p1.almacenarArch1(name, puntaje);
p1.OrganiceScore();
cout<<"**************************************************************************"<<endl;
p1.ranking(name, puntaje);

cout<<"*************************************************************************"<<endl;
cout<<"***                        Gracias por jugar.                         ***"<<endl;
cout<<"*************************************************************************"<<endl;
return 0;
}

