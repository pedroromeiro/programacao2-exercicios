#include "jetplane.h"
#include <string>

Jet_Plane::Jet_Plane(std::string name, int number_of_passengers, int number_of_turbines, int size_in_meters, float autonomy_in_kilometers, float top_speed, std::string company) {
	set_company(company);
	set_number_of_turbines(number_of_turbines);
	set_size(size_in_meters);
	set_autonomy(autonomy_in_kilometers);
	set_top_speed(top_speed);
	set_number_of_passengers(number_of_passengers);
	set_current_speed(0);
	set_name(name);
}

void Jet_Plane::stop_and_get_passengers(int number_of_extra_passengers) {
	set_number_of_passengers(get_number_of_passengers() + number_of_extra_passengers);
}

std::string Jet_Plane::get_company() {
	return this->company;
}

void Jet_Plane::set_company(std::string company) {
	this->company = company;
}

void Jet_Plane::fly_with_max_capacity() {
	set_current_speed(get_top_speed()/3);
}

int Jet_Plane::fly() {
	set_current_speed(get_number_of_turbines()*300);
	if (get_current_speed() > get_top_speed()) {
		set_current_speed(get_top_speed());
	}

	return get_current_speed();
}
