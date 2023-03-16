//Include the file Windows.h
#include <Windows.h>
#pragma once

//Create the class CTime
class
CTime{
public:
CTime();
~CTime();

//we initialize the function
void 
init();

void 
update();

void 
render();

void
destroy();

// we define a float variable m_deltaTime
public:
float m_deltaTime;
private:
LARGE_INTEGER m_currentTime;
LARGE_INTEGER m_lastTime;
LARGE_INTEGER m_timerFrequency;
};

