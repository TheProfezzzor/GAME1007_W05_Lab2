#include <iostream>
using namespace std;

// Init function. Sets up SDL and all subsystems.
void Init()
{
	cout << "Initializing game..." << endl;
}

// HandleEvents function. Handles events.
void HandleEvents()
{
	cout << "Handling events..." << endl;
}

// Update function. Process game objects.
void Update()
{
	cout << "Processing..." << endl;
}

// Render function. Updates the window.
void Render()
{
	cout << "Rendering..." << endl;
}

// Clean function. De-initialize SDL.
void Clean()
{
	cout << "Cleaning up..." << endl;
}

// Run function. Contains the game loop.
int Run()
{
	bool isRunning = true;
	char input;

	Init();
	while (isRunning) // This is our game loop.
	{
		HandleEvents(); // Input.
		Update();		// Processing.
		Render();		// Output.
		cout << "\nDo you want to quit? [y/n]: ";
		cin >> input;
		if (input == 'y')
			isRunning = false;
	}
	Clean();
	return 0;
}

// main function. Entry point of every C++ program.
int main()
{
	return Run();
}