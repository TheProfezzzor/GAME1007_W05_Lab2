#include <iostream>
using namespace std;

// Init function. Sets up SDL and all subsystems.
void Init()
{
	cout << "Initializing game..." << endl;
}

// Run function. Contains the game loop.
int Run()
{
	bool isRunning = true;
	char input;

	Init();
	while (isRunning) // This is our game loop.
	{
		
	}

	return 0;
}

// main function. Entry point of every C++ program.
int main()
{
	return Run();
}