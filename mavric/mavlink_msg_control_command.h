// MESSAGE CONTROL_COMMAND PACKING

#define MAVLINK_MSG_ID_CONTROL_COMMAND 184

typedef struct __mavlink_control_command_t
{
 uint64_t time_usec; ///< Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 float thrust; ///< Thrust command
 float torque[3]; ///< Torque command
 float rate[3]; ///< Rate command
 float angle[3]; ///< Angle command
 float quat[4]; ///< Attitude command
 float position[3]; ///< Position command
 float velocity[3]; ///< Velocity command
} mavlink_control_command_t;

#define MAVLINK_MSG_ID_CONTROL_COMMAND_LEN 88
#define MAVLINK_MSG_ID_184_LEN 88

#define MAVLINK_MSG_ID_CONTROL_COMMAND_CRC 189
#define MAVLINK_MSG_ID_184_CRC 189

#define MAVLINK_MSG_CONTROL_COMMAND_FIELD_TORQUE_LEN 3
#define MAVLINK_MSG_CONTROL_COMMAND_FIELD_RATE_LEN 3
#define MAVLINK_MSG_CONTROL_COMMAND_FIELD_ANGLE_LEN 3
#define MAVLINK_MSG_CONTROL_COMMAND_FIELD_QUAT_LEN 4
#define MAVLINK_MSG_CONTROL_COMMAND_FIELD_POSITION_LEN 3
#define MAVLINK_MSG_CONTROL_COMMAND_FIELD_VELOCITY_LEN 3

#define MAVLINK_MESSAGE_INFO_CONTROL_COMMAND { \
	"CONTROL_COMMAND", \
	8, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_control_command_t, time_usec) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_control_command_t, thrust) }, \
         { "torque", NULL, MAVLINK_TYPE_FLOAT, 3, 12, offsetof(mavlink_control_command_t, torque) }, \
         { "rate", NULL, MAVLINK_TYPE_FLOAT, 3, 24, offsetof(mavlink_control_command_t, rate) }, \
         { "angle", NULL, MAVLINK_TYPE_FLOAT, 3, 36, offsetof(mavlink_control_command_t, angle) }, \
         { "quat", NULL, MAVLINK_TYPE_FLOAT, 4, 48, offsetof(mavlink_control_command_t, quat) }, \
         { "position", NULL, MAVLINK_TYPE_FLOAT, 3, 64, offsetof(mavlink_control_command_t, position) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 3, 76, offsetof(mavlink_control_command_t, velocity) }, \
         } \
}


/**
 * @brief Pack a control_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param thrust Thrust command
 * @param torque Torque command
 * @param rate Rate command
 * @param angle Angle command
 * @param quat Attitude command
 * @param position Position command
 * @param velocity Velocity command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_control_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, float thrust, const float *torque, const float *rate, const float *angle, const float *quat, const float *position, const float *velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROL_COMMAND_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, thrust);
	_mav_put_float_array(buf, 12, torque, 3);
	_mav_put_float_array(buf, 24, rate, 3);
	_mav_put_float_array(buf, 36, angle, 3);
	_mav_put_float_array(buf, 48, quat, 4);
	_mav_put_float_array(buf, 64, position, 3);
	_mav_put_float_array(buf, 76, velocity, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#else
	mavlink_control_command_t packet;
	packet.time_usec = time_usec;
	packet.thrust = thrust;
	mav_array_memcpy(packet.torque, torque, sizeof(float)*3);
	mav_array_memcpy(packet.rate, rate, sizeof(float)*3);
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
	mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CONTROL_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN, MAVLINK_MSG_ID_CONTROL_COMMAND_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif
}

/**
 * @brief Pack a control_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param thrust Thrust command
 * @param torque Torque command
 * @param rate Rate command
 * @param angle Angle command
 * @param quat Attitude command
 * @param position Position command
 * @param velocity Velocity command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_control_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,float thrust,const float *torque,const float *rate,const float *angle,const float *quat,const float *position,const float *velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROL_COMMAND_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, thrust);
	_mav_put_float_array(buf, 12, torque, 3);
	_mav_put_float_array(buf, 24, rate, 3);
	_mav_put_float_array(buf, 36, angle, 3);
	_mav_put_float_array(buf, 48, quat, 4);
	_mav_put_float_array(buf, 64, position, 3);
	_mav_put_float_array(buf, 76, velocity, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#else
	mavlink_control_command_t packet;
	packet.time_usec = time_usec;
	packet.thrust = thrust;
	mav_array_memcpy(packet.torque, torque, sizeof(float)*3);
	mav_array_memcpy(packet.rate, rate, sizeof(float)*3);
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
	mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CONTROL_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN, MAVLINK_MSG_ID_CONTROL_COMMAND_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif
}

/**
 * @brief Encode a control_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param control_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_control_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_control_command_t* control_command)
{
	return mavlink_msg_control_command_pack(system_id, component_id, msg, control_command->time_usec, control_command->thrust, control_command->torque, control_command->rate, control_command->angle, control_command->quat, control_command->position, control_command->velocity);
}

/**
 * @brief Encode a control_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param control_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_control_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_control_command_t* control_command)
{
	return mavlink_msg_control_command_pack_chan(system_id, component_id, chan, msg, control_command->time_usec, control_command->thrust, control_command->torque, control_command->rate, control_command->angle, control_command->quat, control_command->position, control_command->velocity);
}

/**
 * @brief Send a control_command message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param thrust Thrust command
 * @param torque Torque command
 * @param rate Rate command
 * @param angle Angle command
 * @param quat Attitude command
 * @param position Position command
 * @param velocity Velocity command
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_control_command_send(mavlink_channel_t chan, uint64_t time_usec, float thrust, const float *torque, const float *rate, const float *angle, const float *quat, const float *position, const float *velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CONTROL_COMMAND_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, thrust);
	_mav_put_float_array(buf, 12, torque, 3);
	_mav_put_float_array(buf, 24, rate, 3);
	_mav_put_float_array(buf, 36, angle, 3);
	_mav_put_float_array(buf, 48, quat, 4);
	_mav_put_float_array(buf, 64, position, 3);
	_mav_put_float_array(buf, 76, velocity, 3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_COMMAND, buf, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN, MAVLINK_MSG_ID_CONTROL_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_COMMAND, buf, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif
#else
	mavlink_control_command_t packet;
	packet.time_usec = time_usec;
	packet.thrust = thrust;
	mav_array_memcpy(packet.torque, torque, sizeof(float)*3);
	mav_array_memcpy(packet.rate, rate, sizeof(float)*3);
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
	mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
	mav_array_memcpy(packet.position, position, sizeof(float)*3);
	mav_array_memcpy(packet.velocity, velocity, sizeof(float)*3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN, MAVLINK_MSG_ID_CONTROL_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CONTROL_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_control_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float thrust, const float *torque, const float *rate, const float *angle, const float *quat, const float *position, const float *velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, thrust);
	_mav_put_float_array(buf, 12, torque, 3);
	_mav_put_float_array(buf, 24, rate, 3);
	_mav_put_float_array(buf, 36, angle, 3);
	_mav_put_float_array(buf, 48, quat, 4);
	_mav_put_float_array(buf, 64, position, 3);
	_mav_put_float_array(buf, 76, velocity, 3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_COMMAND, buf, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN, MAVLINK_MSG_ID_CONTROL_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_COMMAND, buf, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif
#else
	mavlink_control_command_t *packet = (mavlink_control_command_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->thrust = thrust;
	mav_array_memcpy(packet->torque, torque, sizeof(float)*3);
	mav_array_memcpy(packet->rate, rate, sizeof(float)*3);
	mav_array_memcpy(packet->angle, angle, sizeof(float)*3);
	mav_array_memcpy(packet->quat, quat, sizeof(float)*4);
	mav_array_memcpy(packet->position, position, sizeof(float)*3);
	mav_array_memcpy(packet->velocity, velocity, sizeof(float)*3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_COMMAND, (const char *)packet, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN, MAVLINK_MSG_ID_CONTROL_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CONTROL_COMMAND, (const char *)packet, MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CONTROL_COMMAND UNPACKING


/**
 * @brief Get field time_usec from control_command message
 *
 * @return Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 */
