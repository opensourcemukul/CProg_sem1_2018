#include <stdio.h>

void func_name(int height_saksham){
	if (height_saksham > 6)
	{
		printf("make him short\n");
	}
	if(height_saksham > 5){
		printf("chill\n");
	}
	else {
		printf("give him complan\n");
	}
}

int main(int argc, char const *argv[])
{
	float height_saksham = 6.5;
	func_name(height_saksham);
	float height_gourav = 5.5;
	func_name(height_gourav);
	
	return 0;
}