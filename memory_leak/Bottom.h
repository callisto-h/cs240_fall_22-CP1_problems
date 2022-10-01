#ifndef BOT_H
#define BOT_H

#include <iostream>

#define bottom_size 2

class Bottom{
    public:
        Bottom(){
            int_d_array = new int[bottom_size];
            int_d_array[0] = rand() % 100;
            int_d_array[1] = rand() % 100;
            id = rand() % 1000;
        }

        friend std::ostream &operator<<(std::ostream &out, Bottom const &b){

            out << "\t" << "BOTTOM ID: 0x" << std::hex << b.id << std::endl;
            out << "\t\t" << "Has array of 'int', size: " << bottom_size << std::endl;
            out << "\t\t" << "Array contents:" << std::endl;
            out << "\t\t" << "[" << std::endl;
            for(int i = 0; i < bottom_size; ++i){
                out << "\t\t" << b.int_d_array[i] << std::endl;
            }
            out << "\t\t" << "]" << std::endl;

            return out;
        }

        int id; 
        int *int_d_array;
};

#endif