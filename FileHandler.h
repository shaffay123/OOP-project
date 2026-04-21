#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include "ParkingLot.h"
#include <iostream>
using namespace std;


class FileHandler {
public:
    static void saveSlots(ParkingLot* lot);
    static void loadSlots(ParkingLot* lot);
    static void saveHistory(Bill* bill);
    static void loadHistory();
    static void saveRates(ParkingLot* lot);
    static void loadRates(ParkingLot* lot);
    static bool verifyAdmin(string u, string p);
};

#endif