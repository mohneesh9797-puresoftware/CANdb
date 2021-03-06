#include <cstring>
#include <iostream>
#include <memory>
#include <spdlog/fmt/ostr.h>
#include <spdlog/spdlog.h>

extern std::shared_ptr<spdlog::logger> kDefaultLogger;

#define __FILENAME__                                                           \
    (std::strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define cdb_debug(fmt, ...)                                                    \
    do {                                                                       \
        kDefaultLogger->debug(                                                 \
            "[{}@{}] " fmt, __FILENAME__, __LINE__, ##__VA_ARGS__);            \
    } while (0)
#define cdb_trace(fmt, ...)                                                    \
    do {                                                                       \
        kDefaultLogger->trace(                                                 \
            "[{}@{}] " fmt, __FILENAME__, __LINE__, ##__VA_ARGS__);            \
    } while (0)
#define cdb_warn(fmt, ...)                                                     \
    do {                                                                       \
        kDefaultLogger->warn(                                                  \
            "[{}@{}] " fmt, __FILENAME__, __LINE__, ##__VA_ARGS__);            \
    } while (0)
#define cdb_error(fmt, ...)                                                    \
    do {                                                                       \
        kDefaultLogger->error(                                                 \
            "[{}@{}] " fmt, __FILENAME__, __LINE__, ##__VA_ARGS__);            \
    } while (0)
#define cdb_info(fmt, ...)                                                     \
    do {                                                                       \
        kDefaultLogger->info(                                                  \
            "[{}@{}] " fmt, __FILENAME__, __LINE__, ##__VA_ARGS__);            \
    } while (0)
