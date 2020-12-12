
#include <iostream>
using namespace std;
#include "discrets.h"
#include "time.h"

Discrets:: Discrets(){}; 

Discrets::~Discrets(){}; 


string Discrets :: randomQues(){
atemps= 3;
int* pointer = &point; 
if (*pointer == 100){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 100 puntos.                     ***"<<endl;
srand( time( NULL ) );
operacion = ques1[0+(rand()%(ques1.size()))];
if(operacion == DiscretsQues.at(0)){
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(0)<<"\nb."<<DiscretsAns.at(1)<<"\nc."<<DiscretsAns.at(2)<<"\nd."<<DiscretsAns.at(3)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la a."<<DiscretsAns.at(0)<<"--->CORRECTO!"<<endl;
    acum += 1;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 100 en Discretas. Acumulas ----> 100"<<endl;

}  
}else{
    
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(4)<<"\nb."<<DiscretsAns.at(5)<<"\nc."<<DiscretsAns.at(6)<<"\nd."<<DiscretsAns.at(7)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "c"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la c."<<DiscretsAns.at(6)<<"--->CORRECTO!"<<endl;
    acum+= 1;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 100 en Discretas. Acumulas ----> 100"<<endl;

}
}
}else if(*pointer == 200){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 200 puntos.                     ***"<<endl;
srand( time( NULL ) );
operacion = ques2.at(0+(rand()%(ques2.size())));
if(operacion == DiscretsQues.at(2)){
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(8)<<"\n b."<<DiscretsAns.at(9)<<"\n c."<<DiscretsAns.at(10)<<"\n d."<<DiscretsAns.at(11)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la a."<<DiscretsAns.at(8)<<"--->CORRECTO!"<<endl;
    acum+= 2;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 200 en Discretas. Acumulas ----> 200"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(12)<<"\n b."<<DiscretsAns.at(13)<<"\n c."<<DiscretsAns.at(14)<<"\n d."<<DiscretsAns.at(15)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "d"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la d."<<DiscretsAns.at(15)<<"--->CORRECTO!"<<endl;
    acum+= 2;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 200 en Discretas. Acumulas ----> 200"<<endl;
}
}
}else if(*pointer == 300){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 300 puntos.                     ***"<<endl;
srand( time( NULL ) );
operacion = ques3[0+(rand()%(ques3.size()))];
if(operacion == DiscretsQues.at(4)){
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(16)<<"\n b."<<DiscretsAns.at(17)<<"\n c."<<DiscretsAns.at(18)<<"\n d."<<DiscretsAns.at(19)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la b."<<DiscretsAns.at(17)<<"--->CORRECTO!"<<endl;
    acum+= 3;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 300 en Discretas. Acumulas ----> 300"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(20)<<"\n b."<<DiscretsAns.at(21)<<"\n c."<<DiscretsAns.at(22)<<"\n d."<<DiscretsAns.at(23)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la b."<<DiscretsAns.at(21)<<"--->CORRECTO!"<<endl;
    cout<<"Has acertado en 2 preguntas de 300. Acumulas ----> 600."<<endl;
    acum+= 3;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 300 en Discretas. Acumulas ----> 300"<<endl;
}
}
}else if(*pointer == 400){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 400 puntos.                     ***"<<endl;
srand( time( NULL ));
operacion = ques4[0+(rand()%(ques4.size()))];
if(operacion == DiscretsQues.at(6)){
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(24)<<"\n b."<<DiscretsAns.at(25)<<"\n c."<<DiscretsAns.at(26)<<"\n d."<<DiscretsAns.at(27)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "c"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la c."<<DiscretsAns.at(26)<<"--->CORRECTO!"<<endl;
    acum+= 4;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 400 en Discretas. Acumulas ----> 400"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(28)<<"\n b."<<DiscretsAns.at(29)<<"\n c."<<DiscretsAns.at(30)<<"\n d."<<DiscretsAns.at(31)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la a."<<DiscretsAns.at(28)<<"--->CORRECTO!"<<endl;
    acum+= 4;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 400 en Discretas. Acumulas ----> 400"<<endl;
}
}
}else if (*pointer == 500){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 500 puntos.                     ***"<<endl;
srand( time( NULL ) );
operacion = ques5[0+(rand()%(ques5.size()))];
if(operacion == DiscretsQues.at(8)){
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(32)<<"\n b."<<DiscretsAns.at(33)<<"\n c."<<DiscretsAns.at(34)<<"\n d."<<DiscretsAns.at(35)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la b."<<DiscretsAns.at(33)<<"--->CORRECTO!"<<endl;
    acum+= 5;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 500 en Discretas. Acumulas ----> 500"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<DiscretsAns.at(36)<<"\n b."<<DiscretsAns.at(37)<<"\n c."<<DiscretsAns.at(38)<<"\n d."<<DiscretsAns.at(39)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "d"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la d."<<DiscretsAns.at(39)<<"--->CORRECTO!"<<endl;
    acum+= 5;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 500 en Discretas. Acumulas ----> 500"<<endl;
}
}
}

