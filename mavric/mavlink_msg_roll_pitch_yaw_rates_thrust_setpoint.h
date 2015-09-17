// MESSAGE ROLL_PITCH_YAW_RATES_THRUST_SETPOINT PACKING

<<<<<<< HEAD
#define MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT 165
=======
#define MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT 182
>>>>>>> f15e578e12c74c5b65542b99dc056f01753c7838

typedef struct __mavlink_roll_pitch_yaw_rates_thrust_setpoint_t
{
 uint32_t time_boot_ms; /*< Timestamp in milliseconds since system boot*/
 float roll_rate; /*< Desired roll rate in radians per second*/
 float pitch_rate; /*< Desired pitch rate in radians per second*/
 float yaw_rate; /*< Desired yaw rate in radians per second*/
 float thrust; /*< Collective thrust, normalized to 0 .. 1*/
} mavlink_roll_pitch_yaw_rates_thrust_setpoint_t;

#define MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN 20
<<<<<<< HEAD
#define MAVLINK_MSG_ID_165_LEN 20

#define MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_CRC 127
#define MAVLINK_MSG_ID_165_CRC 127
=======
#define MAVLINK_MSG_ID_182_LEN 20

#define MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_CRC 127
#define MAVLINK_MSG_ID_182_CRC 127
>>>>>>> f15e578e12c74c5b65542b99dc056f01753c7838



#define MAVLINK_MESSAGE_INFO_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT { \
	"ROLL_PITCH_YAW_RATES_THRUST_SETPOINT", \
	5, \
	{  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_roll_pitch_yaw_rates_thrust_setpoint_t, time_boot_ms) }, \
         { "roll_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_roll_pitch_yaw_rates_thrust_setpoint_t, roll_rate) }, \
         { "pitch_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_roll_pitch_yaw_rates_thrust_setpoint_t, pitch_rate) }, \
         { "yaw_rate", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_roll_pitch_yaw_rates_thrust_setpoint_t, yaw_rate) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_roll_pitch_yaw_rates_thrust_setpoint_t, thrust) }, \
         } \
}


