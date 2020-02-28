#pragma once
// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR PACKING

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR 55296

MAVPACKED(
typedef struct __mavlink_ascl_telemetry_nav_state_regular_t {
 uint32_t timems; /*< [ms] */
 float pqr[3]; /*< [deg/s]  */
 float euler[3]; /*< [deg]  */
 float quat[4]; /*<   */
 float acc[3]; /*< [m/s^2]  */
 float velBody[3]; /*< [deg]  */
 float velNed[3]; /*< [deg]  */
 float ned[3]; /*< [deg]  */
 uint32_t llh[2]; /*< [degE7,mm]  */
 float covQuat[10]; /*<   Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)*/
 float covVelPos[21]; /*<   Upper triangle of P(IDX_VEL:IDX_POS+2, IDX_VEL:IDX_POS+2)*/
 float covDiag[22]; /*<   Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)*/
 uint8_t fused; /*<   */
}) mavlink_ascl_telemetry_nav_state_regular_t;

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN 313
#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN 313
#define MAVLINK_MSG_ID_55296_LEN 313
#define MAVLINK_MSG_ID_55296_MIN_LEN 313

#define MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_CRC 12
#define MAVLINK_MSG_ID_55296_CRC 12

#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_PQR_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_EULER_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_QUAT_LEN 4
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_ACC_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_VELBODY_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_VELNED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_NED_LEN 3
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_LLH_LEN 2
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_COVQUAT_LEN 10
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_COVVELPOS_LEN 21
#define MAVLINK_MSG_ASCL_TELEMETRY_NAV_STATE_REGULAR_FIELD_COVDIAG_LEN 22

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REGULAR { \
    55296, \
    "ASCL_TELEMETRY_NAV_STATE_REGULAR", \
    13, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, timems) }, \
         { "pqr", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, pqr) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, euler) }, \
         { "quat", NULL, MAVLINK_TYPE_FLOAT, 4, 28, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, quat) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 44, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, acc) }, \
         { "velBody", NULL, MAVLINK_TYPE_FLOAT, 3, 56, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, velBody) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 68, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, velNed) }, \
         { "ned", NULL, MAVLINK_TYPE_FLOAT, 3, 80, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, ned) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 2, 92, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, llh) }, \
         { "covQuat", NULL, MAVLINK_TYPE_FLOAT, 10, 100, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, covQuat) }, \
         { "covVelPos", NULL, MAVLINK_TYPE_FLOAT, 21, 140, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, covVelPos) }, \
         { "covDiag", NULL, MAVLINK_TYPE_FLOAT, 22, 224, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, covDiag) }, \
         { "fused", NULL, MAVLINK_TYPE_UINT8_T, 0, 312, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, fused) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ASCL_TELEMETRY_NAV_STATE_REGULAR { \
    "ASCL_TELEMETRY_NAV_STATE_REGULAR", \
    13, \
    {  { "timems", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, timems) }, \
         { "pqr", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, pqr) }, \
         { "euler", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, euler) }, \
         { "quat", NULL, MAVLINK_TYPE_FLOAT, 4, 28, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, quat) }, \
         { "acc", NULL, MAVLINK_TYPE_FLOAT, 3, 44, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, acc) }, \
         { "velBody", NULL, MAVLINK_TYPE_FLOAT, 3, 56, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, velBody) }, \
         { "velNed", NULL, MAVLINK_TYPE_FLOAT, 3, 68, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, velNed) }, \
         { "ned", NULL, MAVLINK_TYPE_FLOAT, 3, 80, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, ned) }, \
         { "llh", NULL, MAVLINK_TYPE_UINT32_T, 2, 92, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, llh) }, \
         { "covQuat", NULL, MAVLINK_TYPE_FLOAT, 10, 100, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, covQuat) }, \
         { "covVelPos", NULL, MAVLINK_TYPE_FLOAT, 21, 140, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, covVelPos) }, \
         { "covDiag", NULL, MAVLINK_TYPE_FLOAT, 22, 224, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, covDiag) }, \
         { "fused", NULL, MAVLINK_TYPE_UINT8_T, 0, 312, offsetof(mavlink_ascl_telemetry_nav_state_regular_t, fused) }, \
         } \
}
#endif

