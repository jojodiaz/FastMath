#include <chrono>

class timer {

public:
  // Default constructor
  timer(double startingElapsedTime) : m_totalTime(startingElapsedTime) {}

  void start() { m_startTime = std::chrono::steady_clock::now(); }

  void stop() {
    m_endTime = std::chrono::steady_clock::now();
    m_totalTime +=
        std::chrono::duration<double>(m_endTime - m_startTime).count();
  }

  double getTime() { return m_totalTime; }

private:
  std::chrono::time_point<std::chrono::steady_clock> m_startTime;
  std::chrono::time_point<std::chrono::steady_clock> m_endTime;
  double m_totalTime = 0.0;
};
