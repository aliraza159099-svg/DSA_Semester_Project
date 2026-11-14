#include "include/raylib.h"
#include "include/raymath.h"


int main() {

    InitWindow(750,750,"game");

    float x = 750 /2 ;
    float y = 450 / 2;
    float r = 10;
    float velocity = 0.2;
    
    // DrawText("Balgheri", 300 , 300 , 20, GREEN);
    while (WindowShouldClose() == false) {
        BeginDrawing();

        x = velocity + x;
        y = velocity + y;
        ClearBackground(BLACK);

        DrawCircle(x,y,r,WHITE);

        DrawCircle(y,x,r,YELLOW);

        if(x > 755 -r || x < r){
            velocity *=-1;
        }

        EndDrawing();
    }
    
}