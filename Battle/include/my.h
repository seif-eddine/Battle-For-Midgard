/*
** my.h for  in /home/kirito/etna/bfm/include
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Mon Dec  5 09:57:37 2016 YOUSSEF seif-eddine
** Last update Fri Dec  9 02:14:34 2016 YOUSSEF seif-eddine
*/
#ifndef			MY_H_
# define		MY_H_

# include		<stdlib.h>
# include		<time.h>
# define NBCREA		5

typedef	struct		s_friend
{
  int			nb_elem;
  int			vivant;
  struct s_creature	*first;
  struct s_creature	*last;
}			t_friend;

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

typedef	struct		s_bag
{
  int			magic_box;
  int			magic_sup;
  int			magic_master;
  int			potion;
  t_creature		*combattant;
}			t_bag;

typedef	struct		s_character
{
  int			etat_quit;
  int			etat;
  char			*name;
  int			bool;
  int			bool_m;
  t_creature		*fighter;
}			t_character;

typedef	struct		s_game
{
  t_friend		*friend;
  t_creature		*rival;
  t_character		*character;
  t_bag			*bag;
}			t_game;

typedef struct          s_pointer
{
  int                   (*pf)(t_game *game);
  char                  *str;
}			t_pointer;

typedef struct          s_pointer_s
{
  int                   (*pf2)(t_game *game);
  char                  *str;
}			t_pointer_s;

void			my_putstr(const char *str);
void                    my_putchar(const char c);
void			my_put_nbr(int n);
void                    my_putstr_color(const char *color, const char *str);
void			my_putmsg_r(char *str);
void			my_putmsg_g(char *str);
void			my_putmsg_y(char *str);
void			my_putmsg_b(char *str);
void			add_crea(t_game *game);
char			*my_strdup(const char *str);
char			*readline(void);
t_creature		*getCreature();
int			help_me();
int                     my_strlen(const char *str);
int                     my_strcmp(const char *s1, const char *s2);
int			explain();
int                     magic_catch(t_game *game);
int			quit();
int			init_bag(t_game *game);
int			init_character(t_game *game, char *argv);
int			first_init_monster();
int			init_catch(t_game *game);
int			init_catch_sup(t_game *game);
int			init_catch_master(t_game *game);
int			krakra_help(t_game *game);
int			magic_catch_sup(t_game *game);
int			magic_catch_master(t_game *game);
int			inventaire(t_game *game);
int			etat(t_game *game);
int			team(t_game *game);
int			let_s_fight(t_game *game);
int			fire(t_game *game);
int			rest(t_game *game);
int			gamble(t_game *game);
int			slash(t_game *game);
int			fire_e(t_game *game);
int			rest_e(t_game *game);
int			gamble_e(t_game *game);
int			slash_e(t_game *game);
int			rnd_attaque(t_game *game);
int			init_friend(t_game **game);
int			ajout_rival(t_game *game);
int			stat_friend(t_game *game);
int			aff_rival(t_game *game);
int			prompt_choice(t_game *game);
int			you_are(t_game *game);
int			yoshi(t_game *game);
int			maskas(t_game *game);
int			bob_bomb(t_game *game);
int			koopa(t_game *game);
int			kucco(t_game *game);
int                     attack_monster(t_game *game);
int                     rnd_master(t_game *game);
int                     rnd_sup(t_game *game);
int                     msg_first(t_game *game, int msg);
int			free_me(t_game *game);
int			free_me_too(t_game *game);
int			reduc_cmd2(t_game *game, int msg);
int			reduc_cmd22(t_game *game, int msg);
int			reduc_cmd222(t_game *game, int msg);
void			pars(int argc, char **argv, t_game *game);

#endif			/* ! MY_H_ !*/
