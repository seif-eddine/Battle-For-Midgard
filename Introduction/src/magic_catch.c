/*
** magic_catch.c for  in /home/kirito/etna/bfm/tokpah_m/src
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Tue Dec  6 09:43:24 2016 YOUSSEF seif-eddine
** Last update Tue Dec  6 16:29:23 2016 TOKPAHOLOU Marvyne
*/

#include "../include/my.h"

int			init_catch(t_game *game)
{
  int			rnd;

  if (game->bag->magic_box > 0)
    {
      game->bag->magic_box -= 1;
      my_putstr_color("yellow", game->character->name);
      my_putstr_color("yellow", " utilise une magic box !\n");
      rnd = rand() % 3;
      if (rnd == 1 && game->character->bool_m == 0)
	{
	  my_putstr_color("green", "Et hop !\n");
	  my_putstr_color("red", game->character->team->last->name);
	  my_putstr_color("green", " attrapé !\n");
	  add_crea(game, game->character->team->last);
	  game->character->bool_m +=1;
	}
      else if (game->character->bool_m == 0)
	{
	  my_putstr_color("red", "La capture à échoué !\n");
	  /* if (game->character->team->nb_chara == 0) */
	  my_putstr_color("red", "Le krakra-Monster vous pousse violament\n");
	  my_putstr_color("red", "\nUn nouvel enemie est apparue : \n");
	  first_init_monster(game);
	}
      else
	my_putstr_color("blue", "Utilisation raté\n");
    }
  else
    my_putstr_color("red", "Vous ne posseder pas de magic_box !\n");
  return (0);
}

int			init_catch_sup(t_game *game)
{
  int			rnd;

  if (game->bag->magic_sup > 0)
    {
      my_putstr_color("yellow", game->character->name);
      my_putstr_color("yellow", " utilise une super magic box !\n");
      rnd = rand() % 2;
      if (rnd == 1)
	{
	  my_putstr_color("green", "Et hop !\n");
	  /* my_putstr_color("red", crea->name); */
	  my_putstr_color("green", " attrapé !\n");
	}
      else
	{
	  my_putstr_color("red", "La capture à échoué !\n");
	  /* if (game->character->team->nb_chara == 0) */
	  my_putstr_color("red", "Le krakra-Monster vous pousse violament\n");
	  my_putstr_color("red", "\nUn nouvel enemie est apparue : \n");
	  first_init_monster(game);
	}
    }
  else
    my_putstr_color("red", "Vous ne posseder pas de super-magic box !\n");
  return (0);
}

int			init_catch_master(t_game *game)
{
  if (game->bag->magic_master > 0)
    {
      my_putstr_color("yellow", game->character->name);
      my_putstr_color("yellow", " utilise une master magic box !\n");
      my_putstr_color("green", "Et hop !\n");
      /* my_putstr_color("red", crea->name); */
      my_putstr_color("green", " attrapé !\n");
    }
  else
    my_putstr_color("red", "Vous ne posseder pas de master-magic box !\n");
  return (0);
}
