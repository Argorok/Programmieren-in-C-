/*
 * aufgabe_2.cpp
 *
 *  Created on: 27.10.2018
 *      Author: muellerd
 */

#include <iostream>
#include <fstream>
#include "aufgabe_2.h"

using namespace exercises;

/**
 * Schreibt "Hallo Welt" in eine Datei.
 * @param argc
 * @param argv
 *
 * @return 0
 *
 */
int main2 (int argc, char** argv) {
	const char* text = "Hello World!";
	std::ofstream outfile("helloworld.txt");

	int size = sizeof(text);

	outfile << text;

	outfile.close();

	return 0;
}


