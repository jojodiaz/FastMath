#include <chrono>

class timer {

public: // Default constructor
  timer(double startingElapsedTime) : m_totalTime(startingElapsedTime) {}

  void start();

  void stop();

  double getTime();

private:
  std::chrono::time_point<std::chrono::steady_clock> m_startTime;
  std::chrono::time_point<std::chrono::steady_clock> m_endTime;
  double m_totalTime;
};
