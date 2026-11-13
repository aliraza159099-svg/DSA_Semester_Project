#include "include/raylib.h"


int main() {

    int window_width = 700;
    int window_height = 700;
    InitWindow(window_width ,window_height,"Snake Game");

    while (WindowShouldClose() == false) {
        BeginDrawing();

        ClearBackground(BLACK);

        EndDrawing();
    }
    
}
