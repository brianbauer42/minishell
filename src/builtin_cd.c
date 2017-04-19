/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins_cd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:44:49 by bbauer            #+#    #+#             */
/*   Updated: 2017/04/13 19:23:45 by bbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int			builtin_cd(char **args, char ***env)
{
	if (env)
		chdir(args[1]);
	return (MINISHELL_CONTINUE);
}
