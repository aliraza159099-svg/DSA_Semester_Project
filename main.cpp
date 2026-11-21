#include "include/raylib.h"
#include "include/raymath.h"
Color green = {173,204,96,255};
Color darkGreen = {43,51,24,255};

int cellSize = 30;
int cellCount = 25;

//creating the food obj
class Food
{
    public:
        Vector2 position = {5,6};
        Texture2D texture = {0};
        //the food constructor
        Food(){
            Image image = LoadImage("Graphics/food.png");
            ImageResize(&image,cellSize,cellSize);
            texture = LoadTextureFromImage(image);
            UnloadImage(image);

        }
        //the food destructor
        ~Food(){
            UnloadTexture(texture);
        }
        void unload() {
            if(texture.id > 0){
                UnloadTexture(texture);
                texture = {0};
            }
        }
        //the draw method to draw the food object
        void draw(){
            DrawTexture(texture, position.x * cellSize, position.y * cellSize, WHITE);
        }
};


int main() {

    InitWindow(cellSize*cellCount ,cellSize*cellCount,"Snake Game");
    SetTargetFPS(60);//set the speed of the moving object same for all devices

    //food oject
    Food food;

    while (WindowShouldClose() == false) //the loop will run until escape is not pressed or window isn't closed
    {
        //starts the drawing
        BeginDrawing();

        //set the background to green 
        ClearBackground(BLACK);

        //calling the method of Food
        food.draw();

        if(IsKeyPressed(KEY_UP)){
            food.position.y -= 2;
        }
         if(IsKeyPressed(KEY_DOWN)){
            food.position.y +=2;
        }
         if(IsKeyPressed(KEY_RIGHT)){
            food.position.x +=2;
        }
         if(IsKeyPressed(KEY_LEFT)){
            food.position.x -=2;
        }
        

        //end the drawing
        EndDrawing();

    }
    food.unload();
    CloseWindow();
}
