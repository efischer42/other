/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efischer <efischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 14:45:03 by efischer          #+#    #+#             */
/*   Updated: 2019/06/18 11:30:28 by efischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "libft.h"

typedef struct	s_env
{
	char		*name;
	char		*value;
	char		*all;
}				t_env;

char	**env_to_tab(t_list *lst);

#endif