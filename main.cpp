#include <iostream>
#include "heap.hpp"
#include "hospital.hpp"

using namespace std;
int main() {
    hospital *hospitalPtr = &hospital::get_instance();

    hospitalPtr->queue_patient(12);
    hospitalPtr->queue_patient(15);
    hospitalPtr->queue_patient(2);
    hospitalPtr->queue_patient(3);
    hospitalPtr->queue_patient(10);
    hospitalPtr->queue_patient(20);
    hospitalPtr->queue_patient(8);
    hospitalPtr->queue_patient(0);
    cout << "There are " << hospitalPtr->number_waiting() << " people currently in line." << endl;

    cout << "Treating patient number " << hospitalPtr->treat_patient() << endl;
    cout << "Treating patient number " << hospitalPtr->treat_patient() << endl;
    cout << "Treating patient number " << hospitalPtr->treat_patient() << endl;
    cout << "There are " << hospitalPtr->number_waiting() << " people currently in line." << endl;

    cout << "Hospital on fire" << endl;
    hospitalPtr->empty_hospital();
    cout << "There are " << hospitalPtr->number_waiting() << " people currently in line." << endl;

    return 0;
}