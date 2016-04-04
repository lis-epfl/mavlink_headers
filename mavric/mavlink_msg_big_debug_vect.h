// MESSAGE BIG_DEBUG_VECT PACKING

#define MAVLINK_MSG_ID_BIG_DEBUG_VECT 187

typedef struct __mavlink_big_debug_vect_t
{
 uint64_t time_usec; /*< Timestamp*/
 float data[60]; /*< data*/
 char name[7]; /*< Name*/
} mavlink_big_debug_vect_t;

#define MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN 255
#define MAVLINK_MSG_ID_187_LEN 255

#define MAVLINK_MSG_ID_BIG_DEBUG_VECT_CRC 184
#define MAVLINK_MSG_ID_187_CRC 184

#define MAVLINK_MSG_BIG_DEBUG_VECT_FIELD_DATA_LEN 60
#define MAVLINK_MSG_BIG_DEBUG_VECT_FIELD_NAME_LEN 7

#define MAVLINK_MESSAGE_INFO_BIG_DEBUG_VECT { \
	"BIG_DEBUG_VECT", \
	3, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_big_debug_vect_t, time_usec) }, \
         { "data", NULL, MAVLINK_TYPE_FLOAT, 60, 8, offsetof(mavlink_big_debug_vect_t, data) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 7, 248, offsetof(mavlink_big_debug_vect_t, name) }, \
         } \
}


/**
 * @brief Pack a big_debug_vect message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param name Name
 * @param time_usec Timestamp
 * @param data data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_big_debug_vect_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const char *name, uint64_t time_usec, const float *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float_array(buf, 8, data, 60);
	_mav_put_char_array(buf, 248, name, 7);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#else
	mavlink_big_debug_vect_t packet;
	packet.time_usec = time_usec;
	mav_array_memcpy(packet.data, data, sizeof(float)*60);
	mav_array_memcpy(packet.name, name, sizeof(char)*7);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BIG_DEBUG_VECT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN, MAVLINK_MSG_ID_BIG_DEBUG_VECT_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif
}

/**
 * @brief Pack a big_debug_vect message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param name Name
 * @param time_usec Timestamp
 * @param data data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_big_debug_vect_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const char *name,uint64_t time_usec,const float *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float_array(buf, 8, data, 60);
	_mav_put_char_array(buf, 248, name, 7);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#else
	mavlink_big_debug_vect_t packet;
	packet.time_usec = time_usec;
	mav_array_memcpy(packet.data, data, sizeof(float)*60);
	mav_array_memcpy(packet.name, name, sizeof(char)*7);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_BIG_DEBUG_VECT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN, MAVLINK_MSG_ID_BIG_DEBUG_VECT_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif
}

/**
 * @brief Encode a big_debug_vect struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param big_debug_vect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_big_debug_vect_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_big_debug_vect_t* big_debug_vect)
{
	return mavlink_msg_big_debug_vect_pack(system_id, component_id, msg, big_debug_vect->name, big_debug_vect->time_usec, big_debug_vect->data);
}

/**
 * @brief Encode a big_debug_vect struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param big_debug_vect C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_big_debug_vect_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_big_debug_vect_t* big_debug_vect)
{
	return mavlink_msg_big_debug_vect_pack_chan(system_id, component_id, chan, msg, big_debug_vect->name, big_debug_vect->time_usec, big_debug_vect->data);
}

/**
 * @brief Send a big_debug_vect message
 * @param chan MAVLink channel to send the message
 *
 * @param name Name
 * @param time_usec Timestamp
 * @param data data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_big_debug_vect_send(mavlink_channel_t chan, const char *name, uint64_t time_usec, const float *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float_array(buf, 8, data, 60);
	_mav_put_char_array(buf, 248, name, 7);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT, buf, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN, MAVLINK_MSG_ID_BIG_DEBUG_VECT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT, buf, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif
#else
	mavlink_big_debug_vect_t packet;
	packet.time_usec = time_usec;
	mav_array_memcpy(packet.data, data, sizeof(float)*60);
	mav_array_memcpy(packet.name, name, sizeof(char)*7);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT, (const char *)&packet, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN, MAVLINK_MSG_ID_BIG_DEBUG_VECT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT, (const char *)&packet, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_big_debug_vect_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *name, uint64_t time_usec, const float *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float_array(buf, 8, data, 60);
	_mav_put_char_array(buf, 248, name, 7);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT, buf, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN, MAVLINK_MSG_ID_BIG_DEBUG_VECT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT, buf, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif
#else
	mavlink_big_debug_vect_t *packet = (mavlink_big_debug_vect_t *)msgbuf;
	packet->time_usec = time_usec;
	mav_array_memcpy(packet->data, data, sizeof(float)*60);
	mav_array_memcpy(packet->name, name, sizeof(char)*7);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT, (const char *)packet, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN, MAVLINK_MSG_ID_BIG_DEBUG_VECT_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BIG_DEBUG_VECT, (const char *)packet, MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE BIG_DEBUG_VECT UNPACKING


/**
 * @brief Get field name from big_debug_vect message
 *
 * @return Name
 */
static inline uint16_t mavlink_msg_big_debug_vect_get_name(const mavlink_message_t* msg, char *name)
{
	return _MAV_RETURN_char_array(msg, name, 7,  248);
}

/**
 * @brief Get field time_usec from big_debug_vect message
 *
 * @return Timestamp
 */
static inline uint64_t mavlink_msg_big_debug_vect_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field data from big_debug_vect message
 *
 * @return data
 */
static inline uint16_t mavlink_msg_big_debug_vect_get_data(const mavlink_message_t* msg, float *data)
{
	return _MAV_RETURN_float_array(msg, data, 60,  8);
}

/**
 * @brief Decode a big_debug_vect message into a struct
 *
 * @param msg The message to decode
 * @param big_debug_vect C-struct to decode the message contents into
 */
static inline void mavlink_msg_big_debug_vect_decode(const mavlink_message_t* msg, mavlink_big_debug_vect_t* big_debug_vect)
{
#if MAVLINK_NEED_BYTE_SWAP
	big_debug_vect->time_usec = mavlink_msg_big_debug_vect_get_time_usec(msg);
	mavlink_msg_big_debug_vect_get_data(msg, big_debug_vect->data);
	mavlink_msg_big_debug_vect_get_name(msg, big_debug_vect->name);
#else
	memcpy(big_debug_vect, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_BIG_DEBUG_VECT_LEN);
#endif
}
