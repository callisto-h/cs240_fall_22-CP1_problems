#ifndef MID_H
#define MID_H

#include <iostream>
#include "Bottom.h"

#define middle_size 2

class Middle{
    public:
        Middle(){
            bottom_d_array = new Bottom[middle_size];
            id = rand() % 1000;
        }

        friend std::ostream &operator<<(std::ostream &out, Middle const &m){

            out << "\t" << "Middle ID: 0x" << std::hex << m.id << std::endl;
            out << "\t" << "Has array of 'Bottom', size: " << middle_size << std::endl;
            out << "\t" << "Array contents:" << std::endl;
            out << "\t" << "[" << std::endl;
            for(int i = 0; i < middle_size; ++i){
                out << "\t" << m.bottom_d_array[i] << std::endl;
            }
            out << "\t" << "]" << std::endl;

            return out;
        }

        int id; 
        Bottom *bottom_d_array;
};

#endif