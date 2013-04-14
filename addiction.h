#ifndef _ADDICTION_H_
#define _ADDICTION_H_

#include "rng.h"
#include "game.h"
#include "morale.h"
#include <sstream>

#define MIN_ADDICTION_LEVEL 3 // Minimum intensity before effects are seen

void addict_effect(game *g, addiction &add);

std::string addiction_name(addiction cur);

add_type addiction_type(std::string name);

std::string addiction_text(addiction cur);

#endif
