#include "./include/raylib.h"
#include "./include/food.h"
#include "./include/globals.h"

// creating the food obj
Food::Food()
{
    Image image = LoadImage("Graphics/food.png");
    ImageResize(&image, CELL_SIZE, CELL_SIZE);
    texture = LoadTextureFromImage(image);
    UnloadImage(image);
}
// the food destructor
Food::~Food()
{
    UnloadTexture(texture);
}
void Food::unload()
{
    if (texture.id > 0)
    {
        UnloadTexture(texture);
        texture = {0};
    }
}
// the draw method to draw the food object
void Food::draw()
{
    DrawTexture(texture, position.x * CELL_SIZE, position.y * CELL_SIZE, WHITE);
}