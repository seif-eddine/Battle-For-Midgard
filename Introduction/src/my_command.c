/*
** my_command.c for  in /home/kirito/etna/bfm/tokpah_m/src
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Tue Dec  6 13:16:15 2016 YOUSSEF seif-eddine
** Last update Tue Dec  6 16:25:37 2016 TOKPAHOLOU Marvyne
*/

#include "../include/my.h"

int                                     krakra_help(t_game *game)
{
  game->character->bool = 0;
  my_putstr_color("green", "Je suis là !\n");
  my_putstr_color("green", "Voici les commandes que tu peux utiliser\n");
  my_putstr_color("blue", "help me\n");
  my_putstr_color("blue", "magic catch\n");
  my_putstr_color("blue", "super-magic catch\n");
  my_putstr_color("blue", "master-magic catch\n");
  my_putstr_color("blue", "inventaire\n");
  my_putstr_color("blue", "krakra-help\n");
  my_putstr_color("blue", "quit\n");
  return (0);
}

int                                     help_me(t_game *game)
{
  if (game->character->bool_m == 0)
    {
      my_putstr_color("red", "Vous fuyer le combat ");
      my_putstr_color("red", "mais un nouveaux monstre apparait.\n");
      first_init_monster(game);
    }
  else if (game->character->bool_m == 1)
    {
      my_putstr_color("red", "Krakra master : Eh oh !\n");
      my_putstr_color("red", "Tu ne peux demander de l'aide si ");
      my_putstr_color("red", "tu n'as personne en face de toi !\n");
    }
  return (0);
}

int                                     inventaire(t_game *game)
{
  if (game->bag->potion > 0)
    {
      my_putstr_color("yellow", "Potion : ");
      my_put_nbr(game->bag->potion);
      my_putchar('\n');
    }
  if (game->bag->magic_box > 0)
    {
      my_putstr_color("yellow", "Master box : ");
      my_put_nbr(game->bag->magic_box);
      my_putchar('\n');
    }
  if (game->bag->magic_sup > 0)
    {
      my_putstr_color("yellow", "Super-Magic box : ");
      my_put_nbr(game->bag->magic_sup);
      my_putchar('\n');
    }
  if (game->bag->magic_master > 0)
    {
      my_putstr_color("yellow", "Master-magic box : ");
      my_put_nbr(game->bag->magic_master);
      my_putchar('\n');
    }
  return (0);
}

int                                     quit(t_game *game)
{
  game->character->bool = 1;
  return (0);
}
