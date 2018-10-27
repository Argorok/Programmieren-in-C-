/*
 * aufgabe_3.cpp
 *
 *  Created on: 27.10.2018
 *      Author: muellerd
 */

#include <fstream>
#include <iostream>
#include <string>
#include "aufgabe_3.h"

using namespace exercises;

/**
 *
 */
int main(int argc, char** argv) {

	std::string text;
	text += XML_HEADER;
	text += "<CadObjArray>\n";
	text += writeSquare(100, 100, 50, 1);
	text += "</CadObjArray>\n";
	return 0;
}

void writeFile (std::string text, std::string filePath) {
	std::ofstream outfile(filePath + ".txt");

	int size = sizeof(text);

	outfile << text;

	outfile.close();
}


std::string writeIndents (int indentationLevel) {
	std::string result;
	for (int i = 0; i < indentationLevel; ++i) {
		result += "\t";
	}
	return result;
}

std::string writePoint (int x, int y, int indentationLevel) {
	std::string result;
	// Declaration of Point
	result += writeIndents(indentationLevel);
	result += "<Point2d>\n";
	++indentationLevel;
	// Declaration of x coordinate
	result += writeIndents(indentationLevel);
	result += "<Number n=\"" + x + "\"/>\n";
	// Declaration of y coordinate
	result += writeIndents(indentationLevel);
	result += "<Number n=\"" + y + "\"/>\n";
	// End Point Definition
	--indentationLevel;
	result += writeIndents(indentationLevel);
	result += "</Point2d>\n";

	return result;
}

std::string writeSquare(int x, int y, int size, int indentationLevel) {
	std::string result;
	// Declaration of Square
	result += writeIndents(indentationLevel);
	result += "<Square>\n";
	++indentationLevel;
	// Declaration of center point
	result += writePoint(x, y, indentationLevel);
	// Declaration of square size
	result += writeIndents(indentationLevel);
	result += "<Number n=\"" + size + "\"/>\n";
	// End Square Definition
	--indentationLevel;
	result += writeIndents(indentationLevel);
	result += "</Square>\n";

	return result;
}
