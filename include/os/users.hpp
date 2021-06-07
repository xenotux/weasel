/**
 *  Weasel  -   Gui Process Explorer
 *  Copyright (C) 2021  Julian Zampiccoli
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef WEASEL_USERS_HPP
#define WEASEL_USERS_HPP

#include <string>

#include "os/types.hpp"

namespace Users {
    /**
     * Find the username for a given pid.
     *
     * @param pid The uid of the user to find the name of
     * @return The name of the user with the pid
     */
    std::string getUserName(Uid_t pid);

    /**
     * Find the userid for a given name.
     *
     * @param userName The name of the user to find the pid of
     * @return The pid of the user with the name
     */
    Uid_t getUserId(const std::string &userName);
}

#endif //WEASEL_USERS_HPP
