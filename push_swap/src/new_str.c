//
// Created by Gaynell Hanh on 7/16/21.
//
#include "../includes/push_swap.h"

char *new_str(char *old, char *add)
{
	char	*new;
	new = ft_strjoin(old, add);
	free(old);
	return (new);
}