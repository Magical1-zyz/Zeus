#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Zeus {

	class ZEUS_API Log
	{
	public: 
		static void Init();

		inline static std::shared_ptr<spdlog::logger> GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger> GetClientLogger() { return s_ClientLogger; }

	private:
		inline static std::shared_ptr<spdlog::logger> s_CoreLogger;
		inline static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// 核心日志宏定义
#define ZEUS_CORE_TRACE(...)    ::Zeus::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ZEUS_CORE_INFO(...)     ::Zeus::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ZEUS_CORE_WARN(...)     ::Zeus::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ZEUS_CORE_ERROR(...)    ::Zeus::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ZEUS_CORE_FATAL(...)    ::Zeus::Log::GetCoreLogger()->critical(__VA_ARGS__)

// 客户端日志宏定义
#define ZEUS_TRACE(...)         ::Zeus::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ZEUS_INFO(...)          ::Zeus::Log::GetClientLogger()->info(__VA_ARGS__)
#define ZEUS_WARN(...)          ::Zeus::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ZEUS_ERROR(...)         ::Zeus::Log::GetClientLogger()->error(__VA_ARGS__)
#define ZEUS_FATAL(...)         ::Zeus::Log::GetClientLogger()->critical(__VA_ARGS__)