#ifndef __GNC_H
#define __GNC_H

#if defined(__cplusplus)
extern "C"{
#endif

    void gnc_init();
    int gnc_land();
    int gnc_takeoff(float takeoff_alt);
    int gnc_arm();
    void gnc_set_destination(float x, float y, float z);
    void gnc_set_heading(float heading);
    float gnc_get_heading();
    int gnc_check_waypoint_reached(float pos_tolerance, float heading_tolerance);
    void gnc_background (void);
    void gnc_shutdown(void);

#if defined(__cplusplus)
}
#endif

#endif /* __GNC_H */
