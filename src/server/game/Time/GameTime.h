/*
 * This file is part of the FirelandsCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Affero General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GAMETIME_H
#define __GAMETIME_H

#include "Define.h"

#include <chrono>

namespace GameTime
{
    // Server start time
    FC_GAME_API time_t GetStartTime();

    // Current server time (unix) in seconds
    FC_GAME_API time_t GetGameTime();

    // Milliseconds since server start
    FC_GAME_API uint32 GetGameTimeMS();

    /// Current chrono system_clock time point
    FC_GAME_API std::chrono::system_clock::time_point GetGameTimeSystemPoint();

    /// Current chrono steady_clock time point
    FC_GAME_API std::chrono::steady_clock::time_point GetGameTimeSteadyPoint();

    /// Uptime (in secs)
    FC_GAME_API uint32 GetUptime();

    void UpdateGameTimers();
};

#endif
