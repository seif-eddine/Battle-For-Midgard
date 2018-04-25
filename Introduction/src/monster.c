/*
** monster.c for  in /home/kirito/etna/bfm/tokpah_m/src
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Tue Dec  6 09:28:15 2016 YOUSSEF seif-eddine
** Last update Fri Dec  9 00:20:49 2016 YOUSSEF seif-eddine
*/

#include "../include/my.h"

int                     Vitality(int pv)
{
  int                   i;
  int                   count;

  count = 10;
  i = 0;
  while (i != pv)
    {
      my_putstr("\033[34;7m");
      my_putchar(' ');
      my_putchar(' ');
      my_putstr("\033[0m");
      i++;
    }
  while (count > pv)
    {
      my_putstr("  ");
      count--;
    }
  return (0);
}

int                     first_init_monster(t_game *game)
{
  t_creature		*crea;

  crea = getCreature();
  add_crea(game, crea);
  my_putstr("\033[31;7m");
  my_putstr_color("red", " ----------------------------------\n");
  my_putstr("\033[0m");
  my_putstr_color("red", "|");
  my_putstr_color("red", crea->name);
  my_putstr_color("red", " | PV :  ");
  my_putstr("\033[0m");
  Vitality(crea->pv);
  my_putstr("\033[31;7m");
  my_putstr_color("red", "  \n---------------------------------\n");
  my_putstr("\033[0m");
  my_putstr_color("red", "\nPv :");
  my_put_nbr(crea->pv);
  my_putstr_color("red", " / ");
  my_put_nbr(crea->pvmax);
  my_putstr_color("red", "\nPm : ");
  my_put_nbr(crea->pm);
  my_putstr_color("red", " / ");
  my_put_nbr(crea->pmmax);
  my_putchar('\n');
  return (0);
}

void			add_crea(t_game *game, t_creature *crea)
{
  if (game->character->team->first == NULL)
    {
      game->character->team->first = crea;
      game->character->team->last = crea;
      game->character->team->first->prev = NULL;
      game->character->team->first->next = NULL;
    }
  else
    {
      crea->next = NULL;
      crea->prev = game->character->team->last;
      game->character->team->last->next = crea;
      game->character->team->last = crea;
    }
  game->character->team->nb_chara = game->character->team->nb_chara + 1;
}
