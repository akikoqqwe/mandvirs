﻿#include <iostream>
#undef UNICODE
#include <windows.h>
#pragma comment(lib, "winmm")
#include <thread>
#include <fstream>

void makeFile() {

    for (int i = 0; i < 15; i++)
    {
        std::ofstream oFile("mandrika.exe", std::ios::app);
    }

}

void music() {
    for (int i = 0; i < 10; i++)
    {
        MessageBox(GetActiveWindow(), "inst: musical_history", "Мандрика", MB_ICONERROR);
        MessageBox(GetActiveWindow(), "ты хочешь шобы артём трахнув твою маму ?", "Мандрика", MB_YESNO);
        MessageBox(GetActiveWindow(), "дослухай пісню підорас", "Мандрика", MB_YESNO);
    }
}


int main()
{
    setlocale(LC_ALL, "ru");
    makeFile();
    PlaySound(TEXT("videoplayback.wav"), NULL, SND_FILENAME | SND_ASYNC);
    std::thread thr(music);
    thr.join();
    return 0;
}