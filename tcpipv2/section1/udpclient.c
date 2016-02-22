/*
 * Send a UDP datagram to the daytime server on some other host,
 * read the reply, and print the time and date on the server
 */
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define BUFFSIZE 150 /* arbitrary size */
#define DAYTIME_PORT 13

void err_sys(char *);

int main(int argc, char *argv[])
{
	struct sockaddr_in serv;
	char buff[BUFFSIZE];
	int sockfd, n;

	if (argc != 2) {
		fprintf(stderr, "Usege: %s server_ip_address\n", argv[0]);
		return -1;
	}
	
	if ((sockfd = socket(PF_INET, SOCK_DGRAM, 0)) < 0)
		err_sys("socket error");

	bzero((char *) &serv, sizeof(serv));
	serv.sin_family = AF_INET;
	serv.sin_addr.s_addr = inet_addr(argv[1]);
	serv.sin_port = htons(DAYTIME_PORT);

	if (sendto(sockfd, buff, BUFFSIZE, 0, (struct sockaddr *) &serv, sizeof(serv)) != BUFFSIZE)
		err_sys("sendto error");

	if ((n=recvfrom(sockfd, buff, BUFFSIZE, 0, (struct sockaddr *) NULL, (int *) NULL)) < 2)
		err_sys("recvfrom error");
	buff[n-2] = '\0';
	printf("%s\n", buff);

	exit(0);
}

void err_sys(char *error)
{
	fprintf(stderr, "%s, errno=%i\n", error, errno);
	exit(-1);
}
