#include "aeroplane.h"
#include <string>
#include <iostream>

int Aeroplane::get_number_of_passengers() {
	return this->number_of_passengers;
}

void Aeroplane::set_number_of_passengers(int number_of_passengers) {
	this->number_of_passengers = number_of_passengers;
}
		
float Aeroplane::get_top_speed() {
	return this->top_speed;
}

void Aeroplane::set_top_speed(int top_speed) {
	this->top_speed = top_speed;
}
		
int Aeroplane::get_number_of_turbines() {
	return this->number_of_turbines;
}

void Aeroplane::set_number_of_turbines(int number_of_turbines) {
	this->number_of_turbines = number_of_turbines;
}
		
float Aeroplane::get_autonomy() {
	return this->autonomy_in_kilometers;
}

void Aeroplane::set_autonomy(float autonomy_in_kilometers) {
	this->autonomy_in_kilometers = autonomy_in_kilometers;
}
		
int Aeroplane::get_size() {
	return this->size_in_meters;
}

void Aeroplane::set_size(int size_in_meters) {
	this->size_in_meters = size_in_meters;
}

int Aeroplane::get_current_speed() {
	return this->current_speed;
}

void Aeroplane::set_current_speed(int current_speed) {
	this->current_speed = current_speed;
}

std::string Aeroplane::get_name() {
	return this->name;
}


void Aeroplane::set_name(std::string name) {
	this->name = name;
}

int Aeroplane::fly() {
	this->current_speed = 300;
    return this->current_speed;   
}