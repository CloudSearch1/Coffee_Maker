#pragma once

#include <iostream>
#include <memory>
#include <utility>
#include <functional>
#include <algorithm>

#include <sstream>
#include <string>
#include <vector>

#include"Log/Log.h"

//Platfrom in window
#ifdef PLATFORM_WINDOWS
#include <Windows.h>
#elif PLATFORM_LINUX
//Platfrom in Linux
#endif
