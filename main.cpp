#include "include/raylib.h"
#include "include/food.h"
#include "include/globals.h"
#include "include/snake.h"

int main()
{

    InitWindow(CELL_SIZE * CELL_COUNT, CELL_SIZE * CELL_COUNT, "Snake Game");
    SetTargetFPS(60); // Set Fps to 60

    // Snake object
    Snake snake;

    // food object
    Food food;

    while (WindowShouldClose() == false) // the loop will run until escape is not pressed or window isn't closed
    {
        // starts the drawing
        BeginDrawing();

        // set the background to green
        ClearBackground(BLACK);

        // calling the method of Food
        food.draw();
        // end the drawing

        snake.Draw();
        EndDrawing();
    }
    // Unloading the food textures;
    food.unload();
    CloseWindow();
}
