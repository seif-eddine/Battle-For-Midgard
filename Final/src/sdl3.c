/*
** sdl.c for  in /home/kirito/etna/bfm/copie/Final/src
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Dec  9 04:22:43 2016 YOUSSEF seif-eddine
** Last update Fri Dec  9 05:06:44 2016 YOUSSEF seif-eddine
*/

#include "../include/my.h"
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>

int                     run_sdl4()
{
  init_sdl();
  init_windows4();
  SDL_Quit();
  return (1);
}
