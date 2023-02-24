#include "logging.h"

#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"

void InitLogging()
{
  spdlog::set_pattern("[%H:%M:%S] [%n] [%^%l%$] [thread %t] %v");

  std::vector<spdlog::sink_ptr> sinks;
  sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
  sinks.push_back(
      std::make_shared<spdlog::sinks::basic_file_sink_mt>("log.txt"));

  const auto programLogger = std::make_shared<spdlog::logger>(
      PROGRAM_LOGGER, begin(sinks), end(sinks));
  programLogger->info("Setting up loggers");

  const auto gameLogger =
      std::make_shared<spdlog::logger>(GAME_LOGGER, begin(sinks), end(sinks));
  const auto engineLogger =
      std::make_shared<spdlog::logger>(ENGINE_LOGGER, begin(sinks), end(sinks));

  spdlog::register_logger(programLogger);
  spdlog::register_logger(gameLogger);
  spdlog::register_logger(engineLogger);
}

void printNotImplemented(const char *loggerName, const char *methodName,
                         const char *fileName)
{
  const auto logger = spdlog::get(loggerName);
  logger->info("{} in {} not implemented", methodName, fileName);
}
