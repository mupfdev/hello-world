/** @file main.c
 *
 *  A simple project template.
 *
 *  To the extent possible under law, Michael Fitzmayer has waived all
 *  copyright and related or neighboring rights to hello world.  This
 *  work is published from: Germany.
 *
 *  CC0 http://creativecommons.org/publicdomain/zero/1.0/
 *  SPDX-License-Identifier: CC0-1.0
 *
 **/

#include <stdlib.h>
#include "SDL.h"
#include "SDL_main.h"

int main(int argc, char* argv[])
{
    int status = EXIT_SUCCESS;

    if (0 != SDL_Init(SDL_INIT_VIDEO))
    {
        SDL_Log("Unable to initialise SDL: %s", SDL_GetError());
        status = EXIT_FAILURE;
    }

    SDL_Log("Hello world.");

    SDL_Quit();

    return status;
}
