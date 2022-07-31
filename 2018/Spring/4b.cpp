// incomplete

// for question : refer to the question bank 

#include<iostream>
using namespace std;

class UNIVERSITY {
    protected :
        char university_name[50], university_location[50];

};
class AFFILIATED_COLLEGE : protected UNIVERSITY {
    protected : 
        char college_name[50];
        int no_of_programs;
};
class CONSTITUTENT_COLLEGE : protected UNIVERSITY {
    protected :
        char school_name[50], dean[50], name_of_program[50];
};
class STUDENT : private AFFILIATED_COLLEGE, private CONSTITUTENT_COLLEGE {
    protected :
        char student_name[50];
        int enrolled_year;
};