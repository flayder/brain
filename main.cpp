#include <iostream>
#include "includes/SDL.h"

#undef main

using namespace std;

int main(int argc, char* argv[])
{
    cout << SDL_Init(SDL_INIT_EVERYTHING) << endl;
    
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        cout << "ok" << endl;
    }
    else
    {
        cout << "not ok" << endl;
    }

    return 0;
}