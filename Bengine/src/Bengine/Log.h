#pragma once


#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Bengine
{

	class BENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

//Core log marcros
#define BE_CORE_TRACE(...)		::Bengine::Log::GetCoreLogger()->debug(__VA_ARGS__)
#define BE_CORE_INFO(...)		::Bengine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BE_CORE_WARN(...)		::Bengine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BE_CORE_ERROR(...)		::Bengine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BE_CORE_CRITICAL(...)	::Bengine::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client log macros
#define BE_TRACE(...)			::Bengine::Log::GetClientLogger()->debug(__VA_ARGS__)
#define BE_INFO(...)			::Bengine::Log::GetClientLogger()->info(__VA_ARGS__)
#define BE_WARN(...)			::Bengine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BE_ERROR(...)			::Bengine::Log::GetClientLogger()->error(__VA_ARGS__)
#define BE_CRITICAL(...)		::Bengine::Log::GetClientLogger()->critical(__VA_ARGS__)


