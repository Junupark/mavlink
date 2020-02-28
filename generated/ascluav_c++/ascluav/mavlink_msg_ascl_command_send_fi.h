#pragma once
// MESSAGE ASCL_COMMAND_SEND_FI PACKING

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI 53248

MAVPACKED(
typedef struct __mavlink_ascl_command_send_fi_t {
 float param2; /*<  PARAM2, see ASCL_CMD enum*/
 float param3; /*<  PARAM3, see ASCL_CMD enum*/
 float param4; /*<  PARAM4, see ASCL_CMD enum*/
 int32_t x; /*<  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7*/
 int32_t y; /*<  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7*/
 int32_t z; /*<  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).*/
 uint16_t command; /*<  Command ID*/
 uint16_t option; /*<  command option, see ASCL_CMD enum*/
}) mavlink_ascl_command_send_fi_t;

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN 28
#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN 28
#define MAVLINK_MSG_ID_53248_LEN 28
#define MAVLINK_MSG_ID_53248_MIN_LEN 28

#define MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC 86
#define MAVLINK_MSG_ID_53248_CRC 86



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_FI { \
    53248, \
    "ASCL_COMMAND_SEND_FI", \
    8, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ascl_command_send_fi_t, command) }, \
         { "option", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ascl_command_send_fi_t, option) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_command_send_fi_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_command_send_fi_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_command_send_fi_t, param4) }, \
         { "x", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_ascl_command_send_fi_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_ascl_command_send_fi_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_ascl_command_send_fi_t, z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_COMMAND_SEND_FI { \
    "ASCL_COMMAND_SEND_FI", \
    8, \
    {  { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_ascl_command_send_fi_t, command) }, \
         { "option", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_ascl_command_send_fi_t, option) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ascl_command_send_fi_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ascl_command_send_fi_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ascl_command_send_fi_t, param4) }, \
         { "x", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_ascl_command_send_fi_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_ascl_command_send_fi_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_ascl_command_send_fi_t, z) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_command_send_fi message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command  Command ID
 * @param option  command option, see ASCL_CMD enum
 * @param param2  PARAM2, see ASCL_CMD enum
 * @param param3  PARAM3, see ASCL_CMD enum
 * @param param4  PARAM4, see ASCL_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t command, uint16_t option, float param2, float param3, float param4, int32_t x, int32_t y, int32_t z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN];
    _mav_put_float(buf, 0, param2);
    _mav_put_float(buf, 4, param3);
    _mav_put_float(buf, 8, param4);
    _mav_put_int32_t(buf, 12, x);
    _mav_put_int32_t(buf, 16, y);
    _mav_put_int32_t(buf, 20, z);
    _mav_put_uint16_t(buf, 24, command);
    _mav_put_uint16_t(buf, 26, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
#else
    mavlink_ascl_command_send_fi_t packet;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.command = command;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
}

