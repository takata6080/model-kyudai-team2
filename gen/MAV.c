/*----------------------------------------------------------------------------
 * File:  MAV.c
 *
 * UML Component Port Messages
 * Component/Module Name:  MAV
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "gnc_sys_types.h"
#include "MAV.h"
#include "Control.h"
#include "gnc.h"

/*
 * Interface:  mavcontrol
 * Provided Port:  Port1
 * To Provider Message:  arm
 */
void
MAV_Port1_arm()
{
    gnc_arm();
}

/*
 * Interface:  mavcontrol
 * Provided Port:  Port1
 * To Provider Message:  get_heading
 */
r_t
MAV_Port1_get_heading()
{
    return gnc_get_heading();
}

/*
 * Interface:  mavcontrol
 * Provided Port:  Port1
 * To Provider Message:  init
 */
void
MAV_Port1_init()
{
    gnc_init();
}

/*
 * Interface:  mavcontrol
 * Provided Port:  Port1
 * To Provider Message:  land
 */
void
MAV_Port1_land()
{
    gnc_land();
}

/*
 * Interface:  mavcontrol
 * Provided Port:  Port1
 * To Provider Message:  set_destination
 */
void
MAV_Port1_set_destination( const r_t p_x, const r_t p_y, const r_t p_z )
{
    gnc_set_destination(p_x, p_y, p_z);
}

/*
 * Interface:  mavcontrol
 * Provided Port:  Port1
 * To Provider Message:  set_heading
 */
void
MAV_Port1_set_heading( const r_t p_heading )
{
    gnc_set_heading(p_heading);
}

/*
 * Interface:  mavcontrol
 * Provided Port:  Port1
 * To Provider Message:  takeoff
 */
void
MAV_Port1_takeoff( const r_t p_alt )
{
    gnc_takeoff(p_alt);
}

/*
 * Interface:  mavcontrol
 * Provided Port:  Port1
 * From Provider Message:  ready
 */
void
MAV_Port1_ready()
{
  Control_Port1_ready();
}
