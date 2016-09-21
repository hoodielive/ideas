#include <stdio.h>
#include <stdlib.h>

int calculate_result(int white_balls[5], int power_ball)
{
	return 0; 
}

int main(int argc, char** argv)
{
	if (argc != 7)
	{
		fprintf(stderr, "Usage: %s power_ball (5 white balls)\n", argv[0]); 
		return -1; 
	}

	int power_ball = atoi(argv[1]); 
