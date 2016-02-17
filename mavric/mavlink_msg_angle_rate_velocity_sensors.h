// MESSAGE ANGLE_RATE_VELOCITY_SENSORS PACKING

#define MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS 186

typedef struct __mavlink_angle_rate_velocity_sensors_t
{
 uint64_t time_usec; /*< Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
 float angle[3]; /*< angle sensors value*/
 float rate[3]; /*< rate sensors value*/
 float velocity_local_x; /*< x velocity in local (body) frame*/
 float velocity_local_y; /*< y velocity in local (body) frame*/
 float velocity_global_z; /*< z velocity in global frame*/
 float yaw_rate_global; /*< yaw rate in global frame*/
} mavlink_angle_rate_velocity_sensors_t;

#define MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN 48
#define MAVLINK_MSG_ID_186_LEN 48

#define MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_CRC 135
#define MAVLINK_MSG_ID_186_CRC 135

#define MAVLINK_MSG_ANGLE_RATE_VELOCITY_SENSORS_FIELD_ANGLE_LEN 3
#define MAVLINK_MSG_ANGLE_RATE_VELOCITY_SENSORS_FIELD_RATE_LEN 3

#define MAVLINK_MESSAGE_INFO_ANGLE_RATE_VELOCITY_SENSORS { \
	"ANGLE_RATE_VELOCITY_SENSORS", \
	7, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_angle_rate_velocity_sensors_t, time_usec) }, \
         { "angle", NULL, MAVLINK_TYPE_FLOAT, 3, 8, offsetof(mavlink_angle_rate_velocity_sensors_t, angle) }, \
         { "rate", NULL, MAVLINK_TYPE_FLOAT, 3, 20, offsetof(mavlink_angle_rate_velocity_sensors_t, rate) }, \
         { "velocity_local_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_angle_rate_velocity_sensors_t, velocity_local_x) }, \
         { "velocity_local_y", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_angle_rate_velocity_sensors_t, velocity_local_y) }, \
         { "velocity_global_z", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_angle_rate_velocity_sensors_t, velocity_global_z) }, \
         { "yaw_rate_global", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_angle_rate_velocity_sensors_t, yaw_rate_global) }, \
         } \
}


/**
 * @brief Pack a angle_rate_velocity_sensors message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param angle angle sensors value
 * @param rate rate sensors value
 * @param velocity_local_x x velocity in local (body) frame
 * @param velocity_local_y y velocity in local (body) frame
 * @param velocity_global_z z velocity in global frame
 * @param yaw_rate_global yaw rate in global frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_angle_rate_velocity_sensors_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, const float *angle, const float *rate, float velocity_local_x, float velocity_local_y, float velocity_global_z, float yaw_rate_global)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 32, velocity_local_x);
	_mav_put_float(buf, 36, velocity_local_y);
	_mav_put_float(buf, 40, velocity_global_z);
	_mav_put_float(buf, 44, yaw_rate_global);
	_mav_put_float_array(buf, 8, angle, 3);
	_mav_put_float_array(buf, 20, rate, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#else
	mavlink_angle_rate_velocity_sensors_t packet;
	packet.time_usec = time_usec;
	packet.velocity_local_x = velocity_local_x;
	packet.velocity_local_y = velocity_local_y;
	packet.velocity_global_z = velocity_global_z;
	packet.yaw_rate_global = yaw_rate_global;
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
	mav_array_memcpy(packet.rate, rate, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif
}

/**
 * @brief Pack a angle_rate_velocity_sensors message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param angle angle sensors value
 * @param rate rate sensors value
 * @param velocity_local_x x velocity in local (body) frame
 * @param velocity_local_y y velocity in local (body) frame
 * @param velocity_global_z z velocity in global frame
 * @param yaw_rate_global yaw rate in global frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_angle_rate_velocity_sensors_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,const float *angle,const float *rate,float velocity_local_x,float velocity_local_y,float velocity_global_z,float yaw_rate_global)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 32, velocity_local_x);
	_mav_put_float(buf, 36, velocity_local_y);
	_mav_put_float(buf, 40, velocity_global_z);
	_mav_put_float(buf, 44, yaw_rate_global);
	_mav_put_float_array(buf, 8, angle, 3);
	_mav_put_float_array(buf, 20, rate, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#else
	mavlink_angle_rate_velocity_sensors_t packet;
	packet.time_usec = time_usec;
	packet.velocity_local_x = velocity_local_x;
	packet.velocity_local_y = velocity_local_y;
	packet.velocity_global_z = velocity_global_z;
	packet.yaw_rate_global = yaw_rate_global;
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
	mav_array_memcpy(packet.rate, rate, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif
}

/**
 * @brief Encode a angle_rate_velocity_sensors struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param angle_rate_velocity_sensors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_angle_rate_velocity_sensors_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_angle_rate_velocity_sensors_t* angle_rate_velocity_sensors)
{
	return mavlink_msg_angle_rate_velocity_sensors_pack(system_id, component_id, msg, angle_rate_velocity_sensors->time_usec, angle_rate_velocity_sensors->angle, angle_rate_velocity_sensors->rate, angle_rate_velocity_sensors->velocity_local_x, angle_rate_velocity_sensors->velocity_local_y, angle_rate_velocity_sensors->velocity_global_z, angle_rate_velocity_sensors->yaw_rate_global);
}

/**
 * @brief Encode a angle_rate_velocity_sensors struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param angle_rate_velocity_sensors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_angle_rate_velocity_sensors_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_angle_rate_velocity_sensors_t* angle_rate_velocity_sensors)
{
	return mavlink_msg_angle_rate_velocity_sensors_pack_chan(system_id, component_id, chan, msg, angle_rate_velocity_sensors->time_usec, angle_rate_velocity_sensors->angle, angle_rate_velocity_sensors->rate, angle_rate_velocity_sensors->velocity_local_x, angle_rate_velocity_sensors->velocity_local_y, angle_rate_velocity_sensors->velocity_global_z, angle_rate_velocity_sensors->yaw_rate_global);
}

/**
 * @brief Send a angle_rate_velocity_sensors message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param angle angle sensors value
 * @param rate rate sensors value
 * @param velocity_local_x x velocity in local (body) frame
 * @param velocity_local_y y velocity in local (body) frame
 * @param velocity_global_z z velocity in global frame
 * @param yaw_rate_global yaw rate in global frame
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_angle_rate_velocity_sensors_send(mavlink_channel_t chan, uint64_t time_usec, const float *angle, const float *rate, float velocity_local_x, float velocity_local_y, float velocity_global_z, float yaw_rate_global)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 32, velocity_local_x);
	_mav_put_float(buf, 36, velocity_local_y);
	_mav_put_float(buf, 40, velocity_global_z);
	_mav_put_float(buf, 44, yaw_rate_global);
	_mav_put_float_array(buf, 8, angle, 3);
	_mav_put_float_array(buf, 20, rate, 3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS, buf, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS, buf, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif
#else
	mavlink_angle_rate_velocity_sensors_t packet;
	packet.time_usec = time_usec;
	packet.velocity_local_x = velocity_local_x;
	packet.velocity_local_y = velocity_local_y;
	packet.velocity_global_z = velocity_global_z;
	packet.yaw_rate_global = yaw_rate_global;
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
	mav_array_memcpy(packet.rate, rate, sizeof(float)*3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS, (const char *)&packet, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS, (const char *)&packet, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_angle_rate_velocity_sensors_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, const float *angle, const float *rate, float velocity_local_x, float velocity_local_y, float velocity_global_z, float yaw_rate_global)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 32, velocity_local_x);
	_mav_put_float(buf, 36, velocity_local_y);
	_mav_put_float(buf, 40, velocity_global_z);
	_mav_put_float(buf, 44, yaw_rate_global);
	_mav_put_float_array(buf, 8, angle, 3);
	_mav_put_float_array(buf, 20, rate, 3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS, buf, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS, buf, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif
#else
	mavlink_angle_rate_velocity_sensors_t *packet = (mavlink_angle_rate_velocity_sensors_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->velocity_local_x = velocity_local_x;
	packet->velocity_local_y = velocity_local_y;
	packet->velocity_global_z = velocity_global_z;
	packet->yaw_rate_global = yaw_rate_global;
	mav_array_memcpy(packet->angle, angle, sizeof(float)*3);
	mav_array_memcpy(packet->rate, rate, sizeof(float)*3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS, (const char *)packet, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS, (const char *)packet, MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ANGLE_RATE_VELOCITY_SENSORS UNPACKING


/**
 * @brief Get field time_usec from angle_rate_velocity_sensors message
 *
 * @return Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 */
static inline uint64_t mavlink_msg_angle_rate_velocity_sensors_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field angle from angle_rate_velocity_sensors message
 *
 * @return angle sensors value
 */
static inline uint16_t mavlink_msg_angle_rate_velocity_sensors_get_angle(const mavlink_message_t* msg, float *angle)
{
	return _MAV_RETURN_float_array(msg, angle, 3,  8);
}

/**
 * @brief Get field rate from angle_rate_velocity_sensors message
 *
 * @return rate sensors value
 */
static inline uint16_t mavlink_msg_angle_rate_velocity_sensors_get_rate(const mavlink_message_t* msg, float *rate)
{
	return _MAV_RETURN_float_array(msg, rate, 3,  20);
}

/**
 * @brief Get field velocity_local_x from angle_rate_velocity_sensors message
 *
 * @return x velocity in local (body) frame
 */
static inline float mavlink_msg_angle_rate_velocity_sensors_get_velocity_local_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field velocity_local_y from angle_rate_velocity_sensors message
 *
 * @return y velocity in local (body) frame
 */
static inline float mavlink_msg_angle_rate_velocity_sensors_get_velocity_local_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field velocity_global_z from angle_rate_velocity_sensors message
 *
 * @return z velocity in global frame
 */
static inline float mavlink_msg_angle_rate_velocity_sensors_get_velocity_global_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field yaw_rate_global from angle_rate_velocity_sensors message
 *
 * @return yaw rate in global frame
 */
static inline float mavlink_msg_angle_rate_velocity_sensors_get_yaw_rate_global(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a angle_rate_velocity_sensors message into a struct
 *
 * @param msg The message to decode
 * @param angle_rate_velocity_sensors C-struct to decode the message contents into
 */
static inline void mavlink_msg_angle_rate_velocity_sensors_decode(const mavlink_message_t* msg, mavlink_angle_rate_velocity_sensors_t* angle_rate_velocity_sensors)
{
#if MAVLINK_NEED_BYTE_SWAP
	angle_rate_velocity_sensors->time_usec = mavlink_msg_angle_rate_velocity_sensors_get_time_usec(msg);
	mavlink_msg_angle_rate_velocity_sensors_get_angle(msg, angle_rate_velocity_sensors->angle);
	mavlink_msg_angle_rate_velocity_sensors_get_rate(msg, angle_rate_velocity_sensors->rate);
	angle_rate_velocity_sensors->velocity_local_x = mavlink_msg_angle_rate_velocity_sensors_get_velocity_local_x(msg);
	angle_rate_velocity_sensors->velocity_local_y = mavlink_msg_angle_rate_velocity_sensors_get_velocity_local_y(msg);
	angle_rate_velocity_sensors->velocity_global_z = mavlink_msg_angle_rate_velocity_sensors_get_velocity_global_z(msg);
	angle_rate_velocity_sensors->yaw_rate_global = mavlink_msg_angle_rate_velocity_sensors_get_yaw_rate_global(msg);
#else
	memcpy(angle_rate_velocity_sensors, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ANGLE_RATE_VELOCITY_SENSORS_LEN);
#endif
}
