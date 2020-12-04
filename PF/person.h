
#include <iostream>
#include <vector>
using namespace std;
#include "SuperClass.h"

#ifndef HH_Person
#define HH_Person

/*
* Authors: Maria Camila Rodriguez Von Buchwald, Juan David Olaya Getial.
* Date: 20/11/2020
* Purpose: Principal class of person information.
*/

class Person: public superClass {
    private:
        vector <string> names; 
        vector <double> score;
        vector <string> namesAndScore;
        vector<int> nuevosScore;
        string name;
    public:
        Person();  //Constructor
        ~Person(); //Destructor
        string getName(); // Take the names 
        double getScore(int puntaje);// Take the scores
        void storeArc(); //Put the score in a new file
        void OrderNames();   
        void almacenarArch();

        void almacenarArch1(); 
        int leerArch1();
        void OrderScores();
        void almacenarArch1L();

};
#endif



