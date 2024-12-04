#include<raylib.h>
class Dino
{
    public:
    Dino();
    ~Dino();
    void update();
    void draw()const;
    void draw_hitbox( bool is_colliding);
    Rectangle get_rec();
    private:
    Texture2D image;
    Vector2 position;
    int speed;
};