
#ifndef Ipoo_H_ 
#define Ipoo_H_
 
#include "SuperClass.h"    

class Ipoo:public superClass{ 
    
  private:
    vector<string> IpooQue = {
    //100
       "En C++, que es un objeto?", //P1 [0]
       "De acuerdo a lo aprendido en el curso de IPOO Que significan las siglas UML?", //P2 [1]
    //200
       "Los 4 tipos de relaciones principales entre clases son: ",  //P1 [2]
       "Es una relacion que representa a los objetos compuestos por otros objetos. Indica Objetos que a su vez estan formados por otros...",  //P2 [3]
    //300
        "Si usted quisiera hacer un programa que realizara un conjunto de acciones y luego preguntara una condicion (De forma recursiva). Deberia usar:", //P1 [4]
        "Algo dinamico es...", //P2 [5] 
    //400
        "Un puntero es: ", //P1 [6] 
        "Que pasa cuando aumento el tamaño en memoria de una varible. Ej: int var++;", //P2 [7] 
    //500
        "El fstream permite: ",
        "La insercion es: "
        };
        vector <string> ques1 ={ IpooQue.at(0), IpooQue.at(1) };
        vector <string> ques2 ={ IpooQue.at(2), IpooQue.at(3) };
        vector <string> ques3 ={ IpooQue.at(4), IpooQue.at(5) };
        vector <string> ques4 ={ IpooQue.at(6), IpooQue.at(7) }; 
        vector <string> ques5 ={ IpooQue.at(8), IpooQue.at(9) };  
    vector<string> IpooAns = {
        //DE 100 P1
        "Son las operaciones (acciones o funciones) que se aplican una entidad.", //[0] 
        "Una entidad de la vida real que cumple simplemente funciones.", //[1]
        "Una entidad de la vida real que es abstraida en sus carateristicas.", //[2]
        "Una entidad de la vida real que es abstraida en caracteristicas y funcionalidades.", //[3] ESTA
        //DE 100 P2
        "Modelado de lenguaje de c++.", //[4] 
        "La c y d son correctas.", //[5] ESTA
        "Unified Modeling Language", //[6] 
        "Diagrama de clases.", //[7]
        //DE 200 P1
        "Agregacion, Herencia, Composicion, Asociacion.", //[8] ESTA
        "Herencia, composicion, polimorfismo, UML.", //[9]
        "Agregacion, Herencia, Composicion, Polimorfismo.", //[10]
        "Herencia, composicion, polimorfismo, implementacion.", //[11]
        //DE  200 P2
        "Herencia.", //[12]
        "Composicion.", //[13]
        "Agregacion", //[14] ESTA
        "Ninguna de las anteriores.", //[15]

        //DE 300 P1
        "While.",  //[16]
        "If, Else If.",  //[17]
        "Do- while.",  //[18] ESTA
        "Recursividad ya que ningun bucle realiza este proceso de manera automatica.",  //[19]
        //DE 300 P2
        "Dejar que el usuario pase por consola sus datos. ",  //[20] ESTA
        "Dejar que el usuario pase por memoria sus datos.",  //[21]
        "Dejar que el usuario pase por USB sus datos.",  //[22]
        "Ninguna es correcta.",  //[23]
        //DE 400 P1
        "A la direccion de memoria de una variable.",  //[24] 
        "A la direccion de memoria de una variable y en consecuencia a su valor.",  //[25] ESTA b
        "A la direccion de puntero de una variable y en consecuencia a una direccion de memoria.",  //[26]
        "A la direccion del new de un puntero.",  //[27]
        //DE 400 P2
        "Internamente, se incrementan el tamaño en la pila de las variables.",  //[28] ESTA
        "Internamente, se decrementa el tamaño en la pila de las variables.",  //[29] 
        "Externamente, se muestra el incremento de el tamaño en la pila de las variables.",  //[30] 
        "Externamente, se muestra el tamaño en la pila de las variables.", //[31] 
        //DE 500 P1

        "Editar y leer archivos.",  //[32] ESTA
        "Leer archivos.",  //[33] 
        "Editar archivos.",  //[34] 
        "Eliminar archivos.", //[35] 
        //DE 500 P2

        "Un metodo natural de ordenacion el cual va acomodando los elementos invertidos en la posicion correcta.", //[36] 
        "Un metodo de ordenacion el cual va insertando los elementos ordenados en la posicion correcta.",  //[37] 
        "Ninguna de las anteriores.", //[38] 
        "Un metodo natural de ordenacion el cual va insertando los elementos ordenados en la posicion correcta." //[39] ESTA.
        
     
    
    };
  public:               
    Ipoo();
    ~Ipoo();
     string randomQues();
     int whatPoints();
     //int atempsitos();

}; 
#endif
