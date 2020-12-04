


#ifndef HH_SuperClass
#define HH_SuperClass

#include <iostream>
#include <vector>
using namespace std;

class superClass{
    public:
        int atemps = 3, point, acum=0, cont=0, option=0;
        string operacion;
        vector<string>questions;
        vector<string>answers;
        vector<int>points;
        //superClass();
        //~superClass();
        string randomQuestion(vector<string>questions, vector<string>answers);
        //int atempsitos();
        int contador();
        int sumaScore();
        int chooseCat();

};
#endif  

