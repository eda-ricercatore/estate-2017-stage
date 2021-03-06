/**
 * Utilities package:
 * Module to carry out miscellaneous tasks to facilitate software
 *	development.
 *
 * violated_assertion class:
 * Class that extends the std::exception class, and indicates that
 *	an assertion has been violated.
 *
 * Exceptions can be thrown and caught to deal with the problem,
 *	while assert statements will terminate the program.
 *
 * 
 *
 *
 * Copyright	(C)	<2010-2011>	<Zhiyang Ong>
 * @author Zhiyang Ong
 * @version 1.0.0
 * @since January 1, 2011
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Email address: echo "cukj -wb- 23wU4X5M589 TROJANS cqkH wiuz2y 0f Mw Stanford" | awk '{ sub("23wU4X5M589","F.d_c_b. ") sub("Stanford","d0mA1n"); print $5, $2, $8; for (i=1; i<=1; i++) print "6\b"; print $9, $7, $6 }' | sed y/kqcbuHwM62z/gnotrzadqmC/ | tr 'q' ' ' | tr -d [:cntrl:] | tr -d 'ir' | tr y "\n"	Che cosa significa?
 */

// Import appropriate header files from the C++ STL
#include <iostream>
#include <string>
#include <exception>

#ifndef __VIOLATEDASSERTION_H
#define __VIOLATEDASSERTION_H
using namespace std;

// ==================================================================

class violated_assertion: public exception {
//	private:
//		string ex_msg;

	// --------------------------------------------------------------
	
	public:
		// Default constructor
		violated_assertion();
		// Standard constructor
		violated_assertion(string error_message);

		// ----------------------------------------------------------

		// Print default error message
		static void print_err_msg();
};
#endif