/**
 * @brief Pack a ascl_telemetry_nav_state_regular message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timems [ms] 
 * @param pqr [deg/s]  
 * @param euler [deg]  
 * @param quat   
 * @param acc [m/s^2]  
 * @param velBody [deg]  
 * @param velNed [deg]  
 * @param ned [deg]  
 * @param llh [degE7,mm]  
 * @param covQuat   Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)
 * @param covVelPos   Upper triangle of P(IDX_VEL:IDX_POS+2, IDX_VEL:IDX_POS+2)
 * @param covDiag   Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)
 * @param fused   
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *acc, const float *velBody, const float *velNed, const float *ned, const uint32_t *llh, const float *covQuat, const float *covVelPos, const float *covDiag, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 312, fused);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, acc, 3);
    _mav_put_float_array(buf, 56, velBody, 3);
    _mav_put_float_array(buf, 68, velNed, 3);
    _mav_put_float_array(buf, 80, ned, 3);
    _mav_put_uint32_t_array(buf, 92, llh, 2);
    _mav_put_float_array(buf, 100, covQuat, 10);
    _mav_put_float_array(buf, 140, covVelPos, 21);
    _mav_put_float_array(buf, 224, covDiag, 22);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN);
#else
    mavlink_ascl_telemetry_nav_state_regular_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velBody, velBody, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*2);
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
    mav_array_memcpy(packet.covVelPos, covVelPos, sizeof(float)*21);
    mav_array_memcpy(packet.covDiag, covDiag, sizeof(float)*22);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_CRC);
}

/**
 * @brief Pack a ascl_telemetry_nav_state_regular message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timems [ms] 
 * @param pqr [deg/s]  
 * @param euler [deg]  
 * @param quat   
 * @param acc [m/s^2]  
 * @param velBody [deg]  
 * @param velNed [deg]  
 * @param ned [deg]  
 * @param llh [degE7,mm]  
 * @param covQuat   Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)
 * @param covVelPos   Upper triangle of P(IDX_VEL:IDX_POS+2, IDX_VEL:IDX_POS+2)
 * @param covDiag   Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)
 * @param fused   
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t timems,const float *pqr,const float *euler,const float *quat,const float *acc,const float *velBody,const float *velNed,const float *ned,const uint32_t *llh,const float *covQuat,const float *covVelPos,const float *covDiag,uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 312, fused);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, acc, 3);
    _mav_put_float_array(buf, 56, velBody, 3);
    _mav_put_float_array(buf, 68, velNed, 3);
    _mav_put_float_array(buf, 80, ned, 3);
    _mav_put_uint32_t_array(buf, 92, llh, 2);
    _mav_put_float_array(buf, 100, covQuat, 10);
    _mav_put_float_array(buf, 140, covVelPos, 21);
    _mav_put_float_array(buf, 224, covDiag, 22);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN);
#else
    mavlink_ascl_telemetry_nav_state_regular_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velBody, velBody, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*2);
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
    mav_array_memcpy(packet.covVelPos, covVelPos, sizeof(float)*21);
    mav_array_memcpy(packet.covDiag, covDiag, sizeof(float)*22);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_CRC);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_regular struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_regular C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_regular_t* ascl_telemetry_nav_state_regular)
{
    return mavlink_msg_ascl_telemetry_nav_state_regular_pack(system_id, component_id, msg, ascl_telemetry_nav_state_regular->timems, ascl_telemetry_nav_state_regular->pqr, ascl_telemetry_nav_state_regular->euler, ascl_telemetry_nav_state_regular->quat, ascl_telemetry_nav_state_regular->acc, ascl_telemetry_nav_state_regular->velBody, ascl_telemetry_nav_state_regular->velNed, ascl_telemetry_nav_state_regular->ned, ascl_telemetry_nav_state_regular->llh, ascl_telemetry_nav_state_regular->covQuat, ascl_telemetry_nav_state_regular->covVelPos, ascl_telemetry_nav_state_regular->covDiag, ascl_telemetry_nav_state_regular->fused);
}

/**
 * @brief Encode a ascl_telemetry_nav_state_regular struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ascl_telemetry_nav_state_regular C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ascl_telemetry_nav_state_regular_t* ascl_telemetry_nav_state_regular)
{
    return mavlink_msg_ascl_telemetry_nav_state_regular_pack_chan(system_id, component_id, chan, msg, ascl_telemetry_nav_state_regular->timems, ascl_telemetry_nav_state_regular->pqr, ascl_telemetry_nav_state_regular->euler, ascl_telemetry_nav_state_regular->quat, ascl_telemetry_nav_state_regular->acc, ascl_telemetry_nav_state_regular->velBody, ascl_telemetry_nav_state_regular->velNed, ascl_telemetry_nav_state_regular->ned, ascl_telemetry_nav_state_regular->llh, ascl_telemetry_nav_state_regular->covQuat, ascl_telemetry_nav_state_regular->covVelPos, ascl_telemetry_nav_state_regular->covDiag, ascl_telemetry_nav_state_regular->fused);
}

/**
 * @brief Send a ascl_telemetry_nav_state_regular message
 * @param chan MAVLink channel to send the message
 *
 * @param timems [ms] 
 * @param pqr [deg/s]  
 * @param euler [deg]  
 * @param quat   
 * @param acc [m/s^2]  
 * @param velBody [deg]  
 * @param velNed [deg]  
 * @param ned [deg]  
 * @param llh [degE7,mm]  
 * @param covQuat   Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)
 * @param covVelPos   Upper triangle of P(IDX_VEL:IDX_POS+2, IDX_VEL:IDX_POS+2)
 * @param covDiag   Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)
 * @param fused   
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ascl_telemetry_nav_state_regular_send(mavlink_channel_t chan, uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *acc, const float *velBody, const float *velNed, const float *ned, const uint32_t *llh, const float *covQuat, const float *covVelPos, const float *covDiag, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN];
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 312, fused);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, acc, 3);
    _mav_put_float_array(buf, 56, velBody, 3);
    _mav_put_float_array(buf, 68, velNed, 3);
    _mav_put_float_array(buf, 80, ned, 3);
    _mav_put_uint32_t_array(buf, 92, llh, 2);
    _mav_put_float_array(buf, 100, covQuat, 10);
    _mav_put_float_array(buf, 140, covVelPos, 21);
    _mav_put_float_array(buf, 224, covDiag, 22);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_CRC);
#else
    mavlink_ascl_telemetry_nav_state_regular_t packet;
    packet.timems = timems;
    packet.fused = fused;
    mav_array_memcpy(packet.pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet.euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet.quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet.acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet.velBody, velBody, sizeof(float)*3);
    mav_array_memcpy(packet.velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet.ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet.llh, llh, sizeof(uint32_t)*2);
    mav_array_memcpy(packet.covQuat, covQuat, sizeof(float)*10);
    mav_array_memcpy(packet.covVelPos, covVelPos, sizeof(float)*21);
    mav_array_memcpy(packet.covDiag, covDiag, sizeof(float)*22);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR, (const char *)&packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_CRC);
#endif
}

/**
 * @brief Send a ascl_telemetry_nav_state_regular message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_send_struct(mavlink_channel_t chan, const mavlink_ascl_telemetry_nav_state_regular_t* ascl_telemetry_nav_state_regular)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ascl_telemetry_nav_state_regular_send(chan, ascl_telemetry_nav_state_regular->timems, ascl_telemetry_nav_state_regular->pqr, ascl_telemetry_nav_state_regular->euler, ascl_telemetry_nav_state_regular->quat, ascl_telemetry_nav_state_regular->acc, ascl_telemetry_nav_state_regular->velBody, ascl_telemetry_nav_state_regular->velNed, ascl_telemetry_nav_state_regular->ned, ascl_telemetry_nav_state_regular->llh, ascl_telemetry_nav_state_regular->covQuat, ascl_telemetry_nav_state_regular->covVelPos, ascl_telemetry_nav_state_regular->covDiag, ascl_telemetry_nav_state_regular->fused);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR, (const char *)ascl_telemetry_nav_state_regular, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_CRC);
#endif
}

#if MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t timems, const float *pqr, const float *euler, const float *quat, const float *acc, const float *velBody, const float *velNed, const float *ned, const uint32_t *llh, const float *covQuat, const float *covVelPos, const float *covDiag, uint8_t fused)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, timems);
    _mav_put_uint8_t(buf, 312, fused);
    _mav_put_float_array(buf, 4, pqr, 3);
    _mav_put_float_array(buf, 16, euler, 3);
    _mav_put_float_array(buf, 28, quat, 4);
    _mav_put_float_array(buf, 44, acc, 3);
    _mav_put_float_array(buf, 56, velBody, 3);
    _mav_put_float_array(buf, 68, velNed, 3);
    _mav_put_float_array(buf, 80, ned, 3);
    _mav_put_uint32_t_array(buf, 92, llh, 2);
    _mav_put_float_array(buf, 100, covQuat, 10);
    _mav_put_float_array(buf, 140, covVelPos, 21);
    _mav_put_float_array(buf, 224, covDiag, 22);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR, buf, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_CRC);
#else
    mavlink_ascl_telemetry_nav_state_regular_t *packet = (mavlink_ascl_telemetry_nav_state_regular_t *)msgbuf;
    packet->timems = timems;
    packet->fused = fused;
    mav_array_memcpy(packet->pqr, pqr, sizeof(float)*3);
    mav_array_memcpy(packet->euler, euler, sizeof(float)*3);
    mav_array_memcpy(packet->quat, quat, sizeof(float)*4);
    mav_array_memcpy(packet->acc, acc, sizeof(float)*3);
    mav_array_memcpy(packet->velBody, velBody, sizeof(float)*3);
    mav_array_memcpy(packet->velNed, velNed, sizeof(float)*3);
    mav_array_memcpy(packet->ned, ned, sizeof(float)*3);
    mav_array_memcpy(packet->llh, llh, sizeof(uint32_t)*2);
    mav_array_memcpy(packet->covQuat, covQuat, sizeof(float)*10);
    mav_array_memcpy(packet->covVelPos, covVelPos, sizeof(float)*21);
    mav_array_memcpy(packet->covDiag, covDiag, sizeof(float)*22);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR, (const char *)packet, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_CRC);
#endif
}
#endif

#endif

// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR UNPACKING


/**
 * @brief Get field timems from ascl_telemetry_nav_state_regular message
 *
 * @return [ms] 
 */
