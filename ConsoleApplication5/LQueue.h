#pragma once
#include "SentinelLinkedList.h"

//SentinelLinkedList
template <typename T>
class LQueue {
private:
    SentinelLinkedList<T> list;

public:
    LQueue() {}

    void Enqueue(T value) {
        list.PushBack(value); //PushBack
    }

    T Dequeue() {
        return list.PopFront(); // Quitar PushFront
    }

    int GetCount() {
        return list.GetCount();
    }
};