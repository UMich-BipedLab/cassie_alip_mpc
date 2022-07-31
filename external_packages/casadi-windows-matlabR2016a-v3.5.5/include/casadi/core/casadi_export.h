
#ifndef CASADI_EXPORT_H
#define CASADI_EXPORT_H

#ifdef CASADI_STATIC_DEFINE
#  define CASADI_EXPORT
#  define CASADI_NO_EXPORT
#else
#  ifndef CASADI_EXPORT
#    ifdef casadi_EXPORTS
        /* We are building this library */
#      define CASADI_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define CASADI_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef CASADI_NO_EXPORT
#    define CASADI_NO_EXPORT 
#  endif
#endif

#ifndef CASADI_DEPRECATED
#  define CASADI_DEPRECATED 
#endif

#ifndef CASADI_DEPRECATED_EXPORT
#  define CASADI_DEPRECATED_EXPORT CASADI_EXPORT CASADI_DEPRECATED
#endif

#ifndef CASADI_DEPRECATED_NO_EXPORT
#  define CASADI_DEPRECATED_NO_EXPORT CASADI_NO_EXPORT CASADI_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef CASADI_NO_DEPRECATED
#    define CASADI_NO_DEPRECATED
#  endif
#endif

#endif
