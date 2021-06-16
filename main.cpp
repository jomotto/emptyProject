#include <iostream>
#include <sstream>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/timeb.h>
#include <stdio.h>
#include <fstream>
#include <istream>
// comentario script 1727

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
