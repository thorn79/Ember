// Copyright (c) 2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include "clientversion.h"
#include <string>

//
// client versioning
//

static const int CLIENT_VERSION =
                           1000000 * CLIENT_VERSION_MAJOR
                         +   10000 * CLIENT_VERSION_MINOR
                         +     100 * CLIENT_VERSION_REVISION
                         +       1 * CLIENT_VERSION_BUILD;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;

//
// database format versioning
//
static const int DATABASE_VERSION = 70509;

//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 77780;

// intial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 210;

// disconnect from peers older than this proto version,
// Authoritative value is now _BEFORE, then a switch happens to MIN_PEER_PROTO_VERSION by epoch time specified by _WHEN
static const int MIN_PEER_PROTO_VERSION = 77778;
static const int MIN_PEER_PROTO_VERSION_BEFORE = 77776;
static const int MIN_PEER_PROTO_VERSION_WHEN = 1509235200; // Sunday, October 29, 2017 12:00:00 AM UTC

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 0;
static const int NOBLKS_VERSION_END = 60014;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

// "mempool" command, enhanced "getdata" behavior starts with this version:
static const int MEMPOOL_GD_VERSION = 60002;

#endif
