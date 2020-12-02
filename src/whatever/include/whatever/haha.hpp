#include <iostream>
#include <stdio.h>

#define PWM_NO_RED 	1380
#define PWM_NO_GREEN 1600
#define PWM_SIMPLE 1370

#define MAX_THROTTLE 1800//1750
#define MIN_THROTTLE 1400

#define MAX_STEERING 1900
#define MIN_STEERING 1100

int width = 640;
int height = 200;
int x_init = 0;
int y_init =200;

int red_setpoint = 50; 
int green_setpoint = 560;
int center_setpoint = 320;

float update_time=0.01;

float kp = 1.65;//1.5
float ki = 1;//1
float kd = 0.5;//0.5

int x_init_red=0;
int y_init_red=180;

int x_init_green=360;
int y_init_green=180;
							//nuc  pc
int LowH_red 	= 0; 		//0  
int HighH_red 	= 184;		//184 
int LowS_red 	= 130;      //130  65
int HighS_red 	= 248;      //248  246
int LowV_red 	= 49;		//49   242
int HighV_red 	= 230;		//230  255
int max_radius_red 	= 1000; 
int min_radius_red 	= 30;
int Noise_red 	= 15;

int LowH_green	= 40;
int HighH_green = 96;
int LowS_green 	= 35; 
int HighS_green = 185;
int LowV_green 	= 49;
int HighV_green = 168;
int max_radius_green = 1000;
int min_radius_green = 30;
int Noise_green = 15;

#define STEERING 0
#define THROTTLE 2

#define SIMPLE_PIN 3
#define RECORD_PIN 4

#define PWM_UP 	1700
#define PWM_LOW 1300

#define MIDDLE_PWM 	1520

FILE *steer_file;
FILE *throttle_file;

int number_camera = 0;

int noise_state = 15;

int zero_flag 		= 0;
int simple_manuver 	= 1;
int simple_speed 	= 2;
int record_flag 	= 3;
int player_flag 	= 4;
int zero_record		= 5;

int left_header 	= 1;
int right_header 	= 2;
int center_header 	= 0;

float delta_t = 0.01;
float initial_time = 0; 

