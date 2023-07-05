/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:12:57 by aalfahal          #+#    #+#             */
/*   Updated: 2023/07/05 13:08:29 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure( const Cure &aCure);
		~Cure();
		Cure & operator=( const Cure &aCure );
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif