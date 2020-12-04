
#ifndef HH_CALCULO 
#define HH_CALCULO
 
#include "SuperClass.h"    

class Calc :public superClass{ 
  private:
    vector<string> CalcQue = {
        "La finalidad de la integral es:",
        "El resultado de hacer la siguiente integral x^2 es: ",  

        "La definicion del Teorema Fundamental Del Calculo es :", 
        "Por que se agrega una constante de integracion?", 

        "Una de las aplicaciones de la integral en el calculo es:",
        "En matematica, la longitud de arco, también es llamada?", 

        "A que se le llama conjunto limitado por dos cilindros concentricos?", 
        "Cuando se utiliza la regla de l'hopital?",

        "Cual(es) es(son) las propiedades algebraicas de las series?",
        "Que permite obtener el Teorema de Taylor?"
        };

    vector <string> ques1 ={ CalcQue.at(0), CalcQue.at(1) };
    vector <string> ques2 ={ CalcQue.at(2), CalcQue.at(3) };
    vector <string> ques3 ={ CalcQue.at(4), CalcQue.at(5) };
    vector <string> ques4 ={ CalcQue.at(6), CalcQue.at(7) };  
    vector <string> ques5 ={ CalcQue.at(8), CalcQue.at(9) }; 

    vector<string> CalcAns = {
    
    // De 100
        "Principalmente para el calculo de areas y volumenes de regiones y solidos de revolucion.", //
        "Medir la rapidez con que se produce el cambio de una situacion.",
        "La aproximacion hacia un punto concreto de una sucesion o una funcion.",
        "Sirve para calcular el valor de verdad de una integral indefinida.",

        "In(x)",
        "x^3/3",//
        "Error...",
        "3x^2",

    // De 200

        "Es la afirmacion de que la derivacion e integracion de una funcion son operaciones inversas.",//
        "Si los terminos de una serie infinita no tienden a cero, la serie necesariamente diverge.",
        "Resulta convergente si la sucesion de sumas parciales tiene un limite en el espacio considerado.",
        "Extiende la intuicion de las series geometricas a series mas generales.",

        "Esta constante expresa una ambigüedad inherente a la construccion de primitivas.",
        "Cuando la funcion f(x) es mayor que cero.",
        "Por la integral definida que es igual al area limitada entre la grafica de f(x).",
        "El area limitada por la grafica de la funcion, en un sistema de coordenadas cartesianas.",//

    // De 300
        "Volumenes indefinidos.",
        "Area de regiones planas.",//
        "Longitud de la cuerda.",
        "Todas las anteriores.",

        "Integral Definida.",
        "Rectificacion de una curva.",//
        "Dimension lineal.",
        "Curvas específicas.",

    // De 400
        "Integral definida",
        "Longitud de arco",
        "Capas cilindricas",//
        "Integrales trigonometricas",

        "Se ayudar a evaluar limites de funciones que esten en forma indeterminada.",//
        "Para hallar las secciones transversales perpendiculares del solido generado.",
        "Para reducir el orden a la mitad de las potencia pares de seno y coseno.",
        "Cuando una funcion es continua y podemos garantizar el limite.",

    // De 500
        "Linealidad.",
        "Todas las opciones son correctas.",//
        "Convergente + Divergente.",
        "Divergente + Divergente.",

        "la longitud de la hipotenusa es igual a la raiz cuadrada de la suma del area de los cuadrados",
        "Plantea una funcion f(x) continua en [a,b] y f(a) y f(b) son de distinto signo, existe por lo menos un punto entre a y b para el cual f(c)=0",
        "Demuestra la existencia de un punto interior en un intervalo abierto",
        "Permite aproximar una funcion en torno a un punto interior a dicho intervalo, mediante un polinomio."//
      }; 
  public:   
    string randomQues();
    int whatPoints();  
    void setMenu();    
    Calc();
    ~Calc();
    int atempsitos();

};
#endif     