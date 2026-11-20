#include "include/raylib.h"
#include "include/raymath.h"
Color green = {173,204,96,255};
Color darkGreen = {43,51,24,255};

int cellSize = 30;
int cellCount = 25;

//creating the food obj
struct Food
{
    public:
        Vector2 position = {5,6};
        Texture2D texture;
        //the food constructor
        Food(){
            Image image = LoadImage("Graphics/food.png");
            texture = LoadTextureFromImage(image);
            UnloadImage(image);

        }
        //the food destructor
        ~Food(){
            UnloadTexture(texture);
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
    Food food = Food();

    while (WindowShouldClose() == false) //the loop will run until escape is not pressed or window isn't closed
    {
        //starts the drawing
        BeginDrawing();

        //set the background to green 
        ClearBackground(green);

        //calling the method of Food
        food.draw();

        //end the drawing
        EndDrawing();

    }
    CloseWindow();
}
