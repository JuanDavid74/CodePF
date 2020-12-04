

#ifndef HH_DISCRETAS
#define HH_DISCRETAS
 
#include "SuperClass.h"    

class Discrets :public superClass{ 
  private:
    
        vector<string> DiscretsQues = {
        "Que es una proposicion?",
        "Cuando es contradiccion una expresion boleana?",

        "Que es una axioma?", 
        "En la Equivalencia de implicacion el nombre de la siguiente regla (-(p -> q) = p & -q) es ?", 

        "Simplifique hasta su minima expresion ((-p & -(p v -p)) v q) ", 
        "El ejemplo de una formula cerrada es :",

        "La contradiccion demuestra -p -> false, esto graficamente se puede ver como : ", 
        "Seleccione la inferencia deducida de dos premisas correcta :",

        "El resultado de (+X:N|x^2=81:(x+2)^2) es: ",
        "Escoga el contrario elemento neutro del cuantificador dado: La disyuncion V"
        };
        vector <string> ques1 ={ DiscretsQues.at(0), DiscretsQues.at(1) };
        vector <string> ques2 ={ DiscretsQues.at(2), DiscretsQues.at(3) };
        vector <string> ques3 ={ DiscretsQues.at(4), DiscretsQues.at(5) };
        vector <string> ques4 ={ DiscretsQues.at(6), DiscretsQues.at(7) };   
        vector <string> ques5 ={ DiscretsQues.at(8), DiscretsQues.at(9) };    
        vector<string> DiscretsAns = {
    
    // De 100
        "Una frase declarativa.", //
        "Un arbol de sintaxis asociado.",
        " una formula de la logica proposicional.",
        "una asignacion de valores de verdad.",

        "Cuando existe una interpretacion I para E tal que I(E) = Verdadero.",
        "Cuando para toda interpretacion I para E se tiene que I(E) = Verdadero.",
        "Cuando para toda interpretacion I para E se tiene que I(E) = Falso.",//
        "Cuando existe una interpretacion I para E tal que I(E) = Falso.",
    // De 200

        "Formulas validas a partir de las cuales se pueden deducir nuevas formulas validas.",//
        "Una Tabla de verdad.",
        "Un tipo de deduccion.",
        "Variables proposicionales que se leen como teoremas.",

        "Definicion de V con ->.",
        "Tautologia de ->(Medio incluido).",
        "Asociatividad izquierda de ->.",
        "Negacion de ->.",//

    // De 300
        "true.",
        "q.",//
        "(-p & false).",
        "(p v q).",

        "La formula de la forma ∀x|P(x): q(x) o ∃y|U(y) : W(y)",
        "La formula de la forma ∀x|(Q(x) & P(x)):(R(x,y) & P(y))",//
        "La formula de la forma P(y) & ∀x |(Q(q)",
        "La formula de la forma P(x) & ∀x|Q(x) : R(x,y)",

    // De 400
        "(-p & true) <-> ( false v -p -> true) <-> (-p -> true) <-> false <-> -p.",
        "-p -> -r <-> -r -> true <-> r <-> p -> true.",
        "-p -> false <-> (-false -> --p) <-> (true -> p) <-> p.",//
        "true -> -p <-> -p v false <-> -p",

        "∃x|A(x):-B(x)(-∀x|A(x):B(x))",//
        "-(∀x|R(x):P(x))<->(-∃y|-R(y):-(P(y) & W(y)))",
        "-(∃y|-R(y):P(q))<->(∀x|R(q):-P(y))",
        "(∀𝑥|R(x):P(x))<->(∀𝑥|:R(x) v -R(x) -> (P(x) & True))",

    // De 500
        "100",
        "101",//
        "121",
        "103 ", 

        "1",
        "0",
        "False",
        "True" // 

    }; 





  public:               
    Discrets();
    ~Discrets();
     string randomQues();
    int whatPoints();
    int atempsitos();
    string eliminar(vector <string> ques1, vector <string> ques2, vector <string> ques3 , vector <string> ques4, vector <string> ques5);

}; 
#endif     