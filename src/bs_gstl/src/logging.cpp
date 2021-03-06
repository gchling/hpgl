/*
   Copyright 2009 HPGL Team
   This file is part of HPGL (High Perfomance Geostatistics Library).
   HPGL is free software: you can redistribute it and/or modify it under the terms of the BSD License.
   You should have received a copy of the BSD License along with HPGL.

*/


#include <iostream>

namespace hpgl
{


	void log_system(double * A, double *b, int size)
	{
		for (int i = 0; i < size; ++i)
		{
			std::cout << "LOG: [";
			for (int j = 0; j < size - 1; ++j)
			{
				std::cout << A[i*size + j] << ", ";
			}
			std::cout << A[i*size + size - 1] << "] [";
			std::cout << b[i] << "]\n";
		}

	}

	void log_system_solution(bool system_solved, double * x, int size)
	{
		if (system_solved)
		{
			std::cout << "LOG: Solution: [";
			for (int i  = 0; i < size-1; ++i)
			{
				std::cout << x[i] << ",";
			}
			std::cout << x[size-1] << "]\n";
		}
		else
		{
			std::cout << "LOG: No solution.\n";
		}
	}

	void log_string(const char * message)
	{
		std::cout << "LOG: " << message << "\n";
	}

	
	
}
