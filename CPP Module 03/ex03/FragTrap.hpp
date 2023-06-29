/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:51:30 by aalfahal          #+#    #+#             */
/*   Updated: 2023/06/27 16:51:31 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{

    public:
        FragTrap();
        FragTrap( std::string name );
        FragTrap( const FragTrap &aFragTrap );
        ~FragTrap();
        FragTrap & operator= ( const FragTrap &aFragTrap );
        void highFivesGuys( void );

};

#endif