/*
 * File Name: dcl.c
 * Author: qiuzhi zhu
 * Mail: zhuqiuzhi91@gmail.com 
 * Created Time: 2015/04
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXTOKEN 100

enum { NAME, PARENS, BRACKETS };

/* the heart of the dcl program */
void dcl(void);
void dirdcl(void);

/* gettoken: get next token into token */
int gettoken(void); 	

/* global variables */
int tokentype;   	/* type of last token */
char token[MAXTOKEN];	/* last token string */
char name[MAXTOKEN];	/* identifier name */
char datatype[MAXTOKEN];/* data type = char, int , etc. */
char out[1000];		/* output string */

/* convert declaration to words */
int main()
{
	while (gettoken() != EOF) { 	/* 1st token on line */
		strcpy(datatype, token);/*is the datatype such as int*/	
		out[0] = '\0';		/* in case input is empty */
		dcl(); /* parse rest of line */
		if (tokentype != '\n')
			printf("syntax error\n");
		printf("%s: %s %s\n", name, out, datatype);
	}
	return 0;
}

void dcl(void)
{
	int ns;
	void dirdcl(void);

	for (ns = 0; gettoken() == '*'; ) /* count *'s */
		ns++;
	dirdcl();
	while (ns-- > 0)
		strcat(out, " pointer to");
}

/* dirdcl: parse a dirext declarator */
void dirdcl(void)
{
	int type;
	
	if (tokentype == '(') {
		dcl();
		if (tokentype != ')')
			printf("error: missing )\n");
	} else if(tokentype == NAME) {
		strcpy(name, token);
	} else
		printf("error: expected name or (dcl)\n");
	while ((type=gettoken()) == PARENS|| type == BRACKETS)
		if (type == PARENS)
			strcat(out, " function returning");
		else {
			strcat(out, " array");
			strcat(out, token);
			strcat(out, " of");
		}
}

/* gettoken: return next token */
int gettoken()
{
	TODO;
}