return "";
};


int Discrets:: whatPoints(){

    cout<<"-------------------------------------------------------------------------"<<endl;
    cout<<"                Selecciona el score (100/200/300/400/500).               "<<endl;
    cout<<"-------------------------------------------------------------------------"<<endl; 
    cout<<"|     100     |        200       |    300    |     400    |     500     |" <<endl;
    cout<<"-------------------------------------------------------------------------"<<endl;

    cin>>point; 
    if(point == 100){
    
    if( ques1.size() == 0){
    cout<<"Segun las instrucciones, no puedes ingresar dos veces a los mismos puntos."<<endl;
    cout<<"***                         Elija otra categoria.                      ***"<<endl;
    atemps += atemps;
    return 0;
}
    randomQues(); 
    string* opri = &operacion;
    if (*opri == ques1.at(0)){
    ques1.erase(ques1.begin());

}else if (*opri == ques1.at(1)){

    ques1.erase(ques1.begin()+(1));
      
    }
    }
    if( point == 200){

    if( ques2.size() == 0){
    cout<<"Segun las instrucciones, no puedes ingresar dos veces a los mismos puntos."<<endl;
    cout<<"***                         Elija otra categoria.                      ***"<<endl;
    atemps += atemps;
    return 0;
}
    randomQues(); 
    string* opri = &operacion;
    if (*opri == ques2.at(0)){
    ques2.erase(ques2.begin());

}else if (*opri == ques2.at(1)){

    ques2.erase(ques2.begin()+(1));
      
    }

    }
    if( point == 300){ 
           
    if( ques3.size() == 0){
    cout<<"Segun las instrucciones, no puedes ingresar dos veces a los mismos puntos."<<endl;
    cout<<"***                         Elija otra categoria.                      ***"<<endl;
    atemps += atemps;
    return 0;
}
    randomQues(); 
    string* opri = &operacion;
    if (*opri == ques3.at(0)){
    ques3.erase(ques3.begin());

}else if (*opri == ques3.at(1)){
    ques3.erase(ques3.begin()+(1));
      
    }   
    }
    
    if (point == 400){  
           
    if( ques4.size() == 0){
    cout<<"Segun las instrucciones, no puedes ingresar dos veces a los mismos puntos."<<endl;
    cout<<"***                         Elija otra categoria.                      ***"<<endl;
    atemps += atemps;
    return 0;
}
    randomQues(); 
    string* opri = &operacion;
    if (*opri == ques4.at(0)){
    ques4.erase(ques4.begin());

}else if (*opri == ques4.at(1)){

    ques4.erase(ques4.begin()+(1));
      
    }
    }
    if (point == 500){  
           
    if( ques5.size() == 0){
    cout<<"Segun las instrucciones, no puedes ingresar dos veces a los mismos puntos."<<endl;
    cout<<"***                         Elija otra categoria.                      ***"<<endl;
    atemps += atemps;
    return 0;
}
    randomQues(); 
    string* opri = &operacion;
    if (*opri == ques5.at(0)){
    ques5.erase(ques5.begin());

}else if (*opri == ques5.at(1)){

    ques5.erase(ques5.begin()+(1));
      
    }
    } 
    
return 0;
};
