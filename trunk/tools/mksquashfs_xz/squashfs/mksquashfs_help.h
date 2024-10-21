#ifndef MKSQUASHFS_HELP_H
#define MKSQUASHFS_HELP_H
/*
 * Squashfs
 *
 * Copyright (c) 2024
 * Phillip Lougher <phillip@squashfs.org.uk>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * mksquashfs_help.h
 */

#ifdef REPRODUCIBLE_DEFAULT
#define NOREP_STR
#define REP_STR " (default)"
#define REP_DEF 1
#else
#define NOREP_STR " (default)"
#define REP_STR
#define REP_DEF 0
#endif

#ifdef XATTR_SUPPORT
#ifdef XATTR_OS_SUPPORT
#ifdef XATTR_DEFAULT
#define NOXOPT_STR
#define XOPT_STR " (default)"
#else
#define NOXOPT_STR " (default)"
#define XOPT_STR
#endif
#else
#ifdef XATTR_DEFAULT
#define NOXOPT_STR
#define XOPT_STR " (default - no OS support)"
#else
#define NOXOPT_STR " (default)"
#define XOPT_STR " (no OS support)"
#endif
#endif
#else
#define NOXOPT_STR " (default)"
#define XOPT_STR " (unsupported)"
#endif

#define TRUE 1
#define FALSE 0

extern void mksquashfs_help_all(void);
extern void mksquashfs_option(char *opt_name, char *pattern);
extern void mksquashfs_section(char *opt_name, char *sec_name);
extern void mksquashfs_invalid_option(char *opt_name);
extern void mksquashfs_help(int error);
extern void mksquashfs_option_help(char *option);
extern void sqfstar_help_all(void);
extern void sqfstar_option(char *opt_name, char *pattern);
extern void sqfstar_section(char *opt_name, char *sec_name);
extern void sqfstar_invalid_option(char *opt_name);
extern void sqfstar_help(int error);
extern void sqfstar_option_help(char *option);
#endif
