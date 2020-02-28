/** @file
 *    @brief MAVLink comm protocol testsuite generated from ascluav.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef ASCLUAV_TESTSUITE_H
#define ASCLUAV_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_ascluav(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_ascluav(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_ascl_param_set(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_PARAM_SET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_param_set_t packet_in = {
        17.0,17443,151
    };
    mavlink_ascl_param_set_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param_value = packet_in.param_value;
        packet1.param_id = packet_in.param_id;
        packet1.param_type = packet_in.param_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_PARAM_SET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_set_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_param_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_set_pack(system_id, component_id, &msg , packet1.param_id , packet1.param_value , packet1.param_type );
    mavlink_msg_ascl_param_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_set_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param_id , packet1.param_value , packet1.param_type );
    mavlink_msg_ascl_param_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_param_set_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_set_send(MAVLINK_COMM_1 , packet1.param_id , packet1.param_value , packet1.param_type );
    mavlink_msg_ascl_param_set_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_param_request(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_PARAM_REQUEST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_param_request_t packet_in = {
        17235
    };
    mavlink_ascl_param_request_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param_id = packet_in.param_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_PARAM_REQUEST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_request_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_param_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_request_pack(system_id, component_id, &msg , packet1.param_id );
    mavlink_msg_ascl_param_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_request_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param_id );
    mavlink_msg_ascl_param_request_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_param_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_request_send(MAVLINK_COMM_1 , packet1.param_id );
    mavlink_msg_ascl_param_request_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_param_value(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_PARAM_VALUE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_param_value_t packet_in = {
        17.0,17443,151,218
    };
    mavlink_ascl_param_value_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param_value = packet_in.param_value;
        packet1.param_id = packet_in.param_id;
        packet1.param_type = packet_in.param_type;
        packet1.status = packet_in.status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_PARAM_VALUE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_value_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_param_value_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_value_pack(system_id, component_id, &msg , packet1.param_id , packet1.param_value , packet1.param_type , packet1.status );
    mavlink_msg_ascl_param_value_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_value_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param_id , packet1.param_value , packet1.param_type , packet1.status );
    mavlink_msg_ascl_param_value_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_param_value_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_param_value_send(MAVLINK_COMM_1 , packet1.param_id , packet1.param_value , packet1.param_type , packet1.status );
    mavlink_msg_ascl_param_value_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_command_send_fi(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_command_send_fi_t packet_in = {
        17.0,45.0,73.0,963498088,963498296,963498504,18483,18587
    };
    mavlink_ascl_command_send_fi_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param2 = packet_in.param2;
        packet1.param3 = packet_in.param3;
        packet1.param4 = packet_in.param4;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        packet1.command = packet_in.command;
        packet1.option = packet_in.option;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_COMMAND_SEND_FI_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_send_fi_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_command_send_fi_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_send_fi_pack(system_id, component_id, &msg , packet1.command , packet1.option , packet1.param2 , packet1.param3 , packet1.param4 , packet1.x , packet1.y , packet1.z );
    mavlink_msg_ascl_command_send_fi_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_send_fi_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.option , packet1.param2 , packet1.param3 , packet1.param4 , packet1.x , packet1.y , packet1.z );
    mavlink_msg_ascl_command_send_fi_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_command_send_fi_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_send_fi_send(MAVLINK_COMM_1 , packet1.command , packet1.option , packet1.param2 , packet1.param3 , packet1.param4 , packet1.x , packet1.y , packet1.z );
    mavlink_msg_ascl_command_send_fi_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_command_send_f(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_command_send_f_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,18483,18587
    };
    mavlink_ascl_command_send_f_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param2 = packet_in.param2;
        packet1.param3 = packet_in.param3;
        packet1.param4 = packet_in.param4;
        packet1.param5 = packet_in.param5;
        packet1.param6 = packet_in.param6;
        packet1.param7 = packet_in.param7;
        packet1.command = packet_in.command;
        packet1.option = packet_in.option;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_COMMAND_SEND_F_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_send_f_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_command_send_f_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_send_f_pack(system_id, component_id, &msg , packet1.command , packet1.option , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_ascl_command_send_f_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_send_f_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.option , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_ascl_command_send_f_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_command_send_f_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_send_f_send(MAVLINK_COMM_1 , packet1.command , packet1.option , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_ascl_command_send_f_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_command_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_COMMAND_ACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_command_ack_t packet_in = {
        17235,139
    };
    mavlink_ascl_command_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command = packet_in.command;
        packet1.result = packet_in.result;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_COMMAND_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_ack_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_command_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_ack_pack(system_id, component_id, &msg , packet1.command , packet1.result );
    mavlink_msg_ascl_command_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.result );
    mavlink_msg_ascl_command_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_command_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_command_ack_send(MAVLINK_COMM_1 , packet1.command , packet1.result );
    mavlink_msg_ascl_command_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_nav_state_regular(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_nav_state_regular_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0 },{ 129.0, 130.0, 131.0 },{ 213.0, 214.0, 215.0, 216.0 },{ 325.0, 326.0, 327.0 },{ 409.0, 410.0, 411.0 },{ 493.0, 494.0, 495.0 },{ 577.0, 578.0, 579.0 },{ 963502248, 963502249 },{ 717.0, 718.0, 719.0, 720.0, 721.0, 722.0, 723.0, 724.0, 725.0, 726.0 },{ 997.0, 998.0, 999.0, 1000.0, 1001.0, 1002.0, 1003.0, 1004.0, 1005.0, 1006.0, 1007.0, 1008.0, 1009.0, 1010.0, 1011.0, 1012.0, 1013.0, 1014.0, 1015.0, 1016.0, 1017.0 },{ 1585.0, 1586.0, 1587.0, 1588.0, 1589.0, 1590.0, 1591.0, 1592.0, 1593.0, 1594.0, 1595.0, 1596.0, 1597.0, 1598.0, 1599.0, 1600.0, 1601.0, 1602.0, 1603.0, 1604.0, 1605.0, 1606.0 },173
    };
    mavlink_ascl_telemetry_nav_state_regular_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        packet1.fused = packet_in.fused;
        
        mav_array_memcpy(packet1.pqr, packet_in.pqr, sizeof(float)*3);
        mav_array_memcpy(packet1.euler, packet_in.euler, sizeof(float)*3);
        mav_array_memcpy(packet1.quat, packet_in.quat, sizeof(float)*4);
        mav_array_memcpy(packet1.acc, packet_in.acc, sizeof(float)*3);
        mav_array_memcpy(packet1.velBody, packet_in.velBody, sizeof(float)*3);
        mav_array_memcpy(packet1.velNed, packet_in.velNed, sizeof(float)*3);
        mav_array_memcpy(packet1.ned, packet_in.ned, sizeof(float)*3);
        mav_array_memcpy(packet1.llh, packet_in.llh, sizeof(uint32_t)*2);
        mav_array_memcpy(packet1.covQuat, packet_in.covQuat, sizeof(float)*10);
        mav_array_memcpy(packet1.covVelPos, packet_in.covVelPos, sizeof(float)*21);
        mav_array_memcpy(packet1.covDiag, packet_in.covDiag, sizeof(float)*22);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REGULAR_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_regular_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_nav_state_regular_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_regular_pack(system_id, component_id, &msg , packet1.timems , packet1.pqr , packet1.euler , packet1.quat , packet1.acc , packet1.velBody , packet1.velNed , packet1.ned , packet1.llh , packet1.covQuat , packet1.covVelPos , packet1.covDiag , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_regular_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_regular_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.pqr , packet1.euler , packet1.quat , packet1.acc , packet1.velBody , packet1.velNed , packet1.ned , packet1.llh , packet1.covQuat , packet1.covVelPos , packet1.covDiag , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_regular_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_nav_state_regular_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_regular_send(MAVLINK_COMM_1 , packet1.timems , packet1.pqr , packet1.euler , packet1.quat , packet1.acc , packet1.velBody , packet1.velNed , packet1.ned , packet1.llh , packet1.covQuat , packet1.covVelPos , packet1.covDiag , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_regular_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_nav_state_att(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_nav_state_att_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0 },{ 129.0, 130.0, 131.0 },{ 213.0, 214.0, 215.0, 216.0 },{ 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0 },1
    };
    mavlink_ascl_telemetry_nav_state_att_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        packet1.fused = packet_in.fused;
        
        mav_array_memcpy(packet1.pqr, packet_in.pqr, sizeof(float)*3);
        mav_array_memcpy(packet1.euler, packet_in.euler, sizeof(float)*3);
        mav_array_memcpy(packet1.quat, packet_in.quat, sizeof(float)*4);
        mav_array_memcpy(packet1.covQuat, packet_in.covQuat, sizeof(float)*10);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_ATT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_att_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_nav_state_att_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_att_pack(system_id, component_id, &msg , packet1.timems , packet1.pqr , packet1.euler , packet1.quat , packet1.covQuat , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_att_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_att_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.pqr , packet1.euler , packet1.quat , packet1.covQuat , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_att_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_nav_state_att_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_att_send(MAVLINK_COMM_1 , packet1.timems , packet1.pqr , packet1.euler , packet1.quat , packet1.covQuat , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_att_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_nav_state_vel_pos(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_nav_state_vel_pos_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0 },{ 129.0, 130.0, 131.0 },{ 213.0, 214.0, 215.0 },{ 297.0, 298.0, 299.0 },{ 963500168, 963500169 },{ 437.0, 438.0, 439.0, 440.0, 441.0, 442.0, 443.0, 444.0, 445.0, 446.0, 447.0, 448.0, 449.0, 450.0, 451.0, 452.0, 453.0, 454.0, 455.0, 456.0, 457.0 },181
    };
    mavlink_ascl_telemetry_nav_state_vel_pos_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        packet1.fused = packet_in.fused;
        
        mav_array_memcpy(packet1.acc, packet_in.acc, sizeof(float)*3);
        mav_array_memcpy(packet1.velBody, packet_in.velBody, sizeof(float)*3);
        mav_array_memcpy(packet1.velNed, packet_in.velNed, sizeof(float)*3);
        mav_array_memcpy(packet1.ned, packet_in.ned, sizeof(float)*3);
        mav_array_memcpy(packet1.llh, packet_in.llh, sizeof(uint32_t)*2);
        mav_array_memcpy(packet1.covVelPos, packet_in.covVelPos, sizeof(float)*21);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_VEL_POS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_pack(system_id, component_id, &msg , packet1.timems , packet1.acc , packet1.velBody , packet1.velNed , packet1.ned , packet1.llh , packet1.covVelPos , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.acc , packet1.velBody , packet1.velNed , packet1.ned , packet1.llh , packet1.covVelPos , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_send(MAVLINK_COMM_1 , packet1.timems , packet1.acc , packet1.velBody , packet1.velNed , packet1.ned , packet1.llh , packet1.covVelPos , packet1.fused );
    mavlink_msg_ascl_telemetry_nav_state_vel_pos_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_nav_state_refernce(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_nav_state_refernce_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0 },{ 963498296, 963498297 },{ 185.0, 186.0, 187.0 }
    };
    mavlink_ascl_telemetry_nav_state_refernce_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        
        mav_array_memcpy(packet1.euler, packet_in.euler, sizeof(float)*3);
        mav_array_memcpy(packet1.llh, packet_in.llh, sizeof(uint32_t)*2);
        mav_array_memcpy(packet1.velNed, packet_in.velNed, sizeof(float)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_NAV_STATE_REFERNCE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_refernce_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_nav_state_refernce_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_refernce_pack(system_id, component_id, &msg , packet1.timems , packet1.euler , packet1.llh , packet1.velNed );
    mavlink_msg_ascl_telemetry_nav_state_refernce_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_refernce_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.euler , packet1.llh , packet1.velNed );
    mavlink_msg_ascl_telemetry_nav_state_refernce_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_nav_state_refernce_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_nav_state_refernce_send(MAVLINK_COMM_1 , packet1.timems , packet1.euler , packet1.llh , packet1.velNed );
    mavlink_msg_ascl_telemetry_nav_state_refernce_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_home(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_home_t packet_in = {
        963497464,963497672,963497880,963498088
    };
    mavlink_ascl_telemetry_home_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.height = packet_in.height;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_HOME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_home_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_home_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_home_pack(system_id, component_id, &msg , packet1.timems , packet1.lat , packet1.lon , packet1.height );
    mavlink_msg_ascl_telemetry_home_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_home_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.lat , packet1.lon , packet1.height );
    mavlink_msg_ascl_telemetry_home_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_home_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_home_send(MAVLINK_COMM_1 , packet1.timems , packet1.lat , packet1.lon , packet1.height );
    mavlink_msg_ascl_telemetry_home_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_sensor_mag(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_sensor_mag_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0 }
    };
    mavlink_ascl_telemetry_sensor_mag_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        
        mav_array_memcpy(packet1.mag, packet_in.mag, sizeof(float)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_MAG_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_mag_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_sensor_mag_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_mag_pack(system_id, component_id, &msg , packet1.timems , packet1.mag );
    mavlink_msg_ascl_telemetry_sensor_mag_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_mag_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.mag );
    mavlink_msg_ascl_telemetry_sensor_mag_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_sensor_mag_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_mag_send(MAVLINK_COMM_1 , packet1.timems , packet1.mag );
    mavlink_msg_ascl_telemetry_sensor_mag_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_sensor_imu(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_sensor_imu_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0 },{ 129.0, 130.0, 131.0 }
    };
    mavlink_ascl_telemetry_sensor_imu_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        
        mav_array_memcpy(packet1.gyro, packet_in.gyro, sizeof(float)*3);
        mav_array_memcpy(packet1.acc, packet_in.acc, sizeof(float)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_IMU_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_imu_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_sensor_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_imu_pack(system_id, component_id, &msg , packet1.timems , packet1.gyro , packet1.acc );
    mavlink_msg_ascl_telemetry_sensor_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_imu_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.gyro , packet1.acc );
    mavlink_msg_ascl_telemetry_sensor_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_sensor_imu_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_imu_send(MAVLINK_COMM_1 , packet1.timems , packet1.gyro , packet1.acc );
    mavlink_msg_ascl_telemetry_sensor_imu_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_sensor_gps(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_sensor_gps_t packet_in = {
        963497464,963497672,963497880,963498088,{ 963498296, 963498297, 963498298 },89,156
    };
    mavlink_ascl_telemetry_sensor_gps_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.height = packet_in.height;
        packet1.numSats = packet_in.numSats;
        packet1.fixType = packet_in.fixType;
        
        mav_array_memcpy(packet1.velNed, packet_in.velNed, sizeof(uint32_t)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_gps_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_sensor_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_gps_pack(system_id, component_id, &msg , packet1.timems , packet1.lat , packet1.lon , packet1.height , packet1.velNed , packet1.numSats , packet1.fixType );
    mavlink_msg_ascl_telemetry_sensor_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_gps_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.lat , packet1.lon , packet1.height , packet1.velNed , packet1.numSats , packet1.fixType );
    mavlink_msg_ascl_telemetry_sensor_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_sensor_gps_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_gps_send(MAVLINK_COMM_1 , packet1.timems , packet1.lat , packet1.lon , packet1.height , packet1.velNed , packet1.numSats , packet1.fixType );
    mavlink_msg_ascl_telemetry_sensor_gps_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_sensor_baro(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_sensor_baro_t packet_in = {
        963497464,45.0,73.0,963498088
    };
    mavlink_ascl_telemetry_sensor_baro_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        packet1.pressure = packet_in.pressure;
        packet1.temperature = packet_in.temperature;
        packet1.alt = packet_in.alt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_BARO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_baro_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_sensor_baro_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_baro_pack(system_id, component_id, &msg , packet1.timems , packet1.pressure , packet1.temperature , packet1.alt );
    mavlink_msg_ascl_telemetry_sensor_baro_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_baro_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.pressure , packet1.temperature , packet1.alt );
    mavlink_msg_ascl_telemetry_sensor_baro_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_sensor_baro_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_baro_send(MAVLINK_COMM_1 , packet1.timems , packet1.pressure , packet1.temperature , packet1.alt );
    mavlink_msg_ascl_telemetry_sensor_baro_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_telemetry_sensor_gps_ins(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_telemetry_sensor_gps_ins_t packet_in = {
        963497464,963497672,963497880,963498088,{ 963498296, 963498297, 963498298 },{ 213.0, 214.0, 215.0 },{ 297.0, 298.0, 299.0 },{ 381.0, 382.0, 383.0 }
    };
    mavlink_ascl_telemetry_sensor_gps_ins_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timems = packet_in.timems;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.height = packet_in.height;
        
        mav_array_memcpy(packet1.velNed, packet_in.velNed, sizeof(uint32_t)*3);
        mav_array_memcpy(packet1.euler, packet_in.euler, sizeof(float)*3);
        mav_array_memcpy(packet1.gyro, packet_in.gyro, sizeof(float)*3);
        mav_array_memcpy(packet1.acc, packet_in.acc, sizeof(float)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_TELEMETRY_SENSOR_GPS_INS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_gps_ins_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_telemetry_sensor_gps_ins_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_gps_ins_pack(system_id, component_id, &msg , packet1.timems , packet1.lat , packet1.lon , packet1.height , packet1.velNed , packet1.euler , packet1.gyro , packet1.acc );
    mavlink_msg_ascl_telemetry_sensor_gps_ins_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_gps_ins_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timems , packet1.lat , packet1.lon , packet1.height , packet1.velNed , packet1.euler , packet1.gyro , packet1.acc );
    mavlink_msg_ascl_telemetry_sensor_gps_ins_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_telemetry_sensor_gps_ins_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_telemetry_sensor_gps_ins_send(MAVLINK_COMM_1 , packet1.timems , packet1.lat , packet1.lon , packet1.height , packet1.velNed , packet1.euler , packet1.gyro , packet1.acc );
    mavlink_msg_ascl_telemetry_sensor_gps_ins_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_rc_channels_raw(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_RC_CHANNELS_RAW >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_rc_channels_raw_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795
    };
    mavlink_ascl_rc_channels_raw_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.chan1 = packet_in.chan1;
        packet1.chan2 = packet_in.chan2;
        packet1.chan3 = packet_in.chan3;
        packet1.chan4 = packet_in.chan4;
        packet1.chan5 = packet_in.chan5;
        packet1.chan6 = packet_in.chan6;
        packet1.chan7 = packet_in.chan7;
        packet1.chan8 = packet_in.chan8;
        packet1.chan9 = packet_in.chan9;
        packet1.chan10 = packet_in.chan10;
        packet1.chan11 = packet_in.chan11;
        packet1.chan12 = packet_in.chan12;
        packet1.chan13 = packet_in.chan13;
        packet1.chan14 = packet_in.chan14;
        packet1.chan15 = packet_in.chan15;
        packet1.chan16 = packet_in.chan16;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_RC_CHANNELS_RAW_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_RC_CHANNELS_RAW_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_rc_channels_raw_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_rc_channels_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_rc_channels_raw_pack(system_id, component_id, &msg , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_rc_channels_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_rc_channels_raw_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_rc_channels_raw_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_rc_channels_raw_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_rc_channels_raw_send(MAVLINK_COMM_1 , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_rc_channels_raw_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_rc_channels_scaled(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_rc_channels_scaled_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795
    };
    mavlink_ascl_rc_channels_scaled_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.chan1 = packet_in.chan1;
        packet1.chan2 = packet_in.chan2;
        packet1.chan3 = packet_in.chan3;
        packet1.chan4 = packet_in.chan4;
        packet1.chan5 = packet_in.chan5;
        packet1.chan6 = packet_in.chan6;
        packet1.chan7 = packet_in.chan7;
        packet1.chan8 = packet_in.chan8;
        packet1.chan9 = packet_in.chan9;
        packet1.chan10 = packet_in.chan10;
        packet1.chan11 = packet_in.chan11;
        packet1.chan12 = packet_in.chan12;
        packet1.chan13 = packet_in.chan13;
        packet1.chan14 = packet_in.chan14;
        packet1.chan15 = packet_in.chan15;
        packet1.chan16 = packet_in.chan16;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_RC_CHANNELS_SCALED_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_rc_channels_scaled_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_rc_channels_scaled_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_rc_channels_scaled_pack(system_id, component_id, &msg , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_rc_channels_scaled_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_rc_channels_scaled_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_rc_channels_scaled_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_rc_channels_scaled_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_rc_channels_scaled_send(MAVLINK_COMM_1 , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_rc_channels_scaled_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascl_pwm_out(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ASCL_PWM_OUT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ascl_pwm_out_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795
    };
    mavlink_ascl_pwm_out_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.chan1 = packet_in.chan1;
        packet1.chan2 = packet_in.chan2;
        packet1.chan3 = packet_in.chan3;
        packet1.chan4 = packet_in.chan4;
        packet1.chan5 = packet_in.chan5;
        packet1.chan6 = packet_in.chan6;
        packet1.chan7 = packet_in.chan7;
        packet1.chan8 = packet_in.chan8;
        packet1.chan9 = packet_in.chan9;
        packet1.chan10 = packet_in.chan10;
        packet1.chan11 = packet_in.chan11;
        packet1.chan12 = packet_in.chan12;
        packet1.chan13 = packet_in.chan13;
        packet1.chan14 = packet_in.chan14;
        packet1.chan15 = packet_in.chan15;
        packet1.chan16 = packet_in.chan16;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ASCL_PWM_OUT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ASCL_PWM_OUT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_pwm_out_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ascl_pwm_out_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_pwm_out_pack(system_id, component_id, &msg , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_pwm_out_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_pwm_out_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_pwm_out_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ascl_pwm_out_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ascl_pwm_out_send(MAVLINK_COMM_1 , packet1.chan1 , packet1.chan2 , packet1.chan3 , packet1.chan4 , packet1.chan5 , packet1.chan6 , packet1.chan7 , packet1.chan8 , packet1.chan9 , packet1.chan10 , packet1.chan11 , packet1.chan12 , packet1.chan13 , packet1.chan14 , packet1.chan15 , packet1.chan16 );
    mavlink_msg_ascl_pwm_out_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ascluav(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ascl_param_set(system_id, component_id, last_msg);
    mavlink_test_ascl_param_request(system_id, component_id, last_msg);
    mavlink_test_ascl_param_value(system_id, component_id, last_msg);
    mavlink_test_ascl_command_send_fi(system_id, component_id, last_msg);
    mavlink_test_ascl_command_send_f(system_id, component_id, last_msg);
    mavlink_test_ascl_command_ack(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_nav_state_regular(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_nav_state_att(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_nav_state_vel_pos(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_nav_state_refernce(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_home(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_sensor_mag(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_sensor_imu(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_sensor_gps(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_sensor_baro(system_id, component_id, last_msg);
    mavlink_test_ascl_telemetry_sensor_gps_ins(system_id, component_id, last_msg);
    mavlink_test_ascl_rc_channels_raw(system_id, component_id, last_msg);
    mavlink_test_ascl_rc_channels_scaled(system_id, component_id, last_msg);
    mavlink_test_ascl_pwm_out(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ASCLUAV_TESTSUITE_H
