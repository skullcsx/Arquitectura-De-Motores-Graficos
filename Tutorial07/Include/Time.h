#include <Windows.h>
#pragma once

class Time
{
public:
	Time();
	~Time();

	void 
	init();

	void 
	update();

	void 
	render();

	void
	destroy();

public:
	float m_deltaTime;
private:
	LARGE_INTEGER m_currentTime;
	LARGE_INTEGER m_lastTime;
	LARGE_INTEGER m_timerFrequency;
};

