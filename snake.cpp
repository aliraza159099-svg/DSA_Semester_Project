#include "snake.h"
#include "globals.h"

// Default constructor for testing
Snake::Snake()
{
    body.insertFront(Vector2{6, 9});
    body.insertRear(Vector2{5, 9});
}

my_deque<Vector2> body;

void Snake::Draw()
{
    for (int i = 0; i < body.counter; i++)
    {
        float x = body[i].x;
        float y = body[i].y;
        float snake_body_size = CELL_SIZE;
        Rectangle segment_of_snake = Rectangle{x * snake_body_size, y * snake_body_size, snake_body_size, snake_body_size};
        DrawRectangle(segment_of_snake.x, segment_of_snake.y, segment_of_snake.width, segment_of_snake.height, WHITE);
    }
};
void Snake::Update() {
};

Snake::~Snake()
{
}