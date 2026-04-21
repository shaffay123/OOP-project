#include "FileHandler.h"
void FileHandler::saveSlots(ParkingLot* lot) {
	ofstream outFile("slots.txt");
	if (outFile.is_open()) {
		for (int i = 0; i < lot->getTotalSlots(); i++) {
			outFile << lot->getSlot(i)->isOccupied() << endl;
		}
		outFile.close();
	} else {
		cerr << "Unable to open file for writing." << endl;
	}
}