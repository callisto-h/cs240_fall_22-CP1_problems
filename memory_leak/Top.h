#ifndef TOP_H
#define TOP_H

#include <iostream>
#include "Middle.h"

#define top_size 4

class Top{
    public:
        Top(){
            middle_d_array = new Middle[top_size];
            id = rand() % 1000;
        }

        friend std::ostream &operator<<(std::ostream &out, Top const &m){

            out <<  "Top ID: 0x" << std::hex << m.id << std::endl;
            out <<  "Has array of 'Middle', size: " << top_size << std::endl;
            out <<  "Array contents:" << std::endl;
            out <<  "[" << std::endl;
            for(int i = 0; i < top_size; ++i){
                out <<  m.middle_d_array[i] << std::endl;
            }
            out <<  "]" << std::endl;

            return out;
        }

        int id; 
        Middle *middle_d_array;
};

#endif