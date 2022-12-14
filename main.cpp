#include <iostream>
using namespace std;

class Circuit {
public:
	Circuit();
	int get_first_switch_state(); // 0 for down, 1 for up
	int get_second_switch_state();
	int get_lamp_state(); // 0 for off, 1 for on
	void toggle_first_switch();
	void toggle_second_switch();
private:
	int first_switch_state;
	int second_switch_state;
	int lamp_state;
};

Circuit::Circuit(){
	first_switch_state = 0;
	second_switch_state = 0;
	lamp_state = 0;
}

int Circuit::get_first_switch_state() {
	return first_switch_state;
}

int Circuit::get_second_switch_state() {
	return second_switch_state;	
}

int Circuit::get_lamp_state() {
	return lamp_state;
}

void Circuit::toggle_first_switch() {
	if(first_switch_state = 0) {
		first_switch_state = 1;
		if(lamp_state == 0) {
			lamp_state = 1;
		}
		else {
		      lamp_state = 0;
		}
	}
	else{
		first_switch_state = 1;
		if(lamp_state == 0) {
                        lamp_state = 1;
                }
                else {
                      lamp_state = 0;
                }
	}
}

void Circuit::toggle_second_switch() {
        if(second_switch_state = 0) {
                second_switch_state = 1;
                if(lamp_state == 0) {
                        lamp_state = 1;
                }
                else {
                      lamp_state = 0;
                }
        }
        else{
                second_switch_state = 1;
                if(lamp_state == 0) {
                        lamp_state = 1;
                }
                else {
                      lamp_state = 0;
                }
        }
}

int main() {
	Circuit c;
	cout << "First: " <<c.get_first_switch_state() << "Second: " << c.get_second_switch_state() << endl;
	cout << "Lamp: " << c.get_lamp_state() << endl;

	c.toggle_first_switch();
	cout << "First: " << c.get_first_switch_state() << "Lamp: " << c.get_lamp_state() << endl;
	
	c.toggle_second_switch();
	cout << "Lamp: " << c.get_lamp_state() << endl;

	return 0;
}
