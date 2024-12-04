#include<raylib.h>
#include"dino.hpp"
#include<stdio.h>
Dino::Dino() {
    image = LoadTexture("/home/utkarsh/Desktop/c++ games/collision/graphics/dino.png");

    position.x = 100;
    position.y = 100;
    speed = 10;
}


Dino::~Dino()
{
    UnloadTexture(image);
}

void Dino::draw() const
{
    DrawTextureV(image,position,WHITE);
}

void Dino::update()
{
    if(position.x +image.width < GetScreenWidth())
    {
        if(IsKeyDown(KEY_RIGHT)) position.x += speed;
    }
    if(position.x  >= 0)
    {
        if(IsKeyDown(KEY_LEFT)) position.x -= speed;
    }
    if(position.y >= 0)
    {
        if(IsKeyDown(KEY_UP)) position.y -= speed;
    }
    if(position.y + image.height< GetScreenHeight())
    {
        if(IsKeyDown(KEY_DOWN)) position.y += speed; 
    }
}

Rectangle Dino::get_rec()
{
    return Rectangle{position.x,position.y,float(image.width),float(image.height)};
}

void Dino::draw_hitbox(bool is_colliding)
{
    Color clr;
    if(is_colliding == true)
    {
        clr = RED;
    }
    if(is_colliding == false)
    {
        clr = GREEN;
    }
    DrawRectangleLinesEx(get_rec(),3,clr);
    // Rectangle hit = Rectangle{position.x,position.y,image.width,image.height};
    // DrawRectangleLinesEx(hit,5,RED);
}