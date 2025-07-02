#include "raylib.h"

int main() 
{
    int screenWidth = 800;
    int screenHeight = 450;
    int eyeSize = 50;
    //int mouthOpen = eyeSize-50;
    int mouthOpen = 1;

    InitWindow(screenWidth, screenHeight, "Frog :O");

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_C))
        {
            eyeSize += 1;
            mouthOpen += 2;


        } else {
            eyeSize = 50;
            mouthOpen = 1;
        }

        BeginDrawing();
        ClearBackground(GRAY);
        DrawText("Frog :O", 200, 400, 30, BLACK);
        DrawRectangle(300, 125, 205, 205, DARKGREEN);
        DrawRectangle(300, 125, 200, 200, GREEN);
        DrawCircle(350-eyeSize, 150, eyeSize+5, BLACK); //eyelid left
        DrawCircle(450+eyeSize, 150, eyeSize+5, BLACK); //eyelid right
        DrawCircle(350-eyeSize, 155, eyeSize, WHITE); //eye left
        DrawCircle(450+eyeSize, 155, eyeSize, WHITE); //eye right
        DrawCircle(350-eyeSize, 155, eyeSize/2.5, BLACK); //pupil left
        DrawCircle(450+eyeSize, 155, eyeSize/2.5, BLACK); //pupil right
        DrawRectangle(350, 250, 100, 5, DARKGREEN);
        DrawRectangle(355, 252, 90, mouthOpen, MAROON);

        EndDrawing();
    }
    CloseWindow();
}
