// MESSAGE GIMBAL_COMMAND PACKING

#define MAVLINK_MSG_ID_GIMBAL_COMMAND 185

typedef struct __mavlink_gimbal_command_t
{
 uint64_t time_usec; /*< Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
 float angle[3]; /*< Angle command*/
 uint8_t state; /*< Command the state of the gimbal*/
} mavlink_gimbal_command_t;

#define MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN 21
#define MAVLINK_MSG_ID_185_LEN 21

#define MAVLINK_MSG_ID_GIMBAL_COMMAND_CRC 60
#define MAVLINK_MSG_ID_185_CRC 60

#define MAVLINK_MSG_GIMBAL_COMMAND_FIELD_ANGLE_LEN 3

#define MAVLINK_MESSAGE_INFO_GIMBAL_COMMAND { \
	"GIMBAL_COMMAND", \
	3, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_gimbal_command_t, time_usec) }, \
         { "angle", NULL, MAVLINK_TYPE_FLOAT, 3, 8, offsetof(mavlink_gimbal_command_t, angle) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_gimbal_command_t, state) }, \
         } \
}


/**
 * @brief Pack a gimbal_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param angle Angle command
 * @param state Command the state of the gimbal
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, const float *angle, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_uint8_t(buf, 20, state);
	_mav_put_float_array(buf, 8, angle, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#else
	mavlink_gimbal_command_t packet;
	packet.time_usec = time_usec;
	packet.state = state;
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_GIMBAL_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN, MAVLINK_MSG_ID_GIMBAL_COMMAND_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif
}

/**
 * @brief Pack a gimbal_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param angle Angle command
 * @param state Command the state of the gimbal
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,const float *angle,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_uint8_t(buf, 20, state);
	_mav_put_float_array(buf, 8, angle, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#else
	mavlink_gimbal_command_t packet;
	packet.time_usec = time_usec;
	packet.state = state;
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_GIMBAL_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN, MAVLINK_MSG_ID_GIMBAL_COMMAND_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif
}

/**
 * @brief Encode a gimbal_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gimbal_command_t* gimbal_command)
{
	return mavlink_msg_gimbal_command_pack(system_id, component_id, msg, gimbal_command->time_usec, gimbal_command->angle, gimbal_command->state);
}

/**
 * @brief Encode a gimbal_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gimbal_command_t* gimbal_command)
{
	return mavlink_msg_gimbal_command_pack_chan(system_id, component_id, chan, msg, gimbal_command->time_usec, gimbal_command->angle, gimbal_command->state);
}

/**
 * @brief Send a gimbal_command message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param angle Angle command
 * @param state Command the state of the gimbal
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gimbal_command_send(mavlink_channel_t chan, uint64_t time_usec, const float *angle, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_uint8_t(buf, 20, state);
	_mav_put_float_array(buf, 8, angle, 3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_COMMAND, buf, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN, MAVLINK_MSG_ID_GIMBAL_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_COMMAND, buf, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif
#else
	mavlink_gimbal_command_t packet;
	packet.time_usec = time_usec;
	packet.state = state;
	mav_array_memcpy(packet.angle, angle, sizeof(float)*3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN, MAVLINK_MSG_ID_GIMBAL_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gimbal_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, const float *angle, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_uint8_t(buf, 20, state);
	_mav_put_float_array(buf, 8, angle, 3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_COMMAND, buf, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN, MAVLINK_MSG_ID_GIMBAL_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_COMMAND, buf, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif
#else
	mavlink_gimbal_command_t *packet = (mavlink_gimbal_command_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->state = state;
	mav_array_memcpy(packet->angle, angle, sizeof(float)*3);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_COMMAND, (const char *)packet, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN, MAVLINK_MSG_ID_GIMBAL_COMMAND_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_COMMAND, (const char *)packet, MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE GIMBAL_COMMAND UNPACKING


/**
 * @brief Get field time_usec from gimbal_command message
 *
 * @return Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 */
static inline uint64_t mavlink_msg_gimbal_command_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field angle from gimbal_command message
 *
 * @return Angle command
 */
static inline uint16_t mavlink_msg_gimbal_command_get_angle(const mavlink_message_t* msg, float *angle)
{
	return _MAV_RETURN_float_array(msg, angle, 3,  8);
}

/**
 * @brief Get field state from gimbal_command message
 *
 * @return Command the state of the gimbal
 */
static inline uint8_t mavlink_msg_gimbal_command_get_state(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Decode a gimbal_command message into a struct
 *
 * @param msg The message to decode
 * @param gimbal_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_gimbal_command_decode(const mavlink_message_t* msg, mavlink_gimbal_command_t* gimbal_command)
{
#if MAVLINK_NEED_BYTE_SWAP
	gimbal_command->time_usec = mavlink_msg_gimbal_command_get_time_usec(msg);
	mavlink_msg_gimbal_command_get_angle(msg, gimbal_command->angle);
	gimbal_command->state = mavlink_msg_gimbal_command_get_state(msg);
#else
	memcpy(gimbal_command, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_GIMBAL_COMMAND_LEN);
#endif
}
