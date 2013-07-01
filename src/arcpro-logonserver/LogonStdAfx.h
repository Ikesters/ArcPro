/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2008-2012 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <string>

#include "Common.h"
#include <Network/Network.h>

#include "../arcpro-shared/Log.h"
#include "../arcpro-shared/Util.h"
#include "../arcpro-shared/ByteBuffer.h"
#include "../arcpro-shared/Config/ConfigEnv.h"
#include <zlib.h>

#include "../arcpro-shared/Database/DatabaseEnv.h"

#include "../arcpro-shared/Auth/BigNumber.h"
#include "../arcpro-shared/Auth/Sha1.h"
#include "../arcpro-shared/Auth/WowCrypt.h"

#include "LogonOpcodes.h"
#include "../arcpro-logonserver/Main.h"
#include "../arcpro-world/NameTables.h"
#include "AccountCache.h"
#include "PeriodicFunctionCall_Thread.h"
#include "../arcpro-logonserver/AutoPatcher.h"
#include "../arcpro-logonserver/AuthSocket.h"
#include "../arcpro-logonserver/AuthStructs.h"
#include "../arcpro-logonserver/LogonCommServer.h"
#include "../arcpro-logonserver/LogonConsole.h"
#include "../arcpro-shared/WorldPacket.h"

// database decl
extern Database* sLogonSQL;
