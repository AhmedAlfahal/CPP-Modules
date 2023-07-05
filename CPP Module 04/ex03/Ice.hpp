/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:54 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/05 13:11:11 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice( const Ice &aIce); 
		~Ice();
		Ice & operator=( const Ice &aIce );
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif