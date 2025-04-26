#ifndef __LOGCORE_H__
#define __LOGCORE_H__

#define LOG_LEVEL_INFO 1
#define LOG_LEVEL_ERROR 2
#define LOG_LEVEL_DEBUG 3
#define LOG_LEVEL_FATAL 4
#define LOG_LEVEL_TRACE 5
#define LOGLVL LOG_LEVEL_INFO
#define LOG_LEVEL LOGLVL
#include <cstdio>
#define LOG_INFO(LOGLEVEL, MSG)                                                                                        \
  do                                                                                                                   \
    {                                                                                                                  \
      if (LOGLVL <= LOG_LEVEL_INFO)                                                                                    \
        {                                                                                                              \
          printf ("INFO: %s\n", MSG);                                                                                  \
        }                                                                                                              \
    }                                                                                                                  \
  while (0)
#define LOG_ERROR(LOGLEVEL, MSG)                                                                                       \
  do                                                                                                                   \
    {                                                                                                                  \
      if (LOGLVL <= LOG_LEVEL_ERROR)                                                                                   \
        {                                                                                                              \
          printf ("ERROR: %s\n", MSG);                                                                                 \
        }                                                                                                              \
    }                                                                                                                  \
  while (0)
#define LOG_DEBUG(LOGLEVEL, MSG)                                                                                       \
  do                                                                                                                   \
    {                                                                                                                  \
      if (LOGLVL <= LOG_LEVEL_DEBUG)                                                                                   \
        {                                                                                                              \
          printf ("DEBUG: %s\n", MSG);                                                                                 \
        }                                                                                                              \
    }                                                                                                                  \
  while (0)
#define LOG_FATAL(LOGLEVEL, MSG)                                                                                       \
  do                                                                                                                   \
    {                                                                                                                  \
      if (LOGLVL <= LOG_LEVEL_FATAL)                                                                                   \
        {                                                                                                              \
          printf ("FATAL: %s\n", MSG);                                                                                 \
        }                                                                                                              \
    }                                                                                                                  \
  while (0)
#define LOG_TRACE(LOGLEVEL, MSG)                                                                                       \
  do                                                                                                                   \
    {                                                                                                                  \
      if (LOGLVL <= LOG_LEVEL_TRACE)                                                                                   \
        {                                                                                                              \
          printf ("TRACE: %s\n", MSG);                                                                                 \
        }                                                                                                              \
    }                                                                                                                  \
  while (0)

#endif // __LOGCORE_H__