static inline uint64_t mavlink_msg_control_command_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field thrust from control_command message
 *
 * @return Thrust command
 */
static inline float mavlink_msg_control_command_get_thrust(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field torque from control_command message
 *
 * @return Torque command
 */
static inline uint16_t mavlink_msg_control_command_get_torque(const mavlink_message_t* msg, float *torque)
{
	return _MAV_RETURN_float_array(msg, torque, 3,  12);
}

/**
 * @brief Get field rate from control_command message
 *
 * @return Rate command
 */
static inline uint16_t mavlink_msg_control_command_get_rate(const mavlink_message_t* msg, float *rate)
{
	return _MAV_RETURN_float_array(msg, rate, 3,  24);
}

/**
 * @brief Get field angle from control_command message
 *
 * @return Angle command
 */
static inline uint16_t mavlink_msg_control_command_get_angle(const mavlink_message_t* msg, float *angle)
{
	return _MAV_RETURN_float_array(msg, angle, 3,  36);
}

/**
 * @brief Get field quat from control_command message
 *
 * @return Attitude command
 */
static inline uint16_t mavlink_msg_control_command_get_quat(const mavlink_message_t* msg, float *quat)
{
	return _MAV_RETURN_float_array(msg, quat, 4,  48);
}

/**
 * @brief Get field position from control_command message
 *
 * @return Position command
 */
static inline uint16_t mavlink_msg_control_command_get_position(const mavlink_message_t* msg, float *position)
{
	return _MAV_RETURN_float_array(msg, position, 3,  64);
}

/**
 * @brief Get field velocity from control_command message
 *
 * @return Velocity command
 */
static inline uint16_t mavlink_msg_control_command_get_velocity(const mavlink_message_t* msg, float *velocity)
{
	return _MAV_RETURN_float_array(msg, velocity, 3,  76);
}

/**
 * @brief Decode a control_command message into a struct
 *
 * @param msg The message to decode
 * @param control_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_control_command_decode(const mavlink_message_t* msg, mavlink_control_command_t* control_command)
{
#if MAVLINK_NEED_BYTE_SWAP
	control_command->time_usec = mavlink_msg_control_command_get_time_usec(msg);
	control_command->thrust = mavlink_msg_control_command_get_thrust(msg);
	mavlink_msg_control_command_get_torque(msg, control_command->torque);
	mavlink_msg_control_command_get_rate(msg, control_command->rate);
	mavlink_msg_control_command_get_angle(msg, control_command->angle);
	mavlink_msg_control_command_get_quat(msg, control_command->quat);
	mavlink_msg_control_command_get_position(msg, control_command->position);
	mavlink_msg_control_command_get_velocity(msg, control_command->velocity);
#else
	memcpy(control_command, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CONTROL_COMMAND_LEN);
#endif
}
