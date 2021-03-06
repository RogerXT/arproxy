#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <net/if.h>
#include <linux/if_packet.h>
#include <netinet/if_ether.h>
#include <net/ethernet.h> 

#define DEVSIZE	16
#define BUFSIZE 2048

struct arp_t {
	int debug; 				// debug flag
	int daemon; 			// daemon flag
	int sock;				// socket interface
	int sock2;				// socket interface
	char dev[DEVSIZE];  	// interface name
	struct in_addr inaddr;	// local ip address
	struct ether_addr eth;	// local mac address
};

struct arphdr_t {
	struct ether_header eh;
	struct ether_arp arp;
};
