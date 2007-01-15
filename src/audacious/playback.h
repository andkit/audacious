/*  Audacious - Cross-platform multimedia player
 *  Copyright (C) 2005-2007  Audacious development team
 *
 *  Based on BMP:
 *  Copyright (C) 2003-2004  BMP development team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; under version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef PLAYBACK_H
#define PLAYBACK_H

#include <glib.h>

#include "audacious/playlist.h"

void playback_set_random_skin(void);
gint playback_get_time(void);
void playback_initiate(void);
void playback_pause(void);
void playback_stop(void);
void playback_stop_reentrant(void);
gboolean playback_play_file(PlaylistEntry *entry);
gboolean playback_get_playing(void);
gboolean playback_get_paused(void);
void playback_seek(gint time);
void playback_seek_relative(gint offset);

#endif