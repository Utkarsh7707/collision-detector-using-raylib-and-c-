#include<raylib.h>
#include<stdio.h>
// #include"ball.h"
#include"dino.hpp"
int main()
{
    printf("HELLo");
    InitWindow(1200,800,"collision detector");
    Rectangle obstacle = Rectangle{800,200,200,175};
    SetTargetFPS(60);
    Dino dino;
    Color Light_Green = (Color){204, 255, 204, 255};;
    while (WindowShouldClose() == false)
    {
        DrawRectangleLinesEx(obstacle,5,BLACK);
        bool check_collision = CheckCollisionRecs(dino.get_rec(),obstacle);
        dino.update();
        BeginDrawing();
        ClearBackground(Light_Green);
        dino.draw();
        dino.draw_hitbox(check_collision);
        EndDrawing();
    }
    



    CloseWindow();
    return 0;
    // InitWindow(800,600,"collision test");
    // SetTargetFPS(60);
    // Ball ball ;
    // while(!WindowShouldClose())
    // {
    //     ball.update();
        
    //     BeginDrawing();
    //         ClearBackground(GREEN);
    //         ball.draw();
    //     EndDrawing();
    // }   
}