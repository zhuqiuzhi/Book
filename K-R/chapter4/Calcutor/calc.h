/*
 * File Name: calc.h
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/03
 */
#define NUMBER '0' /* signal that a number was found */
void push(double);
double pop(void);
int getop(char []);
int getch(void);
void ungetch(int);
