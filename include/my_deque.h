#ifndef H_MY_DEQUE
#define H_MY_DEQUE
template <typename T>
class my_deque
{
public:
    /*
    The deque is a simple array implementation

    insertFront
    insertRear

    deleteFront
    deleteRear

    isFull
    */

    my_deque(int limit = 10000);
    ~my_deque();

    void insertFront(T data);
    void deleteFront();

    void insertRear(T data);
    void deleteRear();

    // Overloading the [] operator
    T &operator[](const int i);

    // Public because need to be accessed outside;
    int counter = 0;
    int maxSize;
    T *array;

private:
    int front = 0;
    int rear = 0;
};

#endif