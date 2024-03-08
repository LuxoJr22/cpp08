/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luxojr <luxojr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:05:02 by luxojr            #+#    #+#             */
/*   Updated: 2024/02/15 00:15:36 by luxojr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <list>


template < typename T>
void    easyfind(T cont, int nb)
{
    if (std::find(cont.begin(), cont.end(), nb) == cont.end())
        throw std::exception();
}

#endif