#ifndef H_FOOD
#define H_FOOD

class Food
{
public:
    Vector2 position;
    Texture2D texture;
    // the food constructor
    Food();
    // the food destructor
    ~Food();
    void unload();
    // the draw method to draw the food object
    void draw();
};

#endif