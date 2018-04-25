/*
** my_cmd5.c for  in /home/kirito/etna/bfm/tokpah_m/Etape_2
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Dec  9 00:02:40 2016 YOUSSEF seif-eddine
** Last update Fri Dec  9 00:03:32 2016 YOUSSEF seif-eddine
*/
#include "../include/my.h"

int                     kucco(t_game *game)
{
  t_creature            *crea;

  crea = game->friend->first;
  while (crea != NULL && game->friend->vivant == 1)
    {
      if (my_strcmp(crea->name, "Kucco") == 0)
	{
	  game->bag->combattant = crea;
	  if (game->bag->combattant->pv > 0)
	    {
	      my_putstr_color("blue", "Vous avez invoquez : ");
	      my_putstr_color("yellow", "Kucco");
	    }
	  else if (game->bag->combattant->pv < 0)
	    {
	      game->friend->vivant = 0;
	      my_putstr_color("red", "Votre krakamon est K.O\n");
	    }
	}
      else
	my_putstr_color("red", "Vous ne pouvez invoque un krakramon K.O");
      crea = crea->next;
    }
  return (0);
}
