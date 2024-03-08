/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luxojr <luxojr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:44:33 by luxojr            #+#    #+#             */
/*   Updated: 2024/03/04 19:40:34 by luxojr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <list>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack( MutantStack const & src ) { *this = src;};
		~MutantStack() {};

		MutantStack &		operator=( MutantStack const & rhs ) {(void)rhs;};


		class iterator : public std::iterator<std::input_iterator_tag, T>
		{
			public:
				iterator(int& top, int l ) 
				{
					int i = 1;

					nb = &top;
					while (i < l)
					{
						nb --; 
						i ++;
					}
					if (l == -1)
						nb ++;
				};
				~iterator() {};
				iterator(const iterator & src) { *this = src;}
				iterator & operator=( iterator const & rhs ) { this->nb = rhs.nb; return *this;}

				T	operator*() const { return (*nb); }
				void	operator++() { nb ++; }
				void	operator--() { nb --; }
				bool	operator!=(const iterator &c) { return (nb != c.nb);}
				bool	operator==(const iterator &c) { return (nb == c.nb);}

			private:
				T	*nb;
		};
		iterator begin() { return (iterator(this->top(), this->size()));};
		iterator end() { return (iterator(this->top(), -1));};
};


#endif 