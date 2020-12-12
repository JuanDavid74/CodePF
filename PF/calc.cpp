



#include <iostream>
using namespace std;
#include "calc.h"
#include "time.h"

Calc:: Calc(){}; 

Calc::~Calc(){}; 


string Calc :: randomQues(){
atemps= 3;
int* pointer = &point; 
if (*pointer == 100){
srand( time( NULL ) );
operacion = ques1[0+(rand()%(ques1.size()))];
if(operacion == CalcQue.at(0)){
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(0)<<"\n b."<<CalcAns.at(1)<<"\n c."<<CalcAns.at(2)<<"\n d."<<CalcAns.at(3)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la a."<<CalcAns.at(1)<<"--->CORRECTO!"<<endl;
    acum = acum + 1;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 100 en Calculo. Acumulas ----> 100"<<endl;
}
}else{
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(4)<<"\n b."<<CalcAns.at(5)<<"\n c."<<CalcAns.at(6)<<"\n d."<<CalcAns.at(7)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la c."<<CalcAns.at(5)<<"--->CORRECTO!"<<endl;
    acum = acum + 1;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 100 en Calculo. Acumulas ----> 100"<<endl;
}
    

}   
}else if(*pointer == 200){
srand( time( NULL ) );
operacion = ques2.at(0+(rand()%(ques2.size())));
if(operacion == CalcQue.at(2)){
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(8)<<"\n b."<<CalcAns.at(9)<<"\n c."<<CalcAns.at(10)<<"\n d."<<CalcAns.at(11)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la a."<<CalcAns.at(8)<<"--->CORRECTO!"<<endl;
    acum = acum + 2;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 200 en Calculo. Acumulas ----> 200"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(12)<<"\n b."<<CalcAns.at(13)<<"\n c."<<CalcAns.at(14)<<"\n d."<<CalcAns.at(15)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "d"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la d."<<CalcAns.at(15)<<"--->CORRECTO!"<<endl;
    acum = acum + 2;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 200 en Calculo. Acumulas ----> 200"<<endl;
}
}
}else if(*pointer == 300){
srand( time( NULL ) );
operacion = ques3[0+(rand()%(ques3.size()))];
if(operacion == CalcQue.at(4)){
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(16)<<"\n b."<<CalcAns.at(17)<<"\n c."<<CalcAns.at(18)<<"\n d."<<CalcAns.at(19)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la b."<<CalcAns.at(17)<<"--->CORRECTO!"<<endl;
    acum = acum + 3;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 300 en Calculo. Acumulas ----> 300"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(20)<<"\n b."<<CalcAns.at(21)<<"\n c."<<CalcAns.at(22)<<"\n d."<<CalcAns.at(23)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la b."<<CalcAns.at(21)<<"--->CORRECTO!"<<endl;
    acum = acum + 3;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 300 en Calculo. Acumulas ----> 300"<<endl;
}
}
}else if(*pointer == 400){
srand( time( NULL ));
operacion = ques4[0+(rand()%(ques4.size()))];
if(operacion == CalcQue.at(6)){
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(24)<<"\n b."<<CalcAns.at(25)<<"\n c."<<CalcAns.at(26)<<"\n d."<<CalcAns.at(27)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "c"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la c."<<CalcAns.at(26)<<"--->CORRECTO!"<<endl;
    acum+= 4;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 400 en Calculo. Acumulas ----> 400"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(28)<<"\n b."<<CalcAns.at(29)<<"\n c."<<CalcAns.at(30)<<"\n d."<<CalcAns.at(31)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "a"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la a."<<CalcAns.at(28)<<"--->CORRECTO!"<<endl;
    acum+= 4;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 400 en Calculo. Acumulas ----> 400"<<endl;
    
}
}
}else if (*pointer == 500){
srand( time( NULL ) );
operacion = ques5[0+(rand()%(ques5.size()))];
if(operacion == CalcQue.at(8)){
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(32)<<"\n b."<<CalcAns.at(33)<<"\n c."<<CalcAns.at(34)<<"\n d."<<CalcAns.at(35)<<endl;
cout<<"\nLa respuesta es: "<<endl;
string ans;
cin>>ans;
if(ans != "b"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else{
    cout<<"Seleccionaste la b."<<CalcAns.at(33)<<"--->CORRECTO!"<<endl;
    acum+= 5;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 500 en Calculo. Acumulas ----> 500"<<endl;
}  
}else{
cout<<operacion<<endl;
cout<<"a."<<CalcAns.at(36)<<"\n b."<<CalcAns.at(37)<<"\n c."<<CalcAns.at(38)<<"\n d."<<CalcAns.at(39)<<endl;
cout<<"La respuesta es: "<<endl;
string ans2;
cin>>ans2;
if(ans2 != "d"){
    cout<<"Incorrecto"<<endl;
    atemps = atemps-1;
}else {
    cout<<"Seleccionaste la d."<<CalcAns.at(39)<<"--->CORRECTO!"<<endl;
    acum+= 5;
    cont++;
    cout<<"Has acertado en "<<cont<<" pregunta(s) de 500 en Calculo. Acumulas ----> 500"<<endl;
}
}
}
return "";
};

int Calc :: atempsitos(){

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
};

int Calc:: whatPoints(){

    cout<<"Seleccione el score que desea obtener en su categoria (100/200/300/400/500): "<<endl;
    cin>>point;
    if(point == 100){
    
    if( ques1.size() == 0){
    cout<<"Segun las instrucciones, no puedes ingresar dos veces a los mismos puntos."<<endl;
    cout<<"Elija otra categoria."<<endl;
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
    cout<<"Elija otra categoria."<<endl;
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
    cout<<"Elija otra categoria."<<endl;
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
    cout<<"Elija otra categoria."<<endl;
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
    cout<<"Elija otra categoria."<<endl;
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