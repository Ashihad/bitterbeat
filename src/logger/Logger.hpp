#include <string_view>
#include <fstream>

class Logger {
public:
	Logger(const Logger&) = delete;
	Logger(Logger&&) = delete;
	Logger& operator=(const Logger&) = delete;
	Logger& operator=(Logger&&) = delete;

	static Logger& getInstance();

	friend Logger& operator<<(Logger& logger, std::string_view msg);
private:
	Logger(std::string filename);
	~Logger() = default;
	std::ofstream log_file;
};

Logger& operator<<(Logger& logger, std::string_view msg);
