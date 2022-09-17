
#pragma once

#include "Platform/WIN32/IApplication.h"


class Application : public IApplication {

	//Application

public:
	/* - Application constructor - */
	Application();

	/* - Application Deconstructor - */
	~Application();


public:

	/* - Called to setup per game settings - */
	VOID SetupPerGameSettins();

	/* - Called to Initialize the Application - */
	VOID Initialize();

	/* - Game Loop - called on a loop while the Application is running - */
	VOID Update();

};