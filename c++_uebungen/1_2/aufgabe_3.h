/*
 * aufgabe_3.h
 *
 *  Created on: 27.10.2018
 *      Author: muellerd
 */

#ifndef AUFGABE_3_H_
#define AUFGABE_3_H_

namespace exercises {

std::string XML_HEADER = "<?xml version=\"1.0\" "
		"encoding=\"UTF-8\ standalone=\"yes\"?>\n";

int main(int, char**);

std::string writeSquare(int, int, int, int);
std::string writePoint(int, int, int);
std::string writeIndents(int);
void writeToFile(std::string, std::string);

}

#endif /* AUFGABE_3_H_ */
