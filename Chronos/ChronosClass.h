#pragma once
#include "Utilities.h"


// Medium precission time measure class
class steadyTime
{
	private: 
	// map of time points and names of each point
	// poits determined by individual names
		map<string, steadyTimePoint> timePoints;
	// map of time durations between two points
	// value stored always in double
		map<string, double> timeDurations;

	public:
		int	globalCount = 0;
		steadyTime();
		~steadyTime();
		void addTimePoint(string timePointName);
		void duration(pair<string, string>, string="");
		
		//void generateLog(string fileName);	
};