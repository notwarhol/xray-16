#include "stdafx.h"
#include "game_state_accumulator.h"

// typelist:
#include "command_switch_counter.h"
#include "player_state_params.h"
#include "player_team_win_score.h"
#include "player_spot_params.h"
#include "player_state_blitzkrieg.h"
#include "player_state_multichampion.h"
#include "player_state_mad.h"
#include "player_state_achilles_heel.h"
#include "faster_than_bullets_time.h"
#include "harvest_time.h"
#include "player_state_skewer.h"
#include "double_shot_double_kill.h"
#include "player_state_climber.h"
#include "player_state_ammo_elapsed.h"
#include "player_state_opener.h"
#include "player_state_toughy.h"
#include "invincible_fury.h"
#include "sprinter_stopper.h"
#include "player_state_marksman.h"
#include "player_state_ambassador.h"
#include "player_state_remembrance.h"
#include "player_state_avenger.h"
#include "player_state_cherub.h"
#include "stalker_flair.h"
#include "black_list.h"
#include "silent_shots.h"
#include "killer_victim_velocity_angle.h"

namespace award_system
{
void game_state_accumulator::init_accumulative_values()
{
    static_assert(Loki::TL::Length<ACCUMULATIVE_STATE_LIST>::value == acpv_count,
        "Not all accumulative values has been added to a ACCUMULATIVE_STATE_LIST type list.");

    init_acpv_list<ACCUMULATIVE_STATE_LIST>();
}
} // namespace award_system
