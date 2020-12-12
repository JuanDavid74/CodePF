
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
        vector<int> nuevosScore;
        vector <string> last;
        string charsito;
    public:
        Person();  //Constructor
        ~Person(); //Destructor
        void almacenarArch1(string name, int &score); 
        void OrganiceScore();
        void ranking(string name, int &score);

};
#endif



