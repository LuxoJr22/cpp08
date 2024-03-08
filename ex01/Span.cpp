/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luxojr <luxojr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 00:20:26 by luxojr            #+#    #+#             */
/*   Updated: 2024/02/15 16:23:01 by luxojr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


Span::~Span()
{
}

void Span::addNumber(int nb)
{
	if (this->_list.size() == this->_size)
		throw std::exception();
	this->_list.push_back(nb);
	this->_list.sort();
}

int	Span::longestSpan()
{
	if (this->_size < 2 || this->_list.size() < 2)
		throw std::exception();
	return (this->_list.back() - this->_list.front());
}

int Span::shortestSpan()
{
	std::list<int>::iterator	it;
	std::list<int>::iterator	next;
	std::list<int>::iterator	end;
	int							min;
	
	if (this->_size < 2 || this->_list.size() < 2)
		throw std::exception();
	it = this->_list.begin();
	next = it++;
	end = this->_list.end();
	min = abs(*it - *next);
	while (next != end)
	{
		if (abs(*it - *next) < min)
		{
			min = abs(*it - *next);
		}
		it ++;
		next ++;
	}
	
	return (min);
}

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_list = rhs._list;
		this->_size = rhs._size;
		this->_it = rhs._it;
	}
	return *this;
}
