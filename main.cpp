#include <iostream>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/timeb.h>
#include <stdio.h>
#include <fstream>
#include <istream>
<<<<<<< HEAD:main.cpp
// comentario 1
=======

>>>>>>> e62d9465d70a4f86ca17ebd8964bf8bdc685585b:main.cpp
#include "main.h"

bool g_appRunning = true;
using namespace std;

void ServiceStop( int sig )
{
	g_appRunning = false;
}

void usageMsg( void )
{
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	exit( EXIT_FAILURE );
}


int main( int argc, char** argv )
{
	try
	{
		while(g_appRunning)
		{
	}
	catch ( ... )
	{

	}

	cout << "Done." << endl;
	exit( EXIT_SUCCESS );
}
