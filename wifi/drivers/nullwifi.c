/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2015 - Michael Lelli
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#include "../wifi_driver.h"

static void *nullwifi_init(const char *device, uint64_t caps,
      unsigned width, unsigned height)
{
   (void)device;
   return (void*)-1;
}

static void nullwifi_free(void *data)
{
   (void)data;
}

static bool nullwifi_start(void *data)
{
   (void)data;
   return true;
}

static void nullwifi_stop(void *data)
{
   (void)data;
}

static void nullwifi_scan(struct string_list *list)
{
}

wifi_driver_t wifi_null = {
   nullwifi_init,
   nullwifi_free,
   nullwifi_start,
   nullwifi_stop,
   nullwifi_scan,
   "null",
};
