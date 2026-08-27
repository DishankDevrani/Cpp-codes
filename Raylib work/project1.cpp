#include "raylib.h"

int main()
{
    InitWindow(800, 600, "My First Raylib Program");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawCircle(400, 300, 50, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}