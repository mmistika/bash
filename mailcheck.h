/* mailcheck.h -- variables and function declarations for mail checking. */

/* Copyright (C) 1987,1991 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   Bash is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with Bash; see the file COPYING.  If not, write to the Free
   Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. */

#if !defined (_MAILCHECK_H_)
#define _MAILCHECK_H_

/* Functions from mailcheck.c */
extern int time_to_check_mail __P((void));
extern void reset_mail_timer __P((void));
extern void reset_mail_files __P((void));
extern void free_mail_files __P((void));
extern char *make_default_mailpath __P((void));
extern void remember_mail_dates __P((void));
extern void check_mail __P((void));

#endif /* _MAILCHECK_H */