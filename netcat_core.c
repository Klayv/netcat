/* *********************************************************************** *
 *
 *       Filename:  netcat_core.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Wednesday 06 March 2013 02:06:25  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Prakash Gamit (09211014), <prakashgamit23@gmail.com>
 *   Organization:  Indian Institute of Technology, Roorkee
 *
 * ********************************************************************* */

#include "netcat_core.h"


struct options o;

struct sockaddr_in servaddr;

int sockfd;
