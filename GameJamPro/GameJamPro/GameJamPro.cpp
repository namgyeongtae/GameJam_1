// GameJamPro.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "Engine.h"

#undef main

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

