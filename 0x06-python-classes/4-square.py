#!/usr/bin/python3
""" Square tasks"""

class Square:
    def _init_(self, size=0):
        self.size = size
    @property
    def size(self):
    	return self._size
    @size.setter
    def size(self, value):
	if not isinstance(value, int):
            raise TypeError('size must be an integer')
                 if value < 0:
                    raise ValueError('size must be >= 0')
                self._size = value

        def area(self):
            return self._size ** 2
