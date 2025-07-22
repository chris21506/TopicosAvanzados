#pragma once
#include <forward_list>
#include <iostream>
using namespace std;

// Pila
template <typename T>
class LStack {
private:
    forward_list<T> list;
    int count;

public:
    LStack() : count(0) {}

    void Push(T value) {
		list.push_front(value); // inicializar Push Front
        count++;
    }

    T Pop() {
        if (count == 0) {
            cout << "Pila vacía";
            return {};
        }
        T val = list.front();
        list.pop_front();
        count--;
        return val;
    }

    T Peak() {
        if (count == 0) {
            cout << "Pila vacía";
            return {};
        }
        return list.front();
    }

    int Count() {
        return count;
    }
};