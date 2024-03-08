/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luxojr <luxojr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:47:15 by luxojr            #+#    #+#             */
/*   Updated: 2024/03/04 10:53:51 by luxojr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>

int main(void)
{
    std::list<int>   list;
    std::vector<int> vec(45, 100);
    //std::vector<int> vec = {45, 84, 10, 79, 3};

    list.push_back(5);
    list.push_back(45);
    list.push_back(6);
    list.push_back(12);
    list.push_back(10);

    easyfind(vec, 100);
    easyfind(list, 10);
    return (0);
}