#include "include/raylib.h"
#include "include/raymath.h"


int main() {

    InitWindow(750,750,"game");

    float x = 750 /2 ;
    float y = 750 / 2;
    float velocity = 0.2;

    while (WindowShouldClose() == false) {
        BeginDrawing();

        x = velocity + x;
        y = velocity + y;
        ClearBackground(BLACK);
       DrawText("Balgheri", 300 , 300 , 20, GREEN);

        

        EndDrawing();
    }
    
}
