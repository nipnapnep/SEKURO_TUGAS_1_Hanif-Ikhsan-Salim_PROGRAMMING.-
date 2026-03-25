#include "core_mcu.hpp"
#include <iostream>

using namespace std;

Core_MCU::Core_MCU(float cpu_speed, int memory, std::string os, std::string nama, int volt) {
    this->cpu_speed = cpu_speed;
    this->memory = memory;
    this->os = os;
    this->nama = nama;
    this->volt = volt;
}

Core_MCU::~Core_MCU() {
    cout << "Device " << this->nama << " dimatikan/dihancurkan." << endl;
}

void Core_MCU::showSpek() {
    cout << "\n--- Spesifikasi " << this->nama << " ---" << endl;
    cout << "OS        : " << this->os << endl;
    cout << "CPU Speed : " << this->cpu_speed << " GHz" << endl;
    cout << "Memory    : " << this->memory << " MB" << endl;
    cout << "Voltase   : " << this->volt << " Volt" << endl;
    cout << "-----------------------------------" << endl;
}

void Core_MCU::nambah_volt(int penambahan_voltase) {
    this->volt += penambahan_voltase;
}

void Core_MCU::ganti_os(std::string new_os) {
    this->os = new_os;
}

std::string Core_MCU::get_os() {
    return this->os;
}