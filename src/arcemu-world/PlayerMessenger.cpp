/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2005-2007 Ascent Team <http://www.ascentemu.com/>
 * Copyright (C) 2008-2019 <http://www.ArcEmu.org/>
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

#include "StdAfx.h"
#include "PlayerMessenger.h"

void PlayerMessenger::sendMessage( Player *player, WorldPacket& message )
{
	WorldSession *session = player->GetSession();
	if( session == NULL )
		return;
	session->SendPacket( &message );
}

void PlayerMessenger::sendDelayedMessage(Player *player, WorldPacket *message)
{
	WorldSession *session = player->GetSession();
	if( session == NULL )
		return;

	player->delayedPackets.add( message );
}

void PlayerMessenger::sendDelayedMessage(Player *player, WorldPacket &message)
{
	WorldPacket* data = new WorldPacket( message );
	sendDelayedMessage( player, data );
}
