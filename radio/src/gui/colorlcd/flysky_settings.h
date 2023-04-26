/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   opentx - https://github.com/opentx/opentx
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include "form.h"
#include "module_setup.h"

struct ModuleData;

class FlySkySettings : public FormGroup, public ModuleOptions
{
  uint8_t moduleIdx;
  ModuleData* md;
  FlexGridLayout grid;
  tmr10ms_t lastRefresh = 0;

  void checkEvents() override;
  void update() override;
    
public:
  FlySkySettings(Window* parent, const FlexGridLayout& g, uint8_t moduleIdx);
};
