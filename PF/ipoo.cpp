

#include <iostream>
using namespace std;
#include "Ipoo.h"
#include <string>
#include "time.h"

Ipoo:: Ipoo(){}; 

Ipoo::~Ipoo(){}; 

string Ipoo :: randomQues(){
atemps= 3;
int* pointer = &point; 
if (*pointer == 100){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 100 puntos.                     ***"<<endl;
srand( time( NULL ) );
operacion = ques1[0+(rand()%(ques1.size()))];
if(operacion == IpooQue.at(0)){
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(0)<<"\n b."<<IpooAns.at(1)<<"\n c."<<IpooAns.at(2)<<"\n d."<<IpooAns.at(3)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "d"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la d."<<IpooAns.at(3)<<"--->CORRECTO!"<<endl;
    acum+= 1;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 100 en IPOO. Acumulas ----> 100"<<endl;
    
    
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(4)<<"\n b."<<IpooAns.at(5)<<"\n c."<<IpooAns.at(6)<<"\n d."<<IpooAns.at(7)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la b."<<IpooAns.at(5)<<"--->CORRECTO!"<<endl;
    acum+= 1;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 100 en IPOO. Acumulas ----> 100"<<endl;


}
}  
}else if(*pointer == 200){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 200 puntos.                     ***"<<endl;
srand( time( NULL ) );
operacion = ques2.at(0+(rand()%(ques2.size())));
if(operacion == IpooQue.at(2)){
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(8)<<"\n b."<<IpooAns.at(9)<<"\n c."<<IpooAns.at(10)<<"\n d."<<IpooAns.at(11)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la a."<<IpooAns.at(8)<<"--->CORRECTO!"<<endl;
    acum+= 2;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 200 en IPOO. Acumulas ----> 200"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(12)<<"\n b."<<IpooAns.at(13)<<"\n c."<<IpooAns.at(14)<<"\n d."<<IpooAns.at(15)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "c"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la c."<<IpooAns.at(14)<<"--->CORRECTO!"<<endl;
    acum+= 2;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 200 en IPOO. Acumulas ----> 100"<<endl;
}
}
}else if(*pointer == 300){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 300 puntos.                     ***"<<endl;
srand( time( NULL ) );
operacion = ques3[0+(rand()%(ques3.size()))];
if(operacion == IpooQue.at(4)){
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(16)<<"\n b."<<IpooAns.at(17)<<"\n c."<<IpooAns.at(18)<<"\n d."<<IpooAns.at(19)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "c"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la c."<<IpooAns.at(18)<<"--->CORRECTO!"<<endl;
    acum+= 3;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta de 300 en IPOO. Acumulas ----> 300."<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(20)<<"\n b."<<IpooAns.at(21)<<"\n c."<<IpooAns.at(22)<<"\n d."<<IpooAns.at(23)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la a."<<IpooAns.at(20)<<"--->CORRECTO!"<<endl;
    acum+= 3;
    cont++;
    cout<<"Has acertado en "<<cont<<" preguntas de 300 en IPOO. Acumulas ----> 300."<<endl;
}
}
}else if(*pointer == 400){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 400 puntos.                     ***"<<endl;
srand( time( NULL ));
operacion = ques4[0+(rand()%(ques4.size()))];
if(operacion == IpooQue.at(6)){
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(24)<<"\n b."<<IpooAns.at(25)<<"\n c."<<IpooAns.at(26)<<"\n d."<<IpooAns.at(27)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la b."<<IpooAns.at(25)<<"--->CORRECTO!"<<endl;
    acum+= 4;
    cont++;
    cout<<"Has acertado en "<<cont<<" preguntas de 400 en IPOO. Acumulas ----> 400."<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(28)<<"\n b."<<IpooAns.at(29)<<"\n c."<<IpooAns.at(30)<<"\n d."<<IpooAns.at(31)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la a."<<IpooAns.at(28)<<"--->CORRECTO!"<<endl;
    acum+= 4;
    cont++;
    cout<<"Has acertado en "<<cont<<" preguntas de 400 en IPOO. Acumulas ----> 400."<<endl;
}
}
}else if (*pointer == 500){
cout<<"*************************************************************************"<<endl;
cout<<"***                      Pregunta por 500 puntos.                     ***"<<endl;
srand( time( NULL ) );
operacion = ques5[0+(rand()%(ques5.size()))];
if(operacion == IpooQue.at(8)){
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(32)<<"\n b."<<IpooAns.at(33)<<"\n c."<<IpooAns.at(34)<<"\n d."<<IpooAns.at(35)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la a."<<IpooAns.at(32)<<"--->CORRECTO!"<<endl;
    acum+= 5;
    cont++;
    cout<<"Has acertado en "<<cont<<" preguntas de 500 en IPOO. Acumulas ----> 500."<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<IpooAns.at(36)<<"\n b."<<IpooAns.at(37)<<"\n c."<<IpooAns.at(38)<<"\n d."<<IpooAns.at(39)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "d"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la d."<<IpooAns.at(39)<<"--->CORRECTO!"<<endl;
    acum+= 5;
    cont++;
    cout<<"Has acertado en "<<cont<<" preguntas de 500 en IPOO. Acumulas ----> 500."<<endl;
}
}
}
return "";
};

int Ipoo :: atempsitos(){

    if (atemps == 0){
        return 3;
    }else if (atemps == 1){
        return 2;
    }else if (atemps == 2){
        return 1;
    }else if (atemps == 3){
        return 0;
    }
    return 0;
}


int Ipoo:: whatPoints(){

    
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
