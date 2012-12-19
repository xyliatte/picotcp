/*********************************************************************
PicoTCP. Copyright (c) 2012 TASS Belgium NV. Some rights reserved.
See LICENSE and COPYING for usage.
Do not redistribute without a written permission by the Copyright
holders.

*********************************************************************/
#ifndef _INCLUDE_PICO_UDP
#define _INCLUDE_PICO_UDP
#include "pico_addressing.h"
#include "pico_protocol.h"

extern struct pico_protocol pico_proto_udp;

struct __attribute__((packed)) pico_udp_hdr {
  struct pico_trans trans;
  uint16_t len;
  uint16_t crc;
};
#define PICO_UDPHDR_SIZE 8

struct pico_socket *pico_udp_open(void);
int pico_udp_recv(struct pico_socket *s, void *buf, int len, void *src, uint16_t *port);
int pico_udp_checksum(struct pico_frame *f);


#endif
