#include "fighteraircraft.h"
#include <iostream>
#include <string>

Fighter_Aircraft::Fighter_Aircraft(std::string name, int number_of_passengers, 
int number_of_turbines, int size_in_meters, float autonomy_in_kilometers, 
float top_speed, int number_of_missiles) {
	set_name(name);
	set_number_of_turbines(number_of_turbines);
	set_size(size_in_meters);
	set_autonomy(autonomy_in_kilometers);
	set_top_speed(top_speed);
	set_number_of_passengers(number_of_passengers);
	set_number_of_missiles(number_of_missiles);
	set_current_speed(0);
}


void Fighter_Aircraft::shoot() {
	set_number_of_missiles(get_number_of_missiles()-1);
}

int Fighter_Aircraft::get_number_of_missiles() {
	return this->number_of_missiles;
}

void Fighter_Aircraft::set_number_of_missiles(int number_of_missiles) {
	this->number_of_missiles = number_of_missiles;
}

void Fighter_Aircraft::shoot(int number_of_missiles_to_fire) {
	set_number_of_missiles(get_number_of_missiles()-number_of_missiles_to_fire);
}


void Fighter_Aircraft::fly_at_max_speed() {
	set_current_speed(get_top_speed());
}


int Fighter_Aircraft::fly() {
	set_current_speed(get_number_of_turbines()*700);
	if (get_current_speed() > get_top_speed()) {
		set_current_speed(get_top_speed());
	}

	return get_current_speed();
}
