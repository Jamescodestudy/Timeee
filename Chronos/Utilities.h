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
#include<Windows.h>
using namespace std;
// My Types
typedef long long LL;
typedef std::chrono::system_clock::time_point systemTimePoint;
typedef std::chrono::steady_clock::time_point steadyTimePoint;
typedef std::chrono::high_resolution_clock::time_point highTimePoint;

// Macros
#define Make(x,y) make_pair(x,y)
#define ITER(x,it) for(int it=0; it<x.size();i++)
#define FOR(a,b,iter) for(int iter=a;iter<b;iter++)
#define systemNOW std::chrono::system_clock::now()
#define steadyNOW std::chrono::steady_clock::now()
#define highNOW std::chrono::high_resolution_clock::now()