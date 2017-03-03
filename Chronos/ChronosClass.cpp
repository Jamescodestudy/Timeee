#include "ChronosClass.h"
#include "Utilities.h"

steadyTime::steadyTime()
{
	globalCount++;
	// First time point
	steadyTimePoint td = steadyNOW;
	// Saved as InitClass
	timePoints["InitClass"] = td;
	// Create log folder and generate basic log
	//system("cd.. & mkdir LogsChrono");
	//generateLog("InitialTimePoint");
}

steadyTime::~steadyTime()
{

}

void steadyTime::addTimePoint(string timePointName)
{
	steadyTimePoint timePoint = steadyNOW;
	timePoints[timePointName] = timePoint;
}

void steadyTime::duration(pair<string, string> pointNames, string durationName)
{
	steadyTimePoint fir = timePoints[pointNames.first];
	steadyTimePoint sec = timePoints[pointNames.second];
	if (durationName == "")
	{
		durationName = "duration_" + to_string(globalCount);
		globalCount++;
	}
	std::chrono::duration<double> dur = sec - fir;
	timeDurations[durationName] = dur.count();
}

