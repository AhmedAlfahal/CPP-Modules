/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:11:49 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/18 08:56:22 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int main(int ac, char **av)
{
	if (ac == 4)
		if (replcaingFile(av) == false)
			return (1);
	return (0);
}