/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:12:34 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/29 23:48:27 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include"ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( std::string aName );
		ScavTrap( const ScavTrap &aScavTrap );
		~ScavTrap();
		ScavTrap & operator= (const ScavTrap &aScavTrap);
		void guardGate();
        void attack( const std::string& target );
};

#endif