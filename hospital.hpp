//
// Created by Young Bin Kim on 2019-04-09.
//

#ifndef HEAP_HOSPITAL_HPP
#define HEAP_HOSPITAL_HPP

#include <iostream>
#include <vector>
#include "heap.hpp"

using namespace std;
class hospital
{
    heap<vector<int>, int> patient_heap;
    hospital(vector<int> patients) : patient_heap(patients) {
    } //private constructor

public:

    static hospital& get_instance()
    {
        vector<int> patients = {8, 1, 3, 5, 7};
        static hospital instance(patients);
        return instance; // Instantiated on first use.
    }

    hospital(hospital const&)       = delete;
    void operator=(hospital const&)  = delete;

    void queue_patient(int a){
        patient_heap.push(a);
        cout << "Patient " << a << " admitted." << endl;
    }

    int treat_patient(){
        return patient_heap.pop();
    }

    void empty_hospital(){
        patient_heap.clear();
        cout << "Hospital cleared out." << endl;
    }

    int number_waiting(){
        if(patient_heap.is_empty()){
            return 0;
        } else {
            return patient_heap.size();
        }
    }
};

#endif //HEAP_HOSPITAL_HPP
