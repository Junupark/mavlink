#pragma once
// MESSAGE ASCL_COMMAND_SEND_F PACKING

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F 53249

MAVPACKED(
typedef struct __mavlink_ascl_command_send_f_t {
 float param2; /*<  PARAM2, see ASCL_CMD enum*/
 float param3; /*<  PARAM3, see ASCL_CMD enum*/
 float param4; /*<  PARAM4, see ASCL_CMD enum*/
 float param5; /*<  PARAM5, see ASCL_CMD enum*/
 float param6; /*<  PARAM6, see ASCL_CMD enum*/
 float param7; /*<  PARAM7, see ASCL_CMD enum*/
 uint16_t command; /*<  Command ID*/
 uint16_t option; /*<  command option, see ASCL_CMD enum*/
}) mavlink_ascl_command_send_f_t;

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN 28
#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN 28
#define MAVLINK_MSG_ID_53249_LEN 28
#define MAVLINK_MSG_ID_53249_MIN_LEN 28

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC 73
#define MAVLINK_MSG_ID_53249_CRC 73



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_F { \
    53249, \
    "ASCL_COMMAND_SEND_F", \
    8, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ascl_command_send_f_t, command) }, \
         { "option", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ascl_command_send_f_t, option) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_command_send_f_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_command_send_f_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_command_send_f_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ascl_command_send_f_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ascl_command_send_f_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ascl_command_send_f_t, param7) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_F { \
    "ASCL_COMMAND_SEND_F", \
    8, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ascl_command_send_f_t, command) }, \
         { "option", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ascl_command_send_f_t, option) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_command_send_f_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_command_send_f_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_command_send_f_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ascl_command_send_f_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ascl_command_send_f_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ascl_command_send_f_t, param7) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_command_send_f message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command  Command ID
 * @param option  command option, see ASCL_CMD enum
 * @param param2  PARAM2, see ASCL_CMD enum
 * @param param3  PARAM3, see ASCL_CMD enum
 * @param param4  PARAM4, see ASCL_CMD enum
 * @param param5  PARAM5, see ASCL_CMD enum
 * @param param6  PARAM6, see ASCL_CMD enum
 * @param param7  PARAM7, see ASCL_CMD enum
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command, uint16_t option, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN];
    _mav_put_float(buf, 0, param2);
    _mav_put_float(buf, 4, param3);
    _mav_put_float(buf, 8, param4);
    _mav_put_float(buf, 12, param5);
    _mav_put_float(buf, 16, param6);
    _mav_put_float(buf, 20, param7);
    _mav_put_uint16_t(buf, 24, command);
    _mav_put_uint16_t(buf, 26, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
#else
    mavlink_ascl_command_send_f_t packet;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
}

