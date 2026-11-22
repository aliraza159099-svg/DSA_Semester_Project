#include "raylib.h"
#include "my_deque.h"
#include <iostream>

/*
The deque is a simple array implementation

insertFront
insertRear

deleteFront
deleteRear

isFull
*/

// Setting the  limit very large because snake cannot be this large anyway.

template <typename T>
my_deque<T>::my_deque(int limit)
{
    front = 0;
    rear = 0;
    counter = 0;
    maxSize = limit;
    array = new T[limit];
}
template <typename T>
my_deque<T>::~my_deque()
{
    delete[] array;
};

template <typename T>
void my_deque<T>::insertFront(T data)
{
    if (counter >= maxSize)
    {
        std::cout << "The deque is full \n";
        return;
    }

    // Updating the front position so that it goes around
    // To the end;
    front = (front - 1 + maxSize) % maxSize;
    array[front] = data;
    counter++;
}
template <typename T>
void my_deque<T>::deleteFront()
{

    if (counter == 0)
    {
        std::cout << "The deque is empty \n";
        return;
    }

    // Updating the front so it moves forward;
    front = (front + 1) % maxSize;
    counter--;
};

template <typename T>
void my_deque<T>::insertRear(T data)
{
    if (counter > maxSize)
    {
        std::cout << "The deque is full \n";
        return;
    }

    array[rear] = data;
    rear = (rear + 1) % maxSize;
    counter++;
};
template <typename T>
void my_deque<T>::deleteRear()
{
    if (counter == 0)
    {
        std::cout << "The deque is empty \n";
        return;
    }
};

// Overloading the [] operator
template <typename T>
T &my_deque<T>::operator[](const int i)
{
    if (i > counter)
    {
        std::cout << "Index out of bounds " << std::endl;
    }
    return array[(front + i) % maxSize];
};

template class my_deque<Vector2>;