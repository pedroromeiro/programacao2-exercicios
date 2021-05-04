#ifndef AEROPLANE_H_
#define AEROPLANE_H_
#include <string>

class Aeroplane {
	public:
		virtual int fly();
		int get_current_speed();
		void set_current_speed(int current_speed);
		int get_number_of_passengers();
		void set_number_of_passengers(int number_of_passengers);
		float get_top_speed();
		void set_top_speed(int top_speed);
		int get_number_of_turbines();
		void set_number_of_turbines(int number_of_turbines);
		float get_autonomy();
		void set_autonomy(float autonomy_in_kilometers);
		int get_size();
		void set_size(int size_in_meters);
		std::string get_name();
		void set_name(std::string name);


	private:
		int current_speed;
		int number_of_turbines;
		int size_in_meters;
		float autonomy_in_kilometers;
		float top_speed;
		int number_of_passengers;
		std::string name;

};

#endif /* AEROPLANE_H_ */
