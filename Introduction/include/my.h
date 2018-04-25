/*
** my.h for  in /home/kirito/etna/bfm/include
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Mon Dec  5 09:57:37 2016 YOUSSEF seif-eddine
** Last update Fri Dec  9 02:14:18 2016 YOUSSEF seif-eddine
*/

#ifndef			MY_H_
# define		MY_H_

# include		<stdlib.h>
# include		<time.h>

# define		NBCREA 5

typedef	struct		s_creature
{
  char			*name;
  int			lvl;
  int			pv;
  int			pvmax;
  int			pm;
  int			pmmax;
  struct s_creature	*prev;
  struct s_creature	*next;
}			t_creature;


typedef struct		s_team_chara
{
  char			*name_team;
  struct s_creature	*first;
  struct s_creature	*last;
  int			nb_chara;
}			t_team_chara;


typedef	struct		s_character
{
  char			*name;
  t_team_chara		*team;
  int			bool;
  int			bool_m;
}			t_character;


typedef	struct		s_bag
{
  int			magic_box;
  int			magic_sup;
  int			magic_master;
  int			potion;
}			t_bag;

typedef	struct		s_game
{
  t_character		*character;
  t_bag			*bag;
}			t_game;

typedef struct          s_pointer
{
  int                   (*pf)(t_game *game);
  char                  *str;
}			t_pointer;

void			my_putstr(const char *str);
int			help_me();
void                    my_putchar(const char c);
void			my_put_nbr(int n);
int                     my_strlen(const char *str);
int                     my_strcmp(const char *s1, const char *s2);
void                    my_putstr_color(const char *color, const char *str);
char			*my_strdup(const char *str);
void			my_putmsg_r(char *str);
void			my_putmsg_g(char *str);
void			my_putmsg_y(char *str);
void			my_putmsg_b(char *str);
int			explain();
char			*readline(void);
int                     magic_catch(t_game *game);
int			quit();
int			init_bag(t_game *game);
int			init_character(t_game *game, char *argv, char *name_t);
int			first_init_monster();
t_creature		*getCreature();
int			init_catch(t_game *game);
int			init_team_chara(t_character *character, char *nam_t);
int			init_catch_sup(t_game *game);
int			init_catch_master(t_game *game);
int			krakra_help(t_game *game);
void			add_crea(t_game *game, t_creature *crea);
int			magic_catch_sup(t_game *game);
int			magic_catch_master(t_game *game);
int			inventaire(t_game *game);
void			pars(int argc, char **argv, t_game *game);

#endif			/* ! MY_H_ !*/
