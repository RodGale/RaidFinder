/*
 * This file is part of RaidFinder
 * Copyright (C) 2019 by Admiral_Fish
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "Den.hpp"

Den::Den(const QVector<Raid> &raids, Game version, u64 hash)
{
    this->raids = raids;
    this->version = version;
    this->hash = hash;
}

Raid Den::getRaid(u8 index) const
{
    return raids.at(index);
}

QVector<u16> Den::getSpecies() const
{
    QVector<u16> species;
    for (const Raid &raid : raids)
    {
        species.append(raid.getSpecies());
    }
    return species;
}

Game Den::getVersion() const
{
    return version;
}

u64 Den::getHash() const
{
    return hash;
}