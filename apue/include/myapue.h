/*
 * File Name: myapue.h
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/01
 */

#ifndef _MYAPUE_H
#define _MYAPUE_H

#define MAXLINE 4096

void    err_dump(const char *, ...);            /* {App misc_source} */
void    err_msg(const char *, ...);
void    err_quit(const char *, ...);
void    err_exit(int, const char *, ...);
void    err_ret(const char *, ...);
void    err_sys(const char *, ...);

void    log_msg(const char *, ...);              /* {App misc_source} */
void    log_open(const char *, int, int);
void    log_quit(const char *, ...);
void    log_ret(const char *, ...);
void    log_sys(const char *, ...);

#endif
