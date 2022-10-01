#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>

class DArray{
    public:
        int *ptr;
        int size;

        DArray(){
            ptr = nullptr;
            size = 0;
        }

        DArray(int n){
            size = n;
            ptr = new int[size];
            for(int i = 0; i < size; ++i){
                ptr[i] = rand() %100;
            }
        }

        void grow(int new_size){
            if(new_size <= size) return;

            size = new_size;
            int *temp = ptr;
            ptr = new int[size];
            *ptr = *temp;

        }

        friend std::ostream &operator<<(std::ostream &o, DArray const &d){
            if(d.ptr == nullptr){
                o << "s.ptr is nullptr";
                return o;
            }

            o << "d.ptr address: 0x" << std::hex << d.ptr << std::endl;
            o << "d.ptr values: " <<  std::endl;
            o << std::dec;
            for(int i = 0; i < d.size; ++i){
                o << d.ptr[i];
                if(i != d.size-1) o << ", "; 
            }
            o << std::endl;
            return o;

        }

        ~DArray(){
            delete [] ptr;
        }
};

#endif