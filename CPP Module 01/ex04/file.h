/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:54:42 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/18 08:56:51 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string	replaceWords(std::string line, std::string oldWord, std::string newWord);
bool	replcaingFile(char **av);

#endif