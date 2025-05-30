#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Zeus {
	
	inline static std::shared_ptr<spdlog::logger> s_CoreLogger;
	inline static std::shared_ptr<spdlog::logger> s_ClientLogger;

	void Log::Init()
	{
		// 设置日志输出格式：颜色 + 时间 + 日志名称 + 消息
		spdlog::set_pattern("%^[%T] %n: %v%$");

		// 创建并配置Core日志器
		s_CoreLogger = spdlog::stdout_color_mt("ZEUS");
		s_CoreLogger->set_level(spdlog::level::trace);

		// 创建并配置Client日志器
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);

		// 设置默认日志器为核心日志器，并在trace级别时立即刷新
		spdlog::set_default_logger(s_CoreLogger);
		spdlog::flush_on(spdlog::level::trace);

	}
}