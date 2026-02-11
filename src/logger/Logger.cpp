#include "Logger.hpp"

#include <mutex>
#include <string>
#include <iostream>

std::mutex WriteMutex;

const std::string log_filename{"log.txt"};

Logger::Logger(const std::string filename)
    : log_file(filename, std::ios::out) {}

Logger &Logger::getInstance() {
  static Logger instance(log_filename);
  return instance;
}

Logger &operator<<(Logger &logger, std::string_view msg) {
	std::cout << msg << '\n';
  logger.log_file << msg << '\n';
  return logger;
}
