/** @file
 *	@brief MAVLink comm protocol testsuite generated from mavric.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef MAVRIC_TESTSUITE_H
#define MAVRIC_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_mavric(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_mavric(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_roll_pitch_yaw_thrust_setpoint(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_roll_pitch_yaw_thrust_setpoint_t packet_in = {
		963497464,45.0,73.0,101.0,129.0
    };
	mavlink_roll_pitch_yaw_thrust_setpoint_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.roll = packet_in.roll;
        	packet1.pitch = packet_in.pitch;
        	packet1.yaw = packet_in.yaw;
        	packet1.thrust = packet_in.thrust;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.roll , packet1.pitch , packet1.yaw , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_thrust_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_roll_pitch_yaw_speed_thrust_setpoint(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_roll_pitch_yaw_speed_thrust_setpoint_t packet_in = {
		963497464,45.0,73.0,101.0,129.0
    };
	mavlink_roll_pitch_yaw_speed_thrust_setpoint_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.roll_speed = packet_in.roll_speed;
        	packet1.pitch_speed = packet_in.pitch_speed;
        	packet1.yaw_speed = packet_in.yaw_speed;
        	packet1.thrust = packet_in.thrust;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.roll_speed , packet1.pitch_speed , packet1.yaw_speed , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.roll_speed , packet1.pitch_speed , packet1.yaw_speed , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.roll_speed , packet1.pitch_speed , packet1.yaw_speed , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_speed_thrust_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_roll_pitch_yaw_rates_thrust_setpoint(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_roll_pitch_yaw_rates_thrust_setpoint_t packet_in = {
		963497464,45.0,73.0,101.0,129.0
    };
	mavlink_roll_pitch_yaw_rates_thrust_setpoint_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_boot_ms = packet_in.time_boot_ms;
        	packet1.roll_rate = packet_in.roll_rate;
        	packet1.pitch_rate = packet_in.pitch_rate;
        	packet1.yaw_rate = packet_in.yaw_rate;
        	packet1.thrust = packet_in.thrust;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.roll_rate , packet1.pitch_rate , packet1.yaw_rate , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.roll_rate , packet1.pitch_rate , packet1.yaw_rate , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.roll_rate , packet1.pitch_rate , packet1.yaw_rate , packet1.thrust );
	mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_spherical_optic_flow(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_spherical_optic_flow_t packet_in = {
		93372036854775807ULL,{ 17651, 17652, 17653, 17654, 17655, 17656, 17657, 17658, 17659, 17660, 17661, 17662, 17663, 17664, 17665, 17666, 17667, 17668 },{ 19523, 19524, 19525, 19526, 19527, 19528, 19529, 19530, 19531, 19532, 19533, 19534, 19535, 19536, 19537, 19538, 19539, 19540 },{ 21395, 21396, 21397, 21398, 21399, 21400, 21401, 21402, 21403, 21404, 21405, 21406, 21407, 21408, 21409, 21410, 21411, 21412 },{ 23267, 23268, 23269, 23270, 23271, 23272, 23273, 23274, 23275, 23276, 23277, 23278, 23279, 23280, 23281, 23282, 23283, 23284 },205,16,83,150,{ 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234 }
    };
	mavlink_spherical_optic_flow_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_usec = packet_in.time_usec;
        	packet1.id_sensor = packet_in.id_sensor;
        	packet1.nb_sensors = packet_in.nb_sensors;
        	packet1.nb_of = packet_in.nb_of;
        	packet1.status = packet_in.status;
        
        	mav_array_memcpy(packet1.of_azimuth, packet_in.of_azimuth, sizeof(int16_t)*18);
        	mav_array_memcpy(packet1.of_elevation, packet_in.of_elevation, sizeof(int16_t)*18);
        	mav_array_memcpy(packet1.azimuth, packet_in.azimuth, sizeof(int16_t)*18);
        	mav_array_memcpy(packet1.elevation, packet_in.elevation, sizeof(int16_t)*18);
        	mav_array_memcpy(packet1.of_info, packet_in.of_info, sizeof(uint8_t)*18);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_spherical_optic_flow_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_spherical_optic_flow_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_spherical_optic_flow_pack(system_id, component_id, &msg , packet1.time_usec , packet1.id_sensor , packet1.nb_sensors , packet1.nb_of , packet1.status , packet1.of_azimuth , packet1.of_elevation , packet1.azimuth , packet1.elevation , packet1.of_info );
	mavlink_msg_spherical_optic_flow_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_spherical_optic_flow_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.id_sensor , packet1.nb_sensors , packet1.nb_of , packet1.status , packet1.of_azimuth , packet1.of_elevation , packet1.azimuth , packet1.elevation , packet1.of_info );
	mavlink_msg_spherical_optic_flow_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_spherical_optic_flow_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_spherical_optic_flow_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.id_sensor , packet1.nb_sensors , packet1.nb_of , packet1.status , packet1.of_azimuth , packet1.of_elevation , packet1.azimuth , packet1.elevation , packet1.of_info );
	mavlink_msg_spherical_optic_flow_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_control_command(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_control_command_t packet_in = {
		93372036854775807ULL,73.0,{ 101.0, 102.0, 103.0 },{ 185.0, 186.0, 187.0 },{ 269.0, 270.0, 271.0 },{ 353.0, 354.0, 355.0, 356.0 },{ 465.0, 466.0, 467.0 },{ 549.0, 550.0, 551.0 }
    };
	mavlink_control_command_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_usec = packet_in.time_usec;
        	packet1.thrust = packet_in.thrust;
        
        	mav_array_memcpy(packet1.torque, packet_in.torque, sizeof(float)*3);
        	mav_array_memcpy(packet1.rate, packet_in.rate, sizeof(float)*3);
        	mav_array_memcpy(packet1.angle, packet_in.angle, sizeof(float)*3);
        	mav_array_memcpy(packet1.quat, packet_in.quat, sizeof(float)*4);
        	mav_array_memcpy(packet1.position, packet_in.position, sizeof(float)*3);
        	mav_array_memcpy(packet1.velocity, packet_in.velocity, sizeof(float)*3);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_command_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_control_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_command_pack(system_id, component_id, &msg , packet1.time_usec , packet1.thrust , packet1.torque , packet1.rate , packet1.angle , packet1.quat , packet1.position , packet1.velocity );
	mavlink_msg_control_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_command_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.thrust , packet1.torque , packet1.rate , packet1.angle , packet1.quat , packet1.position , packet1.velocity );
	mavlink_msg_control_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_control_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_control_command_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.thrust , packet1.torque , packet1.rate , packet1.angle , packet1.quat , packet1.position , packet1.velocity );
	mavlink_msg_control_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gimbal_command(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_gimbal_command_t packet_in = {
		93372036854775807ULL,{ 73.0, 74.0, 75.0 },65
    };
	mavlink_gimbal_command_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_usec = packet_in.time_usec;
        	packet1.state = packet_in.state;
        
        	mav_array_memcpy(packet1.angle, packet_in.angle, sizeof(float)*3);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_gimbal_command_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_gimbal_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_gimbal_command_pack(system_id, component_id, &msg , packet1.time_usec , packet1.angle , packet1.state );
	mavlink_msg_gimbal_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_gimbal_command_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.angle , packet1.state );
	mavlink_msg_gimbal_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_gimbal_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_gimbal_command_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.angle , packet1.state );
	mavlink_msg_gimbal_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_angle_rate_velocity_sensors(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_angle_rate_velocity_sensors_t packet_in = {
		93372036854775807ULL,{ 73.0, 74.0, 75.0 },{ 157.0, 158.0, 159.0 },241.0,269.0,297.0,325.0
    };
	mavlink_angle_rate_velocity_sensors_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_usec = packet_in.time_usec;
        	packet1.velocity_local_x = packet_in.velocity_local_x;
        	packet1.velocity_local_y = packet_in.velocity_local_y;
        	packet1.velocity_global_z = packet_in.velocity_global_z;
        	packet1.yaw_rate_global = packet_in.yaw_rate_global;
        
        	mav_array_memcpy(packet1.angle, packet_in.angle, sizeof(float)*3);
        	mav_array_memcpy(packet1.rate, packet_in.rate, sizeof(float)*3);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_angle_rate_velocity_sensors_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_angle_rate_velocity_sensors_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_angle_rate_velocity_sensors_pack(system_id, component_id, &msg , packet1.time_usec , packet1.angle , packet1.rate , packet1.velocity_local_x , packet1.velocity_local_y , packet1.velocity_global_z , packet1.yaw_rate_global );
	mavlink_msg_angle_rate_velocity_sensors_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_angle_rate_velocity_sensors_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.angle , packet1.rate , packet1.velocity_local_x , packet1.velocity_local_y , packet1.velocity_global_z , packet1.yaw_rate_global );
	mavlink_msg_angle_rate_velocity_sensors_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_angle_rate_velocity_sensors_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_angle_rate_velocity_sensors_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.angle , packet1.rate , packet1.velocity_local_x , packet1.velocity_local_y , packet1.velocity_global_z , packet1.yaw_rate_global );
	mavlink_msg_angle_rate_velocity_sensors_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_big_debug_vect(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_big_debug_vect_t packet_in = {
		93372036854775807ULL,{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0, 81.0, 82.0, 83.0, 84.0, 85.0, 86.0, 87.0, 88.0, 89.0, 90.0, 91.0, 92.0, 93.0, 94.0, 95.0, 96.0, 97.0, 98.0, 99.0, 100.0, 101.0, 102.0, 103.0, 104.0, 105.0, 106.0, 107.0, 108.0, 109.0, 110.0, 111.0, 112.0, 113.0, 114.0, 115.0, 116.0, 117.0, 118.0, 119.0, 120.0, 121.0, 122.0, 123.0, 124.0, 125.0, 126.0, 127.0, 128.0, 129.0, 130.0, 131.0, 132.0 },"OPQRST"
    };
	mavlink_big_debug_vect_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.time_usec = packet_in.time_usec;
        
        	mav_array_memcpy(packet1.data, packet_in.data, sizeof(float)*60);
        	mav_array_memcpy(packet1.name, packet_in.name, sizeof(char)*7);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_big_debug_vect_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_big_debug_vect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_big_debug_vect_pack(system_id, component_id, &msg , packet1.name , packet1.time_usec , packet1.data );
	mavlink_msg_big_debug_vect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_big_debug_vect_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.name , packet1.time_usec , packet1.data );
	mavlink_msg_big_debug_vect_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_big_debug_vect_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_big_debug_vect_send(MAVLINK_COMM_1 , packet1.name , packet1.time_usec , packet1.data );
	mavlink_msg_big_debug_vect_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mavric(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_roll_pitch_yaw_thrust_setpoint(system_id, component_id, last_msg);
	mavlink_test_roll_pitch_yaw_speed_thrust_setpoint(system_id, component_id, last_msg);
	mavlink_test_roll_pitch_yaw_rates_thrust_setpoint(system_id, component_id, last_msg);
	mavlink_test_spherical_optic_flow(system_id, component_id, last_msg);
	mavlink_test_control_command(system_id, component_id, last_msg);
	mavlink_test_gimbal_command(system_id, component_id, last_msg);
	mavlink_test_angle_rate_velocity_sensors(system_id, component_id, last_msg);
	mavlink_test_big_debug_vect(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVRIC_TESTSUITE_H
