/** @file
 *	@brief MAVLink comm testsuite protocol generated from ascluav.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "ascluav.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(ascluav, ASCL_PARAM_SET)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_PARAM_SET packet_in{};
    packet_in.param_id = 17443;
    packet_in.param_value = 17.0;
    packet_in.param_type = 151;

    mavlink::ascluav::msg::ASCL_PARAM_SET packet1{};
    mavlink::ascluav::msg::ASCL_PARAM_SET packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.param_id, packet2.param_id);
    EXPECT_EQ(packet1.param_value, packet2.param_value);
    EXPECT_EQ(packet1.param_type, packet2.param_type);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_PARAM_SET)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_param_set_t packet_c {
         17.0, 17443, 151
    };

    mavlink::ascluav::msg::ASCL_PARAM_SET packet_in{};
    packet_in.param_id = 17443;
    packet_in.param_value = 17.0;
    packet_in.param_type = 151;

    mavlink::ascluav::msg::ASCL_PARAM_SET packet2{};

    mavlink_msg_ascl_param_set_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.param_id, packet2.param_id);
    EXPECT_EQ(packet_in.param_value, packet2.param_value);
    EXPECT_EQ(packet_in.param_type, packet2.param_type);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_PARAM_REQUEST)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet_in{};
    packet_in.param_id = 17235;

    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet1{};
    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.param_id, packet2.param_id);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_PARAM_REQUEST)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_param_request_t packet_c {
         17235
    };

    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet_in{};
    packet_in.param_id = 17235;

    mavlink::ascluav::msg::ASCL_PARAM_REQUEST packet2{};

    mavlink_msg_ascl_param_request_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.param_id, packet2.param_id);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_PARAM_VALUE)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet_in{};
    packet_in.param_id = 17443;
    packet_in.param_value = 17.0;
    packet_in.param_type = 151;
    packet_in.status = 218;

    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet1{};
    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.param_id, packet2.param_id);
    EXPECT_EQ(packet1.param_value, packet2.param_value);
    EXPECT_EQ(packet1.param_type, packet2.param_type);
    EXPECT_EQ(packet1.status, packet2.status);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_PARAM_VALUE)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_param_value_t packet_c {
         17.0, 17443, 151, 218
    };

    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet_in{};
    packet_in.param_id = 17443;
    packet_in.param_value = 17.0;
    packet_in.param_type = 151;
    packet_in.status = 218;

    mavlink::ascluav::msg::ASCL_PARAM_VALUE packet2{};

    mavlink_msg_ascl_param_value_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.param_id, packet2.param_id);
    EXPECT_EQ(packet_in.param_value, packet2.param_value);
    EXPECT_EQ(packet_in.param_type, packet2.param_type);
    EXPECT_EQ(packet_in.status, packet2.status);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_COMMAND_SEND_FI)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet_in{};
    packet_in.command = 18483;
    packet_in.option = 18587;
    packet_in.param2 = 17.0;
    packet_in.param3 = 45.0;
    packet_in.param4 = 73.0;
    packet_in.x = 963498088;
    packet_in.y = 963498296;
    packet_in.z = 963498504;

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet1{};
    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.command, packet2.command);
    EXPECT_EQ(packet1.option, packet2.option);
    EXPECT_EQ(packet1.param2, packet2.param2);
    EXPECT_EQ(packet1.param3, packet2.param3);
    EXPECT_EQ(packet1.param4, packet2.param4);
    EXPECT_EQ(packet1.x, packet2.x);
    EXPECT_EQ(packet1.y, packet2.y);
    EXPECT_EQ(packet1.z, packet2.z);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_COMMAND_SEND_FI)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_command_send_fi_t packet_c {
         17.0, 45.0, 73.0, 963498088, 963498296, 963498504, 18483, 18587
    };

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet_in{};
    packet_in.command = 18483;
    packet_in.option = 18587;
    packet_in.param2 = 17.0;
    packet_in.param3 = 45.0;
    packet_in.param4 = 73.0;
    packet_in.x = 963498088;
    packet_in.y = 963498296;
    packet_in.z = 963498504;

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_FI packet2{};

    mavlink_msg_ascl_command_send_fi_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.command, packet2.command);
    EXPECT_EQ(packet_in.option, packet2.option);
    EXPECT_EQ(packet_in.param2, packet2.param2);
    EXPECT_EQ(packet_in.param3, packet2.param3);
    EXPECT_EQ(packet_in.param4, packet2.param4);
    EXPECT_EQ(packet_in.x, packet2.x);
    EXPECT_EQ(packet_in.y, packet2.y);
    EXPECT_EQ(packet_in.z, packet2.z);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_COMMAND_SEND_F)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet_in{};
    packet_in.command = 18483;
    packet_in.option = 18587;
    packet_in.param2 = 17.0;
    packet_in.param3 = 45.0;
    packet_in.param4 = 73.0;
    packet_in.param5 = 101.0;
    packet_in.param6 = 129.0;
    packet_in.param7 = 157.0;

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet1{};
    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.command, packet2.command);
    EXPECT_EQ(packet1.option, packet2.option);
    EXPECT_EQ(packet1.param2, packet2.param2);
    EXPECT_EQ(packet1.param3, packet2.param3);
    EXPECT_EQ(packet1.param4, packet2.param4);
    EXPECT_EQ(packet1.param5, packet2.param5);
    EXPECT_EQ(packet1.param6, packet2.param6);
    EXPECT_EQ(packet1.param7, packet2.param7);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_COMMAND_SEND_F)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_command_send_f_t packet_c {
         17.0, 45.0, 73.0, 101.0, 129.0, 157.0, 18483, 18587
    };

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet_in{};
    packet_in.command = 18483;
    packet_in.option = 18587;
    packet_in.param2 = 17.0;
    packet_in.param3 = 45.0;
    packet_in.param4 = 73.0;
    packet_in.param5 = 101.0;
    packet_in.param6 = 129.0;
    packet_in.param7 = 157.0;

    mavlink::ascluav::msg::ASCL_COMMAND_SEND_F packet2{};

    mavlink_msg_ascl_command_send_f_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.command, packet2.command);
    EXPECT_EQ(packet_in.option, packet2.option);
    EXPECT_EQ(packet_in.param2, packet2.param2);
    EXPECT_EQ(packet_in.param3, packet2.param3);
    EXPECT_EQ(packet_in.param4, packet2.param4);
    EXPECT_EQ(packet_in.param5, packet2.param5);
    EXPECT_EQ(packet_in.param6, packet2.param6);
    EXPECT_EQ(packet_in.param7, packet2.param7);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_COMMAND_ACK)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet_in{};
    packet_in.command = 17235;
    packet_in.result = 139;

    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet1{};
    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.command, packet2.command);
    EXPECT_EQ(packet1.result, packet2.result);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_COMMAND_ACK)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_command_ack_t packet_c {
         17235, 139
    };

    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet_in{};
    packet_in.command = 17235;
    packet_in.result = 139;

    mavlink::ascluav::msg::ASCL_COMMAND_ACK packet2{};

    mavlink_msg_ascl_command_ack_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.command, packet2.command);
    EXPECT_EQ(packet_in.result, packet2.result);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_REGULAR)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR packet_in{};
    packet_in.timems = 963497464;
    packet_in.pqr = {{ 45.0, 46.0, 47.0 }};
    packet_in.euler = {{ 129.0, 130.0, 131.0 }};
    packet_in.quat = {{ 213.0, 214.0, 215.0, 216.0 }};
    packet_in.acc = {{ 325.0, 326.0, 327.0 }};
    packet_in.velBody = {{ 409.0, 410.0, 411.0 }};
    packet_in.velNed = {{ 493.0, 494.0, 495.0 }};
    packet_in.ned = {{ 577.0, 578.0, 579.0 }};
    packet_in.llh = {{ 963502248, 963502249 }};
    packet_in.covQuat = {{ 717.0, 718.0, 719.0, 720.0, 721.0, 722.0, 723.0, 724.0, 725.0, 726.0 }};
    packet_in.covVelPos = {{ 997.0, 998.0, 999.0, 1000.0, 1001.0, 1002.0, 1003.0, 1004.0, 1005.0, 1006.0, 1007.0, 1008.0, 1009.0, 1010.0, 1011.0, 1012.0, 1013.0, 1014.0, 1015.0, 1016.0, 1017.0 }};
    packet_in.covDiag = {{ 1585.0, 1586.0, 1587.0, 1588.0, 1589.0, 1590.0, 1591.0, 1592.0, 1593.0, 1594.0, 1595.0, 1596.0, 1597.0, 1598.0, 1599.0, 1600.0, 1601.0, 1602.0, 1603.0, 1604.0, 1605.0, 1606.0 }};
    packet_in.fused = 173;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.pqr, packet2.pqr);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.quat, packet2.quat);
    EXPECT_EQ(packet1.acc, packet2.acc);
    EXPECT_EQ(packet1.velBody, packet2.velBody);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.ned, packet2.ned);
    EXPECT_EQ(packet1.llh, packet2.llh);
    EXPECT_EQ(packet1.covQuat, packet2.covQuat);
    EXPECT_EQ(packet1.covVelPos, packet2.covVelPos);
    EXPECT_EQ(packet1.covDiag, packet2.covDiag);
    EXPECT_EQ(packet1.fused, packet2.fused);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_REGULAR)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_regular_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 129.0, 130.0, 131.0 }, { 213.0, 214.0, 215.0, 216.0 }, { 325.0, 326.0, 327.0 }, { 409.0, 410.0, 411.0 }, { 493.0, 494.0, 495.0 }, { 577.0, 578.0, 579.0 }, { 963502248, 963502249 }, { 717.0, 718.0, 719.0, 720.0, 721.0, 722.0, 723.0, 724.0, 725.0, 726.0 }, { 997.0, 998.0, 999.0, 1000.0, 1001.0, 1002.0, 1003.0, 1004.0, 1005.0, 1006.0, 1007.0, 1008.0, 1009.0, 1010.0, 1011.0, 1012.0, 1013.0, 1014.0, 1015.0, 1016.0, 1017.0 }, { 1585.0, 1586.0, 1587.0, 1588.0, 1589.0, 1590.0, 1591.0, 1592.0, 1593.0, 1594.0, 1595.0, 1596.0, 1597.0, 1598.0, 1599.0, 1600.0, 1601.0, 1602.0, 1603.0, 1604.0, 1605.0, 1606.0 }, 173
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR packet_in{};
    packet_in.timems = 963497464;
    packet_in.pqr = {{ 45.0, 46.0, 47.0 }};
    packet_in.euler = {{ 129.0, 130.0, 131.0 }};
    packet_in.quat = {{ 213.0, 214.0, 215.0, 216.0 }};
    packet_in.acc = {{ 325.0, 326.0, 327.0 }};
    packet_in.velBody = {{ 409.0, 410.0, 411.0 }};
    packet_in.velNed = {{ 493.0, 494.0, 495.0 }};
    packet_in.ned = {{ 577.0, 578.0, 579.0 }};
    packet_in.llh = {{ 963502248, 963502249 }};
    packet_in.covQuat = {{ 717.0, 718.0, 719.0, 720.0, 721.0, 722.0, 723.0, 724.0, 725.0, 726.0 }};
    packet_in.covVelPos = {{ 997.0, 998.0, 999.0, 1000.0, 1001.0, 1002.0, 1003.0, 1004.0, 1005.0, 1006.0, 1007.0, 1008.0, 1009.0, 1010.0, 1011.0, 1012.0, 1013.0, 1014.0, 1015.0, 1016.0, 1017.0 }};
    packet_in.covDiag = {{ 1585.0, 1586.0, 1587.0, 1588.0, 1589.0, 1590.0, 1591.0, 1592.0, 1593.0, 1594.0, 1595.0, 1596.0, 1597.0, 1598.0, 1599.0, 1600.0, 1601.0, 1602.0, 1603.0, 1604.0, 1605.0, 1606.0 }};
    packet_in.fused = 173;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REGULAR packet2{};

    mavlink_msg_ascl_telemetry_nav_state_regular_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.pqr, packet2.pqr);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.quat, packet2.quat);
    EXPECT_EQ(packet_in.acc, packet2.acc);
    EXPECT_EQ(packet_in.velBody, packet2.velBody);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.ned, packet2.ned);
    EXPECT_EQ(packet_in.llh, packet2.llh);
    EXPECT_EQ(packet_in.covQuat, packet2.covQuat);
    EXPECT_EQ(packet_in.covVelPos, packet2.covVelPos);
    EXPECT_EQ(packet_in.covDiag, packet2.covDiag);
    EXPECT_EQ(packet_in.fused, packet2.fused);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_ATT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet_in{};
    packet_in.timems = 963497464;
    packet_in.pqr = {{ 45.0, 46.0, 47.0 }};
    packet_in.euler = {{ 129.0, 130.0, 131.0 }};
    packet_in.quat = {{ 213.0, 214.0, 215.0, 216.0 }};
    packet_in.covQuat = {{ 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0 }};
    packet_in.fused = 1;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.pqr, packet2.pqr);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.quat, packet2.quat);
    EXPECT_EQ(packet1.covQuat, packet2.covQuat);
    EXPECT_EQ(packet1.fused, packet2.fused);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_ATT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_att_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 129.0, 130.0, 131.0 }, { 213.0, 214.0, 215.0, 216.0 }, { 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0 }, 1
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet_in{};
    packet_in.timems = 963497464;
    packet_in.pqr = {{ 45.0, 46.0, 47.0 }};
    packet_in.euler = {{ 129.0, 130.0, 131.0 }};
    packet_in.quat = {{ 213.0, 214.0, 215.0, 216.0 }};
    packet_in.covQuat = {{ 325.0, 326.0, 327.0, 328.0, 329.0, 330.0, 331.0, 332.0, 333.0, 334.0 }};
    packet_in.fused = 1;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_ATT packet2{};

    mavlink_msg_ascl_telemetry_nav_state_att_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.pqr, packet2.pqr);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.quat, packet2.quat);
    EXPECT_EQ(packet_in.covQuat, packet2.covQuat);
    EXPECT_EQ(packet_in.fused, packet2.fused);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_VEL_POS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet_in{};
    packet_in.timems = 963497464;
    packet_in.acc = {{ 45.0, 46.0, 47.0 }};
    packet_in.velBody = {{ 129.0, 130.0, 131.0 }};
    packet_in.velNed = {{ 213.0, 214.0, 215.0 }};
    packet_in.ned = {{ 297.0, 298.0, 299.0 }};
    packet_in.llh = {{ 963500168, 963500169 }};
    packet_in.covVelPos = {{ 437.0, 438.0, 439.0, 440.0, 441.0, 442.0, 443.0, 444.0, 445.0, 446.0, 447.0, 448.0, 449.0, 450.0, 451.0, 452.0, 453.0, 454.0, 455.0, 456.0, 457.0 }};
    packet_in.fused = 181;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.acc, packet2.acc);
    EXPECT_EQ(packet1.velBody, packet2.velBody);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.ned, packet2.ned);
    EXPECT_EQ(packet1.llh, packet2.llh);
    EXPECT_EQ(packet1.covVelPos, packet2.covVelPos);
    EXPECT_EQ(packet1.fused, packet2.fused);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_VEL_POS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_vel_pos_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 129.0, 130.0, 131.0 }, { 213.0, 214.0, 215.0 }, { 297.0, 298.0, 299.0 }, { 963500168, 963500169 }, { 437.0, 438.0, 439.0, 440.0, 441.0, 442.0, 443.0, 444.0, 445.0, 446.0, 447.0, 448.0, 449.0, 450.0, 451.0, 452.0, 453.0, 454.0, 455.0, 456.0, 457.0 }, 181
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet_in{};
    packet_in.timems = 963497464;
    packet_in.acc = {{ 45.0, 46.0, 47.0 }};
    packet_in.velBody = {{ 129.0, 130.0, 131.0 }};
    packet_in.velNed = {{ 213.0, 214.0, 215.0 }};
    packet_in.ned = {{ 297.0, 298.0, 299.0 }};
    packet_in.llh = {{ 963500168, 963500169 }};
    packet_in.covVelPos = {{ 437.0, 438.0, 439.0, 440.0, 441.0, 442.0, 443.0, 444.0, 445.0, 446.0, 447.0, 448.0, 449.0, 450.0, 451.0, 452.0, 453.0, 454.0, 455.0, 456.0, 457.0 }};
    packet_in.fused = 181;

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_VEL_POS packet2{};

    mavlink_msg_ascl_telemetry_nav_state_vel_pos_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.acc, packet2.acc);
    EXPECT_EQ(packet_in.velBody, packet2.velBody);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.ned, packet2.ned);
    EXPECT_EQ(packet_in.llh, packet2.llh);
    EXPECT_EQ(packet_in.covVelPos, packet2.covVelPos);
    EXPECT_EQ(packet_in.fused, packet2.fused);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_NAV_STATE_REFERNCE)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet_in{};
    packet_in.timems = 963497464;
    packet_in.euler = {{ 45.0, 46.0, 47.0 }};
    packet_in.llh = {{ 963498296, 963498297 }};
    packet_in.velNed = {{ 185.0, 186.0, 187.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.llh, packet2.llh);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_NAV_STATE_REFERNCE)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_nav_state_refernce_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 963498296, 963498297 }, { 185.0, 186.0, 187.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet_in{};
    packet_in.timems = 963497464;
    packet_in.euler = {{ 45.0, 46.0, 47.0 }};
    packet_in.llh = {{ 963498296, 963498297 }};
    packet_in.velNed = {{ 185.0, 186.0, 187.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_NAV_STATE_REFERNCE packet2{};

    mavlink_msg_ascl_telemetry_nav_state_refernce_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.llh, packet2.llh);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_HOME)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;

    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.lat, packet2.lat);
    EXPECT_EQ(packet1.lon, packet2.lon);
    EXPECT_EQ(packet1.height, packet2.height);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_HOME)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_home_t packet_c {
         963497464, 963497672, 963497880, 963498088
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;

    mavlink::ascluav::msg::ASCL_TELEMETRY_HOME packet2{};

    mavlink_msg_ascl_telemetry_home_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.lat, packet2.lat);
    EXPECT_EQ(packet_in.lon, packet2.lon);
    EXPECT_EQ(packet_in.height, packet2.height);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_MAG)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet_in{};
    packet_in.timems = 963497464;
    packet_in.mag = {{ 45.0, 46.0, 47.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.mag, packet2.mag);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_MAG)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_mag_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet_in{};
    packet_in.timems = 963497464;
    packet_in.mag = {{ 45.0, 46.0, 47.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_MAG packet2{};

    mavlink_msg_ascl_telemetry_sensor_mag_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.mag, packet2.mag);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_IMU)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet_in{};
    packet_in.timems = 963497464;
    packet_in.gyro = {{ 45.0, 46.0, 47.0 }};
    packet_in.acc = {{ 129.0, 130.0, 131.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.gyro, packet2.gyro);
    EXPECT_EQ(packet1.acc, packet2.acc);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_IMU)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_imu_t packet_c {
         963497464, { 45.0, 46.0, 47.0 }, { 129.0, 130.0, 131.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet_in{};
    packet_in.timems = 963497464;
    packet_in.gyro = {{ 45.0, 46.0, 47.0 }};
    packet_in.acc = {{ 129.0, 130.0, 131.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_IMU packet2{};

    mavlink_msg_ascl_telemetry_sensor_imu_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.gyro, packet2.gyro);
    EXPECT_EQ(packet_in.acc, packet2.acc);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_GPS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.velNed = {{ 963498296, 963498297, 963498298 }};
    packet_in.numSats = 89;
    packet_in.fixType = 156;

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.lat, packet2.lat);
    EXPECT_EQ(packet1.lon, packet2.lon);
    EXPECT_EQ(packet1.height, packet2.height);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.numSats, packet2.numSats);
    EXPECT_EQ(packet1.fixType, packet2.fixType);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_GPS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_gps_t packet_c {
         963497464, 963497672, 963497880, 963498088, { 963498296, 963498297, 963498298 }, 89, 156
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.velNed = {{ 963498296, 963498297, 963498298 }};
    packet_in.numSats = 89;
    packet_in.fixType = 156;

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS packet2{};

    mavlink_msg_ascl_telemetry_sensor_gps_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.lat, packet2.lat);
    EXPECT_EQ(packet_in.lon, packet2.lon);
    EXPECT_EQ(packet_in.height, packet2.height);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.numSats, packet2.numSats);
    EXPECT_EQ(packet_in.fixType, packet2.fixType);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_BARO)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet_in{};
    packet_in.timems = 963497464;
    packet_in.pressure = 45.0;
    packet_in.temperature = 73.0;
    packet_in.alt = 963498088;

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.pressure, packet2.pressure);
    EXPECT_EQ(packet1.temperature, packet2.temperature);
    EXPECT_EQ(packet1.alt, packet2.alt);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_BARO)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_baro_t packet_c {
         963497464, 45.0, 73.0, 963498088
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet_in{};
    packet_in.timems = 963497464;
    packet_in.pressure = 45.0;
    packet_in.temperature = 73.0;
    packet_in.alt = 963498088;

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_BARO packet2{};

    mavlink_msg_ascl_telemetry_sensor_baro_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.pressure, packet2.pressure);
    EXPECT_EQ(packet_in.temperature, packet2.temperature);
    EXPECT_EQ(packet_in.alt, packet2.alt);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_TELEMETRY_SENSOR_GPS_INS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.velNed = {{ 963498296, 963498297, 963498298 }};
    packet_in.euler = {{ 213.0, 214.0, 215.0 }};
    packet_in.gyro = {{ 297.0, 298.0, 299.0 }};
    packet_in.acc = {{ 381.0, 382.0, 383.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet1{};
    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.timems, packet2.timems);
    EXPECT_EQ(packet1.lat, packet2.lat);
    EXPECT_EQ(packet1.lon, packet2.lon);
    EXPECT_EQ(packet1.height, packet2.height);
    EXPECT_EQ(packet1.velNed, packet2.velNed);
    EXPECT_EQ(packet1.euler, packet2.euler);
    EXPECT_EQ(packet1.gyro, packet2.gyro);
    EXPECT_EQ(packet1.acc, packet2.acc);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_TELEMETRY_SENSOR_GPS_INS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_telemetry_sensor_gps_ins_t packet_c {
         963497464, 963497672, 963497880, 963498088, { 963498296, 963498297, 963498298 }, { 213.0, 214.0, 215.0 }, { 297.0, 298.0, 299.0 }, { 381.0, 382.0, 383.0 }
    };

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet_in{};
    packet_in.timems = 963497464;
    packet_in.lat = 963497672;
    packet_in.lon = 963497880;
    packet_in.height = 963498088;
    packet_in.velNed = {{ 963498296, 963498297, 963498298 }};
    packet_in.euler = {{ 213.0, 214.0, 215.0 }};
    packet_in.gyro = {{ 297.0, 298.0, 299.0 }};
    packet_in.acc = {{ 381.0, 382.0, 383.0 }};

    mavlink::ascluav::msg::ASCL_TELEMETRY_SENSOR_GPS_INS packet2{};

    mavlink_msg_ascl_telemetry_sensor_gps_ins_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.timems, packet2.timems);
    EXPECT_EQ(packet_in.lat, packet2.lat);
    EXPECT_EQ(packet_in.lon, packet2.lon);
    EXPECT_EQ(packet_in.height, packet2.height);
    EXPECT_EQ(packet_in.velNed, packet2.velNed);
    EXPECT_EQ(packet_in.euler, packet2.euler);
    EXPECT_EQ(packet_in.gyro, packet2.gyro);
    EXPECT_EQ(packet_in.acc, packet2.acc);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_RC_CHANNELS_RAW)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet1{};
    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.chan1, packet2.chan1);
    EXPECT_EQ(packet1.chan2, packet2.chan2);
    EXPECT_EQ(packet1.chan3, packet2.chan3);
    EXPECT_EQ(packet1.chan4, packet2.chan4);
    EXPECT_EQ(packet1.chan5, packet2.chan5);
    EXPECT_EQ(packet1.chan6, packet2.chan6);
    EXPECT_EQ(packet1.chan7, packet2.chan7);
    EXPECT_EQ(packet1.chan8, packet2.chan8);
    EXPECT_EQ(packet1.chan9, packet2.chan9);
    EXPECT_EQ(packet1.chan10, packet2.chan10);
    EXPECT_EQ(packet1.chan11, packet2.chan11);
    EXPECT_EQ(packet1.chan12, packet2.chan12);
    EXPECT_EQ(packet1.chan13, packet2.chan13);
    EXPECT_EQ(packet1.chan14, packet2.chan14);
    EXPECT_EQ(packet1.chan15, packet2.chan15);
    EXPECT_EQ(packet1.chan16, packet2.chan16);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_RC_CHANNELS_RAW)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_rc_channels_raw_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379, 18483, 18587, 18691, 18795
    };

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_RAW packet2{};

    mavlink_msg_ascl_rc_channels_raw_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.chan1, packet2.chan1);
    EXPECT_EQ(packet_in.chan2, packet2.chan2);
    EXPECT_EQ(packet_in.chan3, packet2.chan3);
    EXPECT_EQ(packet_in.chan4, packet2.chan4);
    EXPECT_EQ(packet_in.chan5, packet2.chan5);
    EXPECT_EQ(packet_in.chan6, packet2.chan6);
    EXPECT_EQ(packet_in.chan7, packet2.chan7);
    EXPECT_EQ(packet_in.chan8, packet2.chan8);
    EXPECT_EQ(packet_in.chan9, packet2.chan9);
    EXPECT_EQ(packet_in.chan10, packet2.chan10);
    EXPECT_EQ(packet_in.chan11, packet2.chan11);
    EXPECT_EQ(packet_in.chan12, packet2.chan12);
    EXPECT_EQ(packet_in.chan13, packet2.chan13);
    EXPECT_EQ(packet_in.chan14, packet2.chan14);
    EXPECT_EQ(packet_in.chan15, packet2.chan15);
    EXPECT_EQ(packet_in.chan16, packet2.chan16);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_RC_CHANNELS_SCALED)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet1{};
    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.chan1, packet2.chan1);
    EXPECT_EQ(packet1.chan2, packet2.chan2);
    EXPECT_EQ(packet1.chan3, packet2.chan3);
    EXPECT_EQ(packet1.chan4, packet2.chan4);
    EXPECT_EQ(packet1.chan5, packet2.chan5);
    EXPECT_EQ(packet1.chan6, packet2.chan6);
    EXPECT_EQ(packet1.chan7, packet2.chan7);
    EXPECT_EQ(packet1.chan8, packet2.chan8);
    EXPECT_EQ(packet1.chan9, packet2.chan9);
    EXPECT_EQ(packet1.chan10, packet2.chan10);
    EXPECT_EQ(packet1.chan11, packet2.chan11);
    EXPECT_EQ(packet1.chan12, packet2.chan12);
    EXPECT_EQ(packet1.chan13, packet2.chan13);
    EXPECT_EQ(packet1.chan14, packet2.chan14);
    EXPECT_EQ(packet1.chan15, packet2.chan15);
    EXPECT_EQ(packet1.chan16, packet2.chan16);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_RC_CHANNELS_SCALED)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_rc_channels_scaled_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379, 18483, 18587, 18691, 18795
    };

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_RC_CHANNELS_SCALED packet2{};

    mavlink_msg_ascl_rc_channels_scaled_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.chan1, packet2.chan1);
    EXPECT_EQ(packet_in.chan2, packet2.chan2);
    EXPECT_EQ(packet_in.chan3, packet2.chan3);
    EXPECT_EQ(packet_in.chan4, packet2.chan4);
    EXPECT_EQ(packet_in.chan5, packet2.chan5);
    EXPECT_EQ(packet_in.chan6, packet2.chan6);
    EXPECT_EQ(packet_in.chan7, packet2.chan7);
    EXPECT_EQ(packet_in.chan8, packet2.chan8);
    EXPECT_EQ(packet_in.chan9, packet2.chan9);
    EXPECT_EQ(packet_in.chan10, packet2.chan10);
    EXPECT_EQ(packet_in.chan11, packet2.chan11);
    EXPECT_EQ(packet_in.chan12, packet2.chan12);
    EXPECT_EQ(packet_in.chan13, packet2.chan13);
    EXPECT_EQ(packet_in.chan14, packet2.chan14);
    EXPECT_EQ(packet_in.chan15, packet2.chan15);
    EXPECT_EQ(packet_in.chan16, packet2.chan16);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif

TEST(ascluav, ASCL_PWM_OUT)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::ascluav::msg::ASCL_PWM_OUT packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_PWM_OUT packet1{};
    mavlink::ascluav::msg::ASCL_PWM_OUT packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.chan1, packet2.chan1);
    EXPECT_EQ(packet1.chan2, packet2.chan2);
    EXPECT_EQ(packet1.chan3, packet2.chan3);
    EXPECT_EQ(packet1.chan4, packet2.chan4);
    EXPECT_EQ(packet1.chan5, packet2.chan5);
    EXPECT_EQ(packet1.chan6, packet2.chan6);
    EXPECT_EQ(packet1.chan7, packet2.chan7);
    EXPECT_EQ(packet1.chan8, packet2.chan8);
    EXPECT_EQ(packet1.chan9, packet2.chan9);
    EXPECT_EQ(packet1.chan10, packet2.chan10);
    EXPECT_EQ(packet1.chan11, packet2.chan11);
    EXPECT_EQ(packet1.chan12, packet2.chan12);
    EXPECT_EQ(packet1.chan13, packet2.chan13);
    EXPECT_EQ(packet1.chan14, packet2.chan14);
    EXPECT_EQ(packet1.chan15, packet2.chan15);
    EXPECT_EQ(packet1.chan16, packet2.chan16);
}

#ifdef TEST_INTEROP
TEST(ascluav_interop, ASCL_PWM_OUT)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_ascl_pwm_out_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379, 18483, 18587, 18691, 18795
    };

    mavlink::ascluav::msg::ASCL_PWM_OUT packet_in{};
    packet_in.chan1 = 17235;
    packet_in.chan2 = 17339;
    packet_in.chan3 = 17443;
    packet_in.chan4 = 17547;
    packet_in.chan5 = 17651;
    packet_in.chan6 = 17755;
    packet_in.chan7 = 17859;
    packet_in.chan8 = 17963;
    packet_in.chan9 = 18067;
    packet_in.chan10 = 18171;
    packet_in.chan11 = 18275;
    packet_in.chan12 = 18379;
    packet_in.chan13 = 18483;
    packet_in.chan14 = 18587;
    packet_in.chan15 = 18691;
    packet_in.chan16 = 18795;

    mavlink::ascluav::msg::ASCL_PWM_OUT packet2{};

    mavlink_msg_ascl_pwm_out_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.chan1, packet2.chan1);
    EXPECT_EQ(packet_in.chan2, packet2.chan2);
    EXPECT_EQ(packet_in.chan3, packet2.chan3);
    EXPECT_EQ(packet_in.chan4, packet2.chan4);
    EXPECT_EQ(packet_in.chan5, packet2.chan5);
    EXPECT_EQ(packet_in.chan6, packet2.chan6);
    EXPECT_EQ(packet_in.chan7, packet2.chan7);
    EXPECT_EQ(packet_in.chan8, packet2.chan8);
    EXPECT_EQ(packet_in.chan9, packet2.chan9);
    EXPECT_EQ(packet_in.chan10, packet2.chan10);
    EXPECT_EQ(packet_in.chan11, packet2.chan11);
    EXPECT_EQ(packet_in.chan12, packet2.chan12);
    EXPECT_EQ(packet_in.chan13, packet2.chan13);
    EXPECT_EQ(packet_in.chan14, packet2.chan14);
    EXPECT_EQ(packet_in.chan15, packet2.chan15);
    EXPECT_EQ(packet_in.chan16, packet2.chan16);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
