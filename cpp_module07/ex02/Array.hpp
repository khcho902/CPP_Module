/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:53:13 by kycho             #+#    #+#             */
/*   Updated: 2021/04/12 17:06:28 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class Array
{
	T* _array;
	unsigned int _size;

public:
	Array(void) : _array(nullptr), _size(0) {};
	Array(unsigned int n) : _array(new T[n]), _size(n) {};
	Array(const Array& other)
	{
		*this = other;
	};
	~Array()
	{
		delete [] _array;
	};

	Array& operator=(const Array& other)
	{
		if (this == &other)
			return *this;

		if (_size != other._size)
		{
			if (_array)
				delete [] _array;
			_size = other._size;
			_array = new T[_size];
		}
		for (int i = 0; i < _size; i++)
		{
			_array[i] = other._array[i];
		}
		return *this;
	};

	T& operator[](const unsigned int idx)
	{
		if (idx < 0 || _size <= idx)
			throw Array::ArrayIndexOutOfBoundsException();
		
		return _array[idx];
	};

	const T& operator[](const unsigned int idx) const
	{
		if (idx < 0 || _size <= idx)
			throw Array::ArrayIndexOutOfBoundsException();
		
		return _array[idx];
	};

	unsigned int size(void) const
	{
		return _size;
	};

	class ArrayIndexOutOfBoundsException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Array index out of bounds!";
		}
	};
};

#endif
