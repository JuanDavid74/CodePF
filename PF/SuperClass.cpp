

#include <iostream>
using namespace std;
#include "SuperClass.h"

//superClass:: superClass(){}; 
int atemps = 3;
//superClass::~superClass(){}; 

int superClass:: sumaScore(){
return acum * 100;
};
/*int superClass :: atempsitos(){

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
};*/
int superClass::chooseCat(){
int option;
cout<<"Seleccione una categoria: "<<endl;
cout<<"1. Discretas.  2. Constitucion Politica.  3. Calculo.  4. Ingles.  5.Ipoo."<<endl;
cin>>option;
return option;
}

int superClass :: contador(){
    return cont;
}