

#include <iostream>
using namespace std;
#include "SuperClass.h"
 
int atemps = 3;

int superClass:: sumaScore(){
return acum * 100;
};

int superClass::chooseCat(){
int option;
cout<<"-------------------------------------------------------------------------"<<endl;
cout<<"                  Selecciona la categoria (1/2/3/4/5).                   "<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
cout<<"| 1.Discretas | 2.Const.Politica | 3.Calculo | 4. Ingles  |   5. IPOO   |" <<endl; 
cout<<"-------------------------------------------------------------------------"<<endl;

 cin>>option;
return option;
}

int superClass :: contador(){
    return cont;
}

int superClass :: atempsitos(){

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
