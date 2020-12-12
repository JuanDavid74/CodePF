
#ifndef HH_English
#define HH_English
 
#include "SuperClass.h"    

class English :public superClass{ 
  private:
    vector<string> QuesEngl = {
    //100
       "A place where you can go if you need urgent help with the healt", //P1 [0]
       "An ordered set of rules and procedures that regulate the operation of a group or community.", //P2 [1]
    //200
       "______ ___ apples in the fridge and ______ __ a banana in the table.",  //P1 [2]
       "The lamp is _____ my desk. Not ____, imposible! ",  //P2 [3]
    //300
       "Don't put the baby __ ___ _____ of the bed. He can fall to the floor! Put him ______ _____ it. ",//P1 [4]
       "Indique cómo se escribe correctamente en inglés el verbo Hacer un esfuerzo: ", //P2 [5] 
    //400
       "As quiet as ________ As easy as _______ and ", //P1 [6] IMAGEN 1
       "She talks to me, ______________ friends. I don't know why if we  ____ _____ _____  ", //P2 [7] IMAGEN 2
    //500
       "Systems engineering is the _______ of engineering that aims to implement and optimize ________ ________",
       "A _____________ ____________ is a set of symbols and codes used to guide the programming of structures in web development."
        };
        vector <string> ques1 ={ QuesEngl.at(0), QuesEngl.at(1) };
        vector <string> ques2 ={ QuesEngl.at(2), QuesEngl.at(3) };
        vector <string> ques3 ={ QuesEngl.at(4), QuesEngl.at(5) };
        vector <string> ques4 ={ QuesEngl.at(6), QuesEngl.at(7) };
        vector <string> ques5 ={ QuesEngl.at(8), QuesEngl.at(9) };
    vector<string> AnsEngl = {
        //DE 100 P1
        "hospital", //[0] ESTA
        "home", //[1]
        "pool", //[2]
        "nurse", //[3]
        //DE 100 P2
        "a processador.", //[4] 
        "a motherboard.", //[5] 
        "a system.", //[6]  ESTA
        "I don't know.", //[7]
        //DE 200 P1
        "There is, there are.", //[8]
        "There are, There is", //[9] ESTA
        "How much, How many", //[10]
        "This is, these are.", //[11]
        //DE  200 P2
        "under, on", //[12]
        "beside, on", //[13]
        "on, under", //[14]  ESTA
        "next to, far", //[15]

        //DE 300 P1
        "In the corner, away from",  //[16] ESTA
        "In the corner, later from",  //[17]
        "In the corner, under of",  //[18] 
        "In the corner, near from",  //[19]
        //DE 300 P2
        "To have an effort.",  //[20] 
        "To doing an effort.",  //[21]
        "To make an effort.",  //[22] ESTA
        "To get an effort.",  //[23]
        //DE 400 P1
        "an owl, pie",  //[24] ESTA
        "an mouse, houses",  //[25] 
        "an owl, houses",  //[26]
        "an mouse, pie",  //[27]
        //DE 400 P2
        "as if we were, never ever met.",  //[28] 
        "as if we was, had never meet.",  //[29] 
        "like we were, have never met.",  //[30] ESTA
        "if we were, have never meet.", //[31] 
        //DE 500 P1
        "branch, complex systems.",  //[32] ESTA
        "branch, systems complex.",  //[33] 
        "area, systems incomplex.",  //[34] 
        "area, incomplex systems.", //[35] 
        //DE 500 P2
        "programming lenguage", //[36] 
        "language programming",  //[37] 
        "HTML language", //[38] 
        "programming language" //[39] ESTA
     
    };

  public:               
    English();
    ~English();
     string randomQues();
     int whatPoints();
   //int atempsitos();

}; 

#endif