// MESSAGE PARAM_REQUEST_READ PACKING

#define MAVLINK_MSG_ID_PARAM_REQUEST_READ 80

typedef struct __mavlink_param_request_read_t 
{
	uint8_t target_system; ///< System ID
	uint8_t target_component; ///< Component ID
	int8_t param_id[15]; ///< Onboard parameter id

} mavlink_param_request_read_t;

/**
 * @brief Send a param_request_read message
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param param_id Onboard parameter id
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_param_request_read_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, uint8_t target_system, uint8_t target_component, const int8_t* param_id)
{
	msg->msgid = MAVLINK_MSG_ID_PARAM_REQUEST_READ;
	uint16_t i = 0;

	i += put_uint8_t_by_index(target_system, i, msg->payload); //System ID
	i += put_uint8_t_by_index(target_component, i, msg->payload); //Component ID
	i += put_array_by_index(param_id, 15, i, msg->payload); //Onboard parameter id

	return mavlink_finalize_message(msg, system_id, component_id, i);
}

static inline uint16_t mavlink_msg_param_request_read_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_param_request_read_t* param_request_read)
{
	return mavlink_msg_param_request_read_pack(system_id, component_id, msg, param_request_read->target_system, param_request_read->target_component, param_request_read->param_id);
}

#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_param_request_read_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, const int8_t* param_id)
{
	mavlink_message_t msg;
	mavlink_msg_param_request_read_pack(mavlink_system.sysid, mavlink_system.compid, &msg, target_system, target_component, param_id);
	mavlink_send_uart(chan, &msg);
}

#endif
// MESSAGE PARAM_REQUEST_READ UNPACKING

/**
 * @brief Get field target_system from param_request_read message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_param_request_read_get_target_system(const mavlink_message_t* msg)
{
	return (uint8_t)(msg->payload)[0];
}

/**
 * @brief Get field target_component from param_request_read message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_param_request_read_get_target_component(const mavlink_message_t* msg)
{
	return (uint8_t)(msg->payload+sizeof(uint8_t))[0];
}

/**
 * @brief Get field param_id from param_request_read message
 *
 * @return Onboard parameter id
 */
static inline uint16_t mavlink_msg_param_request_read_get_param_id(const mavlink_message_t* msg, int8_t* r_data)
{

	memcpy(r_data, msg->payload+sizeof(uint8_t)+sizeof(uint8_t), 15);
	return 15;
}

static inline void mavlink_msg_param_request_read_decode(const mavlink_message_t* msg, mavlink_param_request_read_t* param_request_read)
{
	param_request_read->target_system = mavlink_msg_param_request_read_get_target_system(msg);
	param_request_read->target_component = mavlink_msg_param_request_read_get_target_component(msg);
	mavlink_msg_param_request_read_get_param_id(msg, param_request_read->param_id);
}