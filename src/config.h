#ifndef CONFIG_H
#define CONFIG_H

#if defined(_WIN32) || defined(WIN32)
  #define OS_WINDOWS
#elif defined(__unix__)
  #define OS_UNIX
#endif

#ifdef OS_WINDOWS
  #define HAVE_STAT 1
  #define HAVE_UNISTD_H 0
  #define HAVE_STDINT_H 1
  #define HAVE_SLEEP 1
  #define HAVE_WINDOWS_H 1
#elif OS_UNIX
  #define HAVE_STAT 1
  #define HAVE_UNISTD_H 1
  #define HAVE_STDINT_H 1
  #define HAVE_NANOSLEEP 1
  #define HAVE_TIME_H 1
#endif

#endif
