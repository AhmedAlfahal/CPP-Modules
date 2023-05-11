/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:45:40 by aalfahal          #+#    #+#             */
/*   Updated: 2023/05/07 21:15:36 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<iostream>
# include <iomanip>
# include"Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int		ContactCounter;
		int		CurrentContactNumbers;
		bool 	fullInfo();
	public:
		PhoneBook();
		~PhoneBook();
		bool	add();
		bool	search();
};