/**
 * @brief Pack a ascl_command_send_fi message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command  Command ID
 * @param option  command option, see ASCL_CMD enum
 * @param param2  PARAM2, see ASCL_CMD enum
 * @param param3  PARAM3, see ASCL_CMD enum
 * @param param4  PARAM4, see ASCL_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t command,uint16_t option,float param2,float param3,float param4,int32_t x,int32_t y,int32_t z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN];
    _mav_put_float(buf, 0, param2);
    _mav_put_float(buf, 4, param3);
    _mav_put_float(buf, 8, param4);
    _mav_put_int32_t(buf, 12, x);
    _mav_put_int32_t(buf, 16, y);
    _mav_put_int32_t(buf, 20, z);
    _mav_put_uint16_t(buf, 24, command);
    _mav_put_uint16_t(buf, 26, option);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
#else
    mavlink_ascl_command_send_fi_t packet;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.command = command;
    packet.option = option;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
}

/**
 * @brief Encode a ascl_command_send_fi struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_send_fi C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_command_send_fi_t* ascl_command_send_fi)
{
    return mavlink_msg_ascl_command_send_fi_pack(system_id, component_id, msg, ascl_command_send_fi->command, ascl_command_send_fi->option, ascl_command_send_fi->param2, ascl_command_send_fi->param3, ascl_command_send_fi->param4, ascl_command_send_fi->x, ascl_command_send_fi->y, ascl_command_send_fi->z);
}

/**
 * @brief Encode a ascl_command_send_fi struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_command_send_fi C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_command_send_fi_t* ascl_command_send_fi)
{
    return mavlink_msg_ascl_command_send_fi_pack_chan(system_id, component_id, chan, msg, ascl_command_send_fi->command, ascl_command_send_fi->option, ascl_command_send_fi->param2, ascl_command_send_fi->param3, ascl_command_send_fi->param4, ascl_command_send_fi->x, ascl_command_send_fi->y, ascl_command_send_fi->z);
}

/**
 * @brief Send a ascl_command_send_fi message
 * @param chan MAVLink channel to send the message
 *
 * @param command  Command ID
 * @param option  command option, see ASCL_CMD enum
 * @param param2  PARAM2, see ASCL_CMD enum
 * @param param3  PARAM3, see ASCL_CMD enum
 * @param param4  PARAM4, see ASCL_CMD enum
 * @param x  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 * @param y  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 * @param z  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_command_send_fi_send(mavlink_channel_t chan, uint16_t command, uint16_t option, float param2, float param3, float param4, int32_t x, int32_t y, int32_t z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN];
    _mav_put_float(buf, 0, param2);
    _mav_put_float(buf, 4, param3);
    _mav_put_float(buf, 8, param4);
    _mav_put_int32_t(buf, 12, x);
    _mav_put_int32_t(buf, 16, y);
    _mav_put_int32_t(buf, 20, z);
    _mav_put_uint16_t(buf, 24, command);
    _mav_put_uint16_t(buf, 26, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#else
    mavlink_ascl_command_send_fi_t packet;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.command = command;
    packet.option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, (const char *)&packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#endif
}

/**
 * @brief Send a ascl_command_send_fi message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_command_send_fi_send_struct(mavlink_channel_t chan, const mavlink_ascl_command_send_fi_t* ascl_command_send_fi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_command_send_fi_send(chan, ascl_command_send_fi->command, ascl_command_send_fi->option, ascl_command_send_fi->param2, ascl_command_send_fi->param3, ascl_command_send_fi->param4, ascl_command_send_fi->x, ascl_command_send_fi->y, ascl_command_send_fi->z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, (const char *)ascl_command_send_fi, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_command_send_fi_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t command, uint16_t option, float param2, float param3, float param4, int32_t x, int32_t y, int32_t z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param2);
    _mav_put_float(buf, 4, param3);
    _mav_put_float(buf, 8, param4);
    _mav_put_int32_t(buf, 12, x);
    _mav_put_int32_t(buf, 16, y);
    _mav_put_int32_t(buf, 20, z);
    _mav_put_uint16_t(buf, 24, command);
    _mav_put_uint16_t(buf, 26, option);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, buf, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#else
    mavlink_ascl_command_send_fi_t *packet = (mavlink_ascl_command_send_fi_t *)msgbuf;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->command = command;
    packet->option = option;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI, (const char *)packet, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_COMMAND_SEND_FI UNPACKING


/**
 * @brief Get field command from ascl_command_send_fi message
 *
 * @return  Command ID
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field option from ascl_command_send_fi message
 *
 * @return  command option, see ASCL_CMD enum
 */
static inline uint16_t mavlink_msg_ascl_command_send_fi_get_option(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field param2 from ascl_command_send_fi message
 *
 * @return  PARAM2, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_fi_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param3 from ascl_command_send_fi message
 *
 * @return  PARAM3, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_fi_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param4 from ascl_command_send_fi message
 *
 * @return  PARAM4, see ASCL_CMD enum
 */
static inline float mavlink_msg_ascl_command_send_fi_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field x from ascl_command_send_fi message
 *
 * @return  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_ascl_command_send_fi_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field y from ascl_command_send_fi message
 *
 * @return  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
 */
static inline int32_t mavlink_msg_ascl_command_send_fi_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field z from ascl_command_send_fi message
 *
 * @return  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
 */
static inline int32_t mavlink_msg_ascl_command_send_fi_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Decode a ascl_command_send_fi message into a struct
 *
 * @param msg The message to decode
 * @param ascl_command_send_fi C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_command_send_fi_decode(const mavlink_message_t* msg, mavlink_ascl_command_send_fi_t* ascl_command_send_fi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_command_send_fi->param2 = mavlink_msg_ascl_command_send_fi_get_param2(msg);
    ascl_command_send_fi->param3 = mavlink_msg_ascl_command_send_fi_get_param3(msg);
    ascl_command_send_fi->param4 = mavlink_msg_ascl_command_send_fi_get_param4(msg);
    ascl_command_send_fi->x = mavlink_msg_ascl_command_send_fi_get_x(msg);
    ascl_command_send_fi->y = mavlink_msg_ascl_command_send_fi_get_y(msg);
    ascl_command_send_fi->z = mavlink_msg_ascl_command_send_fi_get_z(msg);
    ascl_command_send_fi->command = mavlink_msg_ascl_command_send_fi_get_command(msg);
    ascl_command_send_fi->option = mavlink_msg_ascl_command_send_fi_get_option(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN? msg->len : MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN;
        memset(ascl_command_send_fi, 0, MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_LEN);
    memcpy(ascl_command_send_fi, _MAV_PAYLOAD(msg), len);
#endif
}
