/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef LOCATE_SELF_BAKE_CONFIG_H
#define LOCATE_SELF_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <corto>
#include <corto.c>
#include <bake.util>

/* Headers of private dependencies */
#ifdef LOCATE_SELF_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if LOCATE_SELF_IMPL && defined _MSC_VER
#define LOCATE_SELF_EXPORT __declspec(dllexport)
#elif LOCATE_SELF_IMPL
#define LOCATE_SELF_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define LOCATE_SELF_EXPORT __declspec(dllimport)
#else
#define LOCATE_SELF_EXPORT
#endif

#endif
