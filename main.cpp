#include "include/raylib.h"


int main() {

    InitWindow(750,750,"game");

    float x = 750 /2 ;
    float y = 750 / 2;
    float velocity = 0.2;

    while (WindowShouldClose() == false) {
        BeginDrawing();

        ClearBackground(BLACK);
       DrawText("Balgheri", 300 , 300 , 20, GREEN);

        

        EndDrawing();
    }
    
}