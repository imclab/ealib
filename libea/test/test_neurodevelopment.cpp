/* test_neuroevolution.cpp
 *
 * This file is part of EALib.
 *
 * Copyright 2014 David B. Knoester.
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
 */
#include <boost/test/unit_test.hpp>

#include <ea/evolutionary_algorithm.h>
#include <ea/generational_models/moran_process.h>
#include <ea/fitness_functions/pole_balancing.h>
#include <ea/ann/neurodevelopment.h>
#include <ann/basic_neural_network.h>
using namespace ealib;

BOOST_AUTO_TEST_CASE(test_neurodevelopment) {
	typedef evolutionary_algorithm
	< indirect<graph::developmental_graph, ann::basic_neural_network< >, translators::phi>
	, pole_balancing
	, mutation::operators::delta_growth
	, recombination::asexual
	, generational_models::moran_process< >
	, ancestors::random_delta_graph
	> ea_type;

	ea_type ea;
}
