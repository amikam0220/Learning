/*
This program sounds the bell when driver is on seat AND haven't closed the doors. Use the general framework and the function shells, replace the code inside  the control_action() function with your own code.

Note: This code is designed to run in an infinite loop to mimic a real control system. 
If you prefer to read the inputs from a file, modify the code appropriately to terminate the loop when all the inputs have been processed.

run this file as : gcc filename.c -o executableName

*/


#include <stdio.h> //This is useful to do i/o to test the code
#include <stdlib.h> // This is useful to use exit() function

// sensors
unsigned int driver_on_seat;
unsigned int driver_seat_belt_fastened;
unsigned int engine_running;
unsigned int doors_closed;
unsigned int key_in_car;
unsigned int door_lock_lever;
unsigned int brake_pedal;
unsigned int car_moving;

// actuators
unsigned int bell;
unsigned int door_lock_actuator;
unsigned int brake_actuator;

// operators to control file
FILE *input = NULL;
FILE *output = NULL;
int IsEOF = 0;

void read_inputs_from_ip_if(){

	//open the file storing state of sensors at beginning for first reading
	if (!input){
		input = fopen("./Input.txt", "r");
	}

	//mark if EOF and close input file
	if (fscanf(input, "%u", &driver_on_seat) == EOF){
		IsEOF = 1;
		fclose(input);
		return;
	}
	// to read the current state of the available sensors
	fscanf(input, "%u", &driver_seat_belt_fastened);
	fscanf(input, "%u", &engine_running);
	fscanf(input, "%u", &doors_closed);
	fscanf(input, "%u", &key_in_car);
	fscanf(input, "%u", &door_lock_lever);
	fscanf(input, "%u", &brake_pedal);
	fscanf(input, "%u", &car_moving);

	return;
}

void write_output_to_op_if(){

	//exit if the input file reached EOF
	if (IsEOF){
		fclose(output);
		exit(0);
	}

	if (!output){
		output = fopen("./Output.txt", "w");
	}

	//to display/print the state of the 3 actuators (DLA/BELL/BA)
	fprintf(output, "%u ", bell);
	fprintf(output, "%u ", door_lock_actuator);
	fprintf(output, "%u\n", brake_actuator);


	return;
}


//The code segment which implements the decision logic
void control_action(){

	/*
	The code given here sounds the bell when driver is on seat 
	AND hasn't closed the doors. (Requirement-2)
 	Replace this code segment with your own code.
	*/

	//control bell
	if (engine_running && (!driver_seat_belt_fastened || !doors_closed))
	{
		bell = 1;
	}
	else
	{
		bell = 0;
	}

	//control door lock actuator
	if (door_lock_lever && (driver_on_seat || !key_in_car))
	{
		door_lock_actuator = 1;
	}
	else
	{
		door_lock_actuator = 0;
	}

	//control brake actuator
	if (brake_pedal && car_moving)
	{
		brake_actuator = 1;
	}
	else
	{
		brake_actuator = 0;
	}

}

/* ---     You should not have to modify anything below this line ---------*/

int main(int argc, char *argv[])
{
	
	/*The main control loop which keeps the system alive and responsive forever, 
	until the system is powered off */
	for (; ; )
	{
		read_inputs_from_ip_if();
		control_action();
		write_output_to_op_if();
	}
	
	return 0;
}
