/*
 * visualization.h
 * Copyright 2010-2011 John Lindgren
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions, and the following disclaimer in the documentation
 *    provided with the distribution.
 *
 * This software is provided "as is" and without any warranty, express or
 * implied. In no event shall the authors be liable for any damages arising from
 * the use of this software.
 */

#ifndef AUDACIOUS_VISUALIZATION_H
#define AUDACIOUS_VISUALIZATION_H

#include "plugins.h"

void vis_send_clear (void);
void vis_send_audio (const float * data, int channels);

void vis_init (void);
void vis_cleanup (void);

bool_t vis_plugin_start (PluginHandle * plugin);
void vis_plugin_stop (PluginHandle * plugin);

PluginHandle * vis_plugin_by_widget (/* GtkWidget * */ void * widget);

#endif