/**
 * @brief Pack a ascl_command_send_f message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command  Command ID
 * @param option  command option, see ASCL_CMD enum
 * @param param2  PARAM2, see ASCL_CMD enum
 * @param param3  PARAM3, see ASCL_CMD enum
 * @param param4  PARAM4, see ASCL_CMD enum
 * @param param5  PARAM5, see ASCL_CMD enum
 * @param param6  PARAM6, see ASCL_CMD enum
 * @param param7  PARAM7, see ASCL_CMD enum
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command,uint16_t option,float param2,float param3,float param4,float param5,float param6,float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN];
    _mav_put_float(buf, 0, param2);
    _mav_put_float(buf, 4, param3);
    _mav_put_float(buf, 8, param4);
    _mav_put_float(buf, 12, param5);
    _mav_put_float(buf, 16, param6);
    _mav_put_float(buf, 20, param7);
    _mav_put_uint16_t(buf, 24, command);
    _mav_put_uint16_t(buf, 26, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
#else
    mavlink_ascl_command_send_f_t packet;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
}

/**
 * @brief Encode a ascl_command_send_f struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_send_f C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_command_send_f_t* ascl_command_send_f)
{
    return mavlink_msg_ascl_command_send_f_pack(system_id, component_id, msg, ascl_command_send_f->command, ascl_command_send_f->option, ascl_command_send_f->param2, ascl_command_send_f->param3, ascl_command_send_f->param4, ascl_command_send_f->param5, ascl_command_send_f->param6, ascl_command_send_f->param7);
}

/**
 * @brief Encode a ascl_command_send_f struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_send_f C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_command_send_f_t* ascl_command_send_f)
{
    return mavlink_msg_ascl_command_send_f_pack_chan(system_id, component_id, chan, msg, ascl_command_send_f->command, ascl_command_send_f->option, ascl_command_send_f->param2, ascl_command_send_f->param3, ascl_command_send_f->param4, ascl_command_send_f->param5, ascl_command_send_f->param6, ascl_command_send_f->param7);
}

/**
 * @brief Send a ascl_command_send_f message
 * @param chan MAVLink channel to send the message
 *
 * @param command  Command ID
 * @param option  command option, see ASCL_CMD enum
 * @param param2  PARAM2, see ASCL_CMD enum
 * @param param3  PARAM3, see ASCL_CMD enum
 * @param param4  PARAM4, see ASCL_CMD enum
 * @param param5  PARAM5, see ASCL_CMD enum
 * @param param6  PARAM6, see ASCL_CMD enum
 * @param param7  PARAM7, see ASCL_CMD enum
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_command_send_f_send(mavlink_channel_t chan, uint16_t command, uint16_t option, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN];
    _mav_put_float(buf, 0, param2);
    _mav_put_float(buf, 4, param3);
    _mav_put_float(buf, 8, param4);
    _mav_put_float(buf, 12, param5);
    _mav_put_float(buf, 16, param6);
    _mav_put_float(buf, 20, param7);
    _mav_put_uint16_t(buf, 24, command);
    _mav_put_uint16_t(buf, 26, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#else
    mavlink_ascl_command_send_f_t packet;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.command = command;
    packet.option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, (const char *)&packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#endif
}

/**
 * @brief Send a ascl_command_send_f message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_command_send_f_send_struct(mavlink_channel_t chan, const mavlink_ascl_command_send_f_t* ascl_command_send_f)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_command_send_f_send(chan, ascl_command_send_f->command, ascl_command_send_f->option, ascl_command_send_f->param2, ascl_command_send_f->param3, ascl_command_send_f->param4, ascl_command_send_f->param5, ascl_command_send_f->param6, ascl_command_send_f->param7);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, (const char *)ascl_command_send_f, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_command_send_f_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command, uint16_t option, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param2);
    _mav_put_float(buf, 4, param3);
    _mav_put_float(buf, 8, param4);
    _mav_put_float(buf, 12, param5);
    _mav_put_float(buf, 16, param6);
    _mav_put_float(buf, 20, param7);
    _mav_put_uint16_t(buf, 24, command);
    _mav_put_uint16_t(buf, 26, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#else
    mavlink_ascl_command_send_f_t *packet = (mavlink_ascl_command_send_f_t *)msgbuf;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->param5 = param5;
    packet->param6 = param6;
    packet->param7 = param7;
    packet->command = command;
    packet->option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F, (const char *)packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_COMMAND_SEND_F UNPACKING


/**
 * @brief Get field command from ascl_command_send_f message
 *
 * @return  Command ID
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field option from ascl_command_send_f message
 *
 * @return  command option, see ASCL_CMD enum
 */
static inline uint16_t mavlink_msg_ascl_command_send_f_get_option(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field param2 from ascl_command_send_f message
 *
 * @return  PARAM2, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param3 from ascl_command_send_f message
 *
 * @return  PARAM3, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param4 from ascl_command_send_f message
 *
 * @return  PARAM4, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field param5 from ascl_command_send_f message
 *
 * @return  PARAM5, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_param5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field param6 from ascl_command_send_f message
 *
 * @return  PARAM6, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_param6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field param7 from ascl_command_send_f message
 *
 * @return  PARAM7, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_f_get_param7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a ascl_command_send_f message into a struct
 *
 * @param msg The message to decode
 * @param ascl_command_send_f C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_command_send_f_decode(const mavlink_message_t* msg, mavlink_ascl_command_send_f_t* ascl_command_send_f)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_command_send_f->param2 = mavlink_msg_ascl_command_send_f_get_param2(msg);
    ascl_command_send_f->param3 = mavlink_msg_ascl_command_send_f_get_param3(msg);
    ascl_command_send_f->param4 = mavlink_msg_ascl_command_send_f_get_param4(msg);
    ascl_command_send_f->param5 = mavlink_msg_ascl_command_send_f_get_param5(msg);
    ascl_command_send_f->param6 = mavlink_msg_ascl_command_send_f_get_param6(msg);
    ascl_command_send_f->param7 = mavlink_msg_ascl_command_send_f_get_param7(msg);
    ascl_command_send_f->command = mavlink_msg_ascl_command_send_f_get_command(msg);
    ascl_command_send_f->option = mavlink_msg_ascl_command_send_f_get_option(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN? msg->len : MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN;
        memset(ascl_command_send_f, 0, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_LEN);
    memcpy(ascl_command_send_f, _MAV_PAYLOAD(msg), len);
#endif
}