static inline uint32_t mavlink_msg_ascl_telemetry_nav_state_regular_get_timems(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field pqr from ascl_telemetry_nav_state_regular message
 *
 * @return [deg/s]  
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_pqr(const mavlink_message_t* msg, float *pqr)
{
    return _MAV_RETURN_float_array(msg, pqr, 3,  4);
}

/**
 * @brief Get field euler from ascl_telemetry_nav_state_regular message
 *
 * @return [deg]  
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_euler(const mavlink_message_t* msg, float *euler)
{
    return _MAV_RETURN_float_array(msg, euler, 3,  16);
}

/**
 * @brief Get field quat from ascl_telemetry_nav_state_regular message
 *
 * @return   
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_quat(const mavlink_message_t* msg, float *quat)
{
    return _MAV_RETURN_float_array(msg, quat, 4,  28);
}

/**
 * @brief Get field acc from ascl_telemetry_nav_state_regular message
 *
 * @return [m/s^2]  
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_acc(const mavlink_message_t* msg, float *acc)
{
    return _MAV_RETURN_float_array(msg, acc, 3,  44);
}

/**
 * @brief Get field velBody from ascl_telemetry_nav_state_regular message
 *
 * @return [deg]  
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_velBody(const mavlink_message_t* msg, float *velBody)
{
    return _MAV_RETURN_float_array(msg, velBody, 3,  56);
}

/**
 * @brief Get field velNed from ascl_telemetry_nav_state_regular message
 *
 * @return [deg]  
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_velNed(const mavlink_message_t* msg, float *velNed)
{
    return _MAV_RETURN_float_array(msg, velNed, 3,  68);
}

/**
 * @brief Get field ned from ascl_telemetry_nav_state_regular message
 *
 * @return [deg]  
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_ned(const mavlink_message_t* msg, float *ned)
{
    return _MAV_RETURN_float_array(msg, ned, 3,  80);
}

/**
 * @brief Get field llh from ascl_telemetry_nav_state_regular message
 *
 * @return [degE7,mm]  
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_llh(const mavlink_message_t* msg, uint32_t *llh)
{
    return _MAV_RETURN_uint32_t_array(msg, llh, 2,  92);
}

/**
 * @brief Get field covQuat from ascl_telemetry_nav_state_regular message
 *
 * @return   Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_covQuat(const mavlink_message_t* msg, float *covQuat)
{
    return _MAV_RETURN_float_array(msg, covQuat, 10,  100);
}

/**
 * @brief Get field covVelPos from ascl_telemetry_nav_state_regular message
 *
 * @return   Upper triangle of P(IDX_VEL:IDX_POS+2, IDX_VEL:IDX_POS+2)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_covVelPos(const mavlink_message_t* msg, float *covVelPos)
{
    return _MAV_RETURN_float_array(msg, covVelPos, 21,  140);
}

/**
 * @brief Get field covDiag from ascl_telemetry_nav_state_regular message
 *
 * @return   Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end)
 */
static inline uint16_t mavlink_msg_ascl_telemetry_nav_state_regular_get_covDiag(const mavlink_message_t* msg, float *covDiag)
{
    return _MAV_RETURN_float_array(msg, covDiag, 22,  224);
}

/**
 * @brief Get field fused from ascl_telemetry_nav_state_regular message
 *
 * @return   
 */
static inline uint8_t mavlink_msg_ascl_telemetry_nav_state_regular_get_fused(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  312);
}

