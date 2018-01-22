
#ifndef LEMIN_H
# define LEMIN_H

# include <unistd.h>
# include <stdio.h>
# include "/libft/libft.h"
# include <stdlib.h>

typedef struct		s_room
{
	char			start;
	int				x;
	int				y;
	int             ants;
	char            *name;
	char			**links;
	struct s_room	*next;
}					t_room;



#endif 