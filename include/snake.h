#ifndef H_SNAKE
#define H_SNAKE

#include "raylib.h"
#include "my_deque.h"
class Snake
{

public:
    Snake();
    ~Snake();
    my_deque<Vector2> body;

    void Draw();
    void Update();
};
#endif