/**
 * @brief Decode a ascl_telemetry_nav_state_regular message into a struct
 *
 * @param msg The message to decode
 * @param ascl_telemetry_nav_state_regular C-struct to decode the message contents into
 */
static inline void mavlink_msg_ascl_telemetry_nav_state_regular_decode(const mavlink_message_t* msg, mavlink_ascl_telemetry_nav_state_regular_t* ascl_telemetry_nav_state_regular)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ascl_telemetry_nav_state_regular->timems = mavlink_msg_ascl_telemetry_nav_state_regular_get_timems(msg);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_pqr(msg, ascl_telemetry_nav_state_regular->pqr);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_euler(msg, ascl_telemetry_nav_state_regular->euler);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_quat(msg, ascl_telemetry_nav_state_regular->quat);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_acc(msg, ascl_telemetry_nav_state_regular->acc);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_velBody(msg, ascl_telemetry_nav_state_regular->velBody);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_velNed(msg, ascl_telemetry_nav_state_regular->velNed);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_ned(msg, ascl_telemetry_nav_state_regular->ned);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_llh(msg, ascl_telemetry_nav_state_regular->llh);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_covQuat(msg, ascl_telemetry_nav_state_regular->covQuat);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_covVelPos(msg, ascl_telemetry_nav_state_regular->covVelPos);
    mavlink_msg_ascl_telemetry_nav_state_regular_get_covDiag(msg, ascl_telemetry_nav_state_regular->covDiag);
    ascl_telemetry_nav_state_regular->fused = mavlink_msg_ascl_telemetry_nav_state_regular_get_fused(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN? msg->len : MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN;
        memset(ascl_telemetry_nav_state_regular, 0, MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_LEN);
    memcpy(ascl_telemetry_nav_state_regular, _MAV_PAYLOAD(msg), len);
#endif
}
