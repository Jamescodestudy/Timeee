#pragma once
#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include<chrono>
#include<ctime>
#include<cstdlib>
#include<utility>
#include<set>
#include<thread>
#include<array>
#include<iterator>
using namespace std;
// My Types
typedef long long LL;
typedef vector<int> VI;
typedef vector<string> VS;
typedef std::chrono::system_clock::time_point systemTimePoint;
typedef std::chrono::steady_clock::time_point steadyTimePoint;
typedef std::chrono::high_resolution_clock::time_point highTimePoint;

// Macros
#define ITER(x,it) for(int it=0; it<x.size();i++)
#define FOR(a,b,iter) for(int iter=a;iter<b;iter++)