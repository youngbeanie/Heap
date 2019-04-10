//
// Created by Young Bin Kim on 2019-04-09.
//

#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

template <typename containerOfElements, typename T>

class heap{

    deque<T> heap_deque;

    void heapify(){
        make_heap(heap_deque.begin(), heap_deque.end());
    }

public:

    heap(containerOfElements items){
        for(auto item : items){
            heap_deque.push_back(item);
        }
        heapify();
    }

    void push(T a){
        heap_deque.push_back(a);
        heapify();
    }

    T pop(){
        T temp = heap_deque.front();
        heap_deque.pop_front();
        heapify();
        return temp;
    }

    int size(){
        return (int) heap_deque.size();
    }

    bool is_empty(){
        return heap_deque.size() == 0;
    }

    void clear(){
        heap_deque.clear();
    }

private:

    friend ostream& operator<< (ostream& os, const heap& heap){
        os << "Heap:" << endl;
        for(int i = 0; i < heap.heap_deque.size(); i++){
            os << heap.heap_deque[i] << " ";
        }
        return os;
    }


};



#endif //HEAP_HEAP_HPP
