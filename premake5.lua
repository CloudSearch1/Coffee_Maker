workspace "CoffeMachine"
	kind "StaticLib"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include dirs relative to root folder (solution dir)
IncludeDir = {}
IncludeDir["ImGui"] = "CoffeMachine/vendor/imgui"

include "CoffeMachine/vendor/imgui"

project "CoffeMachine"
	location "CoffeMachine"
	kind "StaticLib"
	cppdialect "C++17"
	language "C++"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "Coffepch.h"
	pchsource "CoffeMachine/src/Coffepch.cpp"

	files{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.ImGui}"
	}
	
	links{
		"ImGui"
	}

	filter "system:windows"
		systemversion "latest"
		
		defines
		{
			"PLATFORM_WINDOWS",
			"BUILD_DLL",
			"PLATFORM_LINUX"
		}
		
	filter "configurations:Debug"
		defines "Coffe_DEBUG"
		buildoptions"/MDd"
		symbols "on"

	filter "configurations:Release"
		defines "Coffe_RELEASE"
		buildoptions"/MD"
		optimize "on"

	filter "configurations:Dist"
		defines "Coffe_DIST"
		buildoptions"/MD"
		optimize "on" 

        
project"Sandbox"
	location"Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime"on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
		
	}

	includedirs{
		"CoffeMachine/src",
		"CoffeMachine/vendor/spdlog/include",
		"%{IncludeDir.glm}"
	}

	links{
		"CoffeMachine"
	}

	filter "system:windows"
	
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"PLATFORM_WINDOWS",
			"PLATFORM_LINUX"
		}
		
	filter "configurations:Debug"
		defines "Coffe_DEBUG"
		buildoptions"/MDd"
		symbols "on"

	filter "configurations:Release"
		defines "Coffe_RELEASE"
		buildoptions"/MD"
		optimize "on"

	filter "configurations:Dist"
		defines "Coffe_DIST"
		buildoptions"/MD"
		optimize "on"