/**
 * @brief Pack a roll_pitch_yaw_rates_thrust_setpoint message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param roll_rate Desired roll rate in radians per second
 * @param pitch_rate Desired pitch rate in radians per second
 * @param yaw_rate Desired yaw rate in radians per second
 * @param thrust Collective thrust, normalized to 0 .. 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t time_boot_ms, float roll_rate, float pitch_rate, float yaw_rate, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, roll_rate);
	_mav_put_float(buf, 8, pitch_rate);
	_mav_put_float(buf, 12, yaw_rate);
	_mav_put_float(buf, 16, thrust);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#else
	mavlink_roll_pitch_yaw_rates_thrust_setpoint_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.roll_rate = roll_rate;
	packet.pitch_rate = pitch_rate;
	packet.yaw_rate = yaw_rate;
	packet.thrust = thrust;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif
}

/**
 * @brief Pack a roll_pitch_yaw_rates_thrust_setpoint message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param roll_rate Desired roll rate in radians per second
 * @param pitch_rate Desired pitch rate in radians per second
 * @param yaw_rate Desired yaw rate in radians per second
 * @param thrust Collective thrust, normalized to 0 .. 1
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t time_boot_ms,float roll_rate,float pitch_rate,float yaw_rate,float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, roll_rate);
	_mav_put_float(buf, 8, pitch_rate);
	_mav_put_float(buf, 12, yaw_rate);
	_mav_put_float(buf, 16, thrust);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#else
	mavlink_roll_pitch_yaw_rates_thrust_setpoint_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.roll_rate = roll_rate;
	packet.pitch_rate = pitch_rate;
	packet.yaw_rate = yaw_rate;
	packet.thrust = thrust;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif
}

/**
 * @brief Encode a roll_pitch_yaw_rates_thrust_setpoint struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param roll_pitch_yaw_rates_thrust_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_roll_pitch_yaw_rates_thrust_setpoint_t* roll_pitch_yaw_rates_thrust_setpoint)
{
	return mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_pack(system_id, component_id, msg, roll_pitch_yaw_rates_thrust_setpoint->time_boot_ms, roll_pitch_yaw_rates_thrust_setpoint->roll_rate, roll_pitch_yaw_rates_thrust_setpoint->pitch_rate, roll_pitch_yaw_rates_thrust_setpoint->yaw_rate, roll_pitch_yaw_rates_thrust_setpoint->thrust);
}

/**
 * @brief Encode a roll_pitch_yaw_rates_thrust_setpoint struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param roll_pitch_yaw_rates_thrust_setpoint C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_roll_pitch_yaw_rates_thrust_setpoint_t* roll_pitch_yaw_rates_thrust_setpoint)
{
	return mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_pack_chan(system_id, component_id, chan, msg, roll_pitch_yaw_rates_thrust_setpoint->time_boot_ms, roll_pitch_yaw_rates_thrust_setpoint->roll_rate, roll_pitch_yaw_rates_thrust_setpoint->pitch_rate, roll_pitch_yaw_rates_thrust_setpoint->yaw_rate, roll_pitch_yaw_rates_thrust_setpoint->thrust);
}

/**
 * @brief Send a roll_pitch_yaw_rates_thrust_setpoint message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms Timestamp in milliseconds since system boot
 * @param roll_rate Desired roll rate in radians per second
 * @param pitch_rate Desired pitch rate in radians per second
 * @param yaw_rate Desired yaw rate in radians per second
 * @param thrust Collective thrust, normalized to 0 .. 1
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_send(mavlink_channel_t chan, uint32_t time_boot_ms, float roll_rate, float pitch_rate, float yaw_rate, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN];
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, roll_rate);
	_mav_put_float(buf, 8, pitch_rate);
	_mav_put_float(buf, 12, yaw_rate);
	_mav_put_float(buf, 16, thrust);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT, buf, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT, buf, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif
#else
	mavlink_roll_pitch_yaw_rates_thrust_setpoint_t packet;
	packet.time_boot_ms = time_boot_ms;
	packet.roll_rate = roll_rate;
	packet.pitch_rate = pitch_rate;
	packet.yaw_rate = yaw_rate;
	packet.thrust = thrust;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT, (const char *)&packet, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT, (const char *)&packet, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float roll_rate, float pitch_rate, float yaw_rate, float thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, time_boot_ms);
	_mav_put_float(buf, 4, roll_rate);
	_mav_put_float(buf, 8, pitch_rate);
	_mav_put_float(buf, 12, yaw_rate);
	_mav_put_float(buf, 16, thrust);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT, buf, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT, buf, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif
#else
	mavlink_roll_pitch_yaw_rates_thrust_setpoint_t *packet = (mavlink_roll_pitch_yaw_rates_thrust_setpoint_t *)msgbuf;
	packet->time_boot_ms = time_boot_ms;
	packet->roll_rate = roll_rate;
	packet->pitch_rate = pitch_rate;
	packet->yaw_rate = yaw_rate;
	packet->thrust = thrust;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT, (const char *)packet, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT, (const char *)packet, MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROLL_PITCH_YAW_RATES_THRUST_SETPOINT UNPACKING


/**
 * @brief Get field time_boot_ms from roll_pitch_yaw_rates_thrust_setpoint message
 *
 * @return Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_time_boot_ms(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field roll_rate from roll_pitch_yaw_rates_thrust_setpoint message
 *
 * @return Desired roll rate in radians per second
 */
static inline float mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_roll_rate(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch_rate from roll_pitch_yaw_rates_thrust_setpoint message
 *
 * @return Desired pitch rate in radians per second
 */
static inline float mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_pitch_rate(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw_rate from roll_pitch_yaw_rates_thrust_setpoint message
 *
 * @return Desired yaw rate in radians per second
 */
static inline float mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_yaw_rate(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field thrust from roll_pitch_yaw_rates_thrust_setpoint message
 *
 * @return Collective thrust, normalized to 0 .. 1
 */
static inline float mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_thrust(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a roll_pitch_yaw_rates_thrust_setpoint message into a struct
 *
 * @param msg The message to decode
 * @param roll_pitch_yaw_rates_thrust_setpoint C-struct to decode the message contents into
 */
static inline void mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_decode(const mavlink_message_t* msg, mavlink_roll_pitch_yaw_rates_thrust_setpoint_t* roll_pitch_yaw_rates_thrust_setpoint)
{
#if MAVLINK_NEED_BYTE_SWAP
	roll_pitch_yaw_rates_thrust_setpoint->time_boot_ms = mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_time_boot_ms(msg);
	roll_pitch_yaw_rates_thrust_setpoint->roll_rate = mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_roll_rate(msg);
	roll_pitch_yaw_rates_thrust_setpoint->pitch_rate = mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_pitch_rate(msg);
	roll_pitch_yaw_rates_thrust_setpoint->yaw_rate = mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_yaw_rate(msg);
	roll_pitch_yaw_rates_thrust_setpoint->thrust = mavlink_msg_roll_pitch_yaw_rates_thrust_setpoint_get_thrust(msg);
#else
	memcpy(roll_pitch_yaw_rates_thrust_setpoint, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROLL_PITCH_YAW_RATES_THRUST_SETPOINT_LEN);
#endif
}
