#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>

class Sample{
    public:
        int *ptr;
        int size;

        Sample(){}
        Sample(int n){
            size = n;
            ptr = new int[size];

            for(int i = 0; i < size; ++i){
                ptr[i] = rand() %100;
            }
        }

        Sample(Sample const &s){
            this->size = s.size;

            if(s.ptr == nullptr){
                this->ptr = nullptr;
                return;
            }

            this->ptr = s.ptr;
        }

        friend std::ostream &operator<<(std::ostream &o, Sample const &s){
            if(s.ptr == nullptr){
                o << "s.ptr is nullptr";
                return o;
            }

            o << "s.ptr address: 0x" << std::hex << s.ptr << std::endl;
            o << "s.ptr values: " <<  std::endl;
            o << std::dec;
            for(int i = 0; i < s.size; ++i){
                o << s.ptr[i];
                if(i != s.size-1) o << ", "; 
            }
            o << std::endl;
            return o;

        }

        ~Sample(){
            delete[] ptr;
        }
};

#endif