

#ifndef Politicons_H_ 
#define Politicons_H_
 
#include "SuperClass.h"    

class Politicons: public superClass{ 
  private:

    vector<string> ConstQues= {
    //100
       "Cuales son las ramas del poder publico?", //P1 [0]
       "Como es conocido tambien la Constitucion Politica de La Republica De Colombia de 1991? ", //P2 [1]
    //200
       "En que articulo de la Constitucion Politica de Colombia se encuentra reglamentado las funciones de la Suprema Autoridad Adminsitrativa?",  //P1 [2]
       "Son elementos del Estado: ",  //P2 [3]
    //300
       "Cuantas modificaciones a la constitucion Colombiana se han hecho desde 1991 hasta 2016?",//P1 [4]
       "La Ley 23 de 1982 y la Decision Andina 351 de 1993 habla sobre :", //P2 [5] 
    //400
       "Uno de los siguientes no es un derecho de los niños: ", //P1 [6] 
       "De acuerdo al articulo 264 de la Constitucion Politica, cual o cuales son las funciones mas importantes que desempeña el Consejo Nacional Electoral?", //P2 [7] 
    //500
       "Cuantos articulos posee la constitucion politica de colombia?",
       "El titulo XII de la constitucion politica de colombia tiene el nombre de: "
        };
        
   vector <string> ques1 ={ ConstQues.at(0), ConstQues.at(1) };
   vector <string> ques2 ={ ConstQues.at(2), ConstQues.at(3) };
   vector <string> ques3 ={ ConstQues.at(4), ConstQues.at(5) };
   vector <string> ques4 ={ ConstQues.at(6), ConstQues.at(7) }; 
   vector <string> ques5 ={ ConstQues.at(8), ConstQues.at(9) };  


    vector<string> ConstAns = {
        //DE 100 P1
        "Camara de senado, organismos de control, contraloria.", //[0] 
        "Ejecutiva, judicial, legislativa.", //[1] ESTA
        "Procuraduria general, asamblea constituyente, corte constitucional", //[2]
        "En Colombia no hay ramas, no existen. El poder politico no funciona.", //[3]
        //DE 100 P2
        "Constitucion de los derechos humanos", //[4] ESTA
        "Carta Magna de La gran Colombia", //[5]  
        "Inexequibles de la Corte ", //[6]  
        "Ultima Reforma Constitucional de 1991", //[7]  
        //DE 200 P1
        "Articulo 189", //[8] ESTA
        "Articulo 198", //[9] 
        "Articulo 176", //[10]
        "Articulo 209", //[11]
        //DE  200 P2
        "Poblacion", //[12]
        "Territorio", //[13]
        "Poder y Soberania", //[14]
        "Todas las anteriores", //[15] ESTA

        //DE 300 P1
        "30",  //[16]
        "No se han hecho ",  //[17]
        "46",  //[18]  ESTA
        "12",  //[19]
        //DE 30a0 P2
        "Derechos de Autor",  //[20] ESTA
        "Implementacion Reglamento ciudadano",  //[21]
        "Derecho a la libre expresion",  //[22]
        "Reglamento al uso tecnologico",  //[23]
        //DE 400 P1
        "Derecho a la vida, a la salud y a la Educacion",  //[24] 
        "Derecho a elegir y ser elegidos",  //[25] ESTA
        "Derecho a un nombre y una nacionalidad",  //[26]
        "Derecho a ser protegidos por la familia y la sociedad",  //[27]
        //DE 400 P2
        "Ejercer la suprema inspeccion, vigilancia y control de la organizacion electoral.",  //[28] 
        "Dar posesion de su cargo al Registrador Nacional del Estado Civil.",  //[29] 
        "Reconocer y revocar la Personeria Juridica de los partidos y movimientos politicos.",  //[30] 
        "Todas las anteriores.", //[31] ESTA
        //DE 500 P1
        "270",  //[32] 
        "380",  //[33] ESTA 
        "290",  //[34] 
        "370", //[35]
        //DE 500 P2
        "Del regimen economico y de la hacienda publica", //[36] ESTA
        "De la reforma de la constitucion",  //[37] 
        "De los organismos de control", //[38] 
        "De la organizacion territorial" //[39] 
     
    };

  public:
    Politicons();
   ~Politicons();
   string randomQues();
   int whatPoints();         
   //int atempsitos();

}; 
#endif     