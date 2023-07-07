/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:54 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/07 22:40:02 by aalfahal         ###   ########.fr       */
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