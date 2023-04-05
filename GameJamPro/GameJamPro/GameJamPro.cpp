// GameJamPro.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "SDL.h"
#include "Engine.h"

#undef main

#pragma comment(lib, "SDL2main.lib")
#pragma comment(lib, "SDL2.lib")

SDL_Window* window;
SDL_Renderer* renderer;


int main()
{
    Engine* mainEngine = Engine::GetInstance();
    mainEngine->Init();

    while (mainEngine->IsRunning())
    {
        mainEngine->Events(); // 사용자 입력 처리
        mainEngine->Update(0.1);
        mainEngine->Render();
    }

    mainEngine->Clean();
    return 0;
}

//printf("Start\n");
//
//// Intialize SDL
//if (SDL_Init(SDL_INIT_VIDEO) < 0)
//{
//    printf("Could not initialize SDL! (%s)\n", SDL_GetError());
//    return -1;
//}
//
//// Create window
//window = SDL_CreateWindow("", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_OPENGL);
//if (window == NULL)
//{
//    printf("Could not create window! (%s)\n", SDL_GetError());
//    return -1;
//}
//
//// Create renderer
//renderer = SDL_CreateRenderer(window, -1,
//    SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_TARGETTEXTURE);
//if (renderer == NULL)
//{
//    printf("Could not create renderer! (%s)\n", SDL_GetError());
//    return -1;
//}
//
//// Draw Rect
//SDL_Rect r = { 50, 50, 100, 100 };
//SDL_SetRenderDrawColor(renderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
//SDL_RenderDrawRect(renderer, &r);
//
//// Update Screen
//SDL_RenderPresent(renderer);
//
//SDL_Event event;
//int done = 0;
//
//while (!done)
//{
//    SDL_PollEvent(&event);
//
//    if (event.type == SDL_QUIT)
//    {
//        done = 1;
//    }
//}
//
//SDL_DestroyRenderer(renderer);
//SDL_DestroyWindow(window);
//SDL_Quit();
//
//printf("End\n");
//
//return 0;