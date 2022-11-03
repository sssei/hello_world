/*
 * Copyright (c) 2016-2017, Linaro Limited
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef TA_EXAMPLES_H
#define TA_EXAMPLES_H


/*
 * This UUID is generated with uuidgen
 * the ITU-T UUID generator at http://www.itu.int/ITU-T/asn1/uuid.html
 */

#define TA_EXAMPLES_UUID { 0xb725875a, 0x41de, 0x4648, \
                { 0x84, 0xae, 0xf4, 0x55, 0x6d, 0x0a, 0x8f, 0x2e} }		

/*
 * Opens a TCP socket and returns an opaque handle
 *
 * [in]     params[0].value.a	ipVersion
 * [in]     params[0].value.b	server port
 * [in]     params[1].memref	server address
 * [out]    params[2].memref	handle
 * [out]    params[3].value.a	protocol error
 */
#define TA_SOCKET_CMD_TCP_OPEN	0

/*
 * Opens a UDP socket and returns an opaque handle
 *
 * [in]     params[0].value.a	ipVersion
 * [in]     params[0].value.b	server port
 * [in]     params[1].memref	server address
 * [out]    params[2].memref	handle
 * [out]    params[3].value.a	protocol error
 */
#define TA_SOCKET_CMD_UDP_OPEN	1

/*
 * Closes a socket
 *
 * [in]     params[0].memref	handle
 */
#define TA_SOCKET_CMD_CLOSE	2

/*
 * Send data on socket
 *
 * [in]     params[0].memref	handle
 * [in]     params[1].memref	data
 * [in]     params[2].value.a	timeout
 * [out]    params[2].value.b	sent bytes
 */
#define TA_SOCKET_CMD_SEND	3

/*
 * Receive data on socket
 *
 * [in]     params[0].memref	handle
 * [out]    params[1].memref	data
 * [in]     params[2].value.a	timeout
 */
#define TA_SOCKET_CMD_RECV	4

/*
 * Retrieve protocol error from socket
 *
 * [in]     params[0].memref	handle
 * [out]    params[1].value.a	error code
 */
#define TA_SOCKET_CMD_ERROR	5

/*
 * Ioctl on socket
 *
 * [in]     params[0].memref	handle
 * [in/out] params[1].memref	data
 * [in]     params[2].value.a	command code
 */
#define TA_SOCKET_CMD_IOCTL	6

#endif /*TA_HELLO_WORLD_H*/
