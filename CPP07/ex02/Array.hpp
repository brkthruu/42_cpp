#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array
{
private:
	T               *_array;
	unsigned int    _n;

public:
	Array() : _array(new T[0]), _n(0) {};
	Array(unsigned int n) : _array(new T[n]), _n(n) {};
	Array(const Array& ref)
	{
		this->_array = new T[ref._n];
		*this = ref;
	};

	Array& operator=(const Array& ref)
	{
		if (this == &ref)
			return (*this);
		if (_n != ref.size())
		{
			if (_array)
			{
				delete [] _array;
			}	
		}
		_n = ref.size();
		// deep copy
		_array = new T[_n];
		for (unsigned int i = 0; i < _n; i++)
			_array[i] = ref._array[i];
		return (*this);
	};

	virtual ~Array()
	{
		delete []_array;
	};

	T& operator[](unsigned int idx)
	{
		if (idx < 0 || idx >= _n)
			throw OutofIndex();
		return (_array[idx]);
	};

	const T& operator[](unsigned int idx) const
	{
		if (idx < 0 || idx >= _n)
			throw OutofIndex();
		return (_array[idx]);
	};
	
	class OutofIndex : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Out of Index.");
		};
	};
	
	unsigned int    size(void) const
	{
		return(_n);
	};
};

#endif