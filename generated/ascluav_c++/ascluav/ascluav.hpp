/** @file
 *	@brief MAVLink comm protocol generated from ascluav.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace ascluav {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (trought @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 19> MESSAGE_ENTRIES {{ {53232, 117, 7, 7, 0, 0, 0}, {53233, 50, 2, 2, 0, 0, 0}, {53234, 72, 8, 8, 0, 0, 0}, {53248, 86, 28, 28, 0, 0, 0}, {53249, 73, 28, 28, 0, 0, 0}, {53250, 218, 3, 3, 0, 0, 0}, {53298, 143, 145, 145, 0, 0, 0}, {53400, 122, 16, 16, 0, 0, 0}, {53401, 124, 28, 28, 0, 0, 0}, {53402, 249, 30, 30, 0, 0, 0}, {53403, 193, 16, 16, 0, 0, 0}, {53404, 238, 64, 64, 0, 0, 0}, {53500, 194, 32, 32, 0, 0, 0}, {53501, 75, 32, 32, 0, 0, 0}, {53502, 167, 32, 32, 0, 0, 0}, {55296, 12, 313, 313, 0, 0, 0}, {55297, 3, 85, 85, 0, 0, 0}, {55299, 215, 36, 36, 0, 0, 0}, {55300, 43, 16, 16, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 1;


// ENUM DEFINITIONS


/** @brief Category a certain parameter is categorized. Mapping is as follows; 0: Navigation, 1: Control, 2: Guidance, 3: Mission, 4 and above: To be added. */
enum class ASCL_PARAM_CATEGORY
{
    NAVIGATION=0, /* Category Navigation | */
    CONTROL=1, /* Category Control | */
    GUIDANCE=2, /* Category Guidance | */
    MISSION=3, /* Category Mission | */
    RESERVED1=4, /* Category reserved | */
    RESERVED2=5, /* Category reserved | */
    RESERVED3=6, /* Category reserved | */
    RESERVED4=7, /* Category reserved | */
};

//! ASCL_PARAM_CATEGORY ENUM_END
constexpr auto ASCL_PARAM_CATEGORY_ENUM_END = 8;

/** @brief Parameter ID. N=2^8, {0~N-1}: Navigation, {N~2N-1}: Control, {2N~3N-1}: Guidnance, {3N~4N-1}: Mission, and many more */
enum class ASCL_PARAM_ID : uint16_t
{
    NAV_COV_P0_QUAT=0, /* Covariance P0 for quaternions | */
    NAV_COV_P0_EULER_TILT=1, /* Covariance P0 for roll,pitch | */
    NAV_COV_P0_EULER_HEADING=2, /* Covariance P0 for heading | */
    NAV_COV_P0_HOR_VEL=3, /* Covariance P0 for horizontal velocity | */
    NAV_COV_P0_VER_VEL=4, /* Covariance P0 for vertical velocity | */
    NAV_COV_P0_HOR_POS=5, /* Covariance P0 for horizontal position | */
    NAV_COV_P0_VER_POS=6, /* Covariance P0 for altitude | */
    NAV_COV_P0_GYRO_BIAS=7, /* Covariance P0 for gyro bias | */
    NAV_COV_P0_ACC_BIAS=8, /* Covariance P0 for acc bias | */
    NAV_COV_P0_MAG_NED=9, /* Covariance P0 for NED magnetic flux | */
    NAV_COV_P0_MAG_BIAS=10, /* Covariance P0 for mag bias | */
    NAV_COV_Q_GYRO=16, /* Covariance Q for delta angle | */
    NAV_COV_Q_GYRO_BIAS=17, /* Covariance Q for gyro bias | */
    NAV_COV_Q_ACC=18, /* Covariance Q for delta velocity | */
    NAV_COV_Q_ACC_BIAS=19, /* Covariance Q for acc bias | */
    NAV_COV_Q_MAG_NED=20, /* Covariance Q for NED magnetic flux | */
    NAV_COV_Q_MAG_BIAS=21, /* Covariance Q for mag bias | */
    NAV_COV_R_GPS_HOR_POS=32, /* Covariance R for NE position of GPS lat, long, height converted into NED | */
    NAV_COV_R_GPS_VER_POS=33, /* Covariance R for D position of GPS lat, long, height converted into NED | */
    NAV_COV_R_GPS_VEL=34, /* Covariance R for GPS velocity_ned | */
    NAV_COV_R_BARO_ALT=35, /* Covariance R for barometric altitude | */
    NAV_COV_R_MAG_BODY=36, /* Covariance R for magnetometer measurement | */
    NAV_COV_R_MAG_DECLINATION=37, /* Covariance R for magnetic declination | */
    NAV_COV_R_AHRS=38, /* Covariance R for AHRS | */
    CTRL_GAIN_P_RATE_P=4096, /*  | */
    CTRL_GAIN_I_RATE_P=4097, /*  | */
    CTRL_GAIN_D_RATE_P=4098, /*  | */
    CTRL_GAIN_P_RATE_Q=4099, /*  | */
    CTRL_GAIN_I_RATE_Q=4100, /*  | */
    CTRL_GAIN_D_RATE_Q=4101, /*  | */
    CTRL_GAIN_P_RATE_R=4102, /*  | */
    CTRL_GAIN_I_RATE_R=4103, /*  | */
    CTRL_GAIN_D_RATE_R=4104, /*  | */
    CTRL_GAIN_P_ATT_ROLL=4105, /*  | */
    CTRL_GAIN_I_ATT_ROLL=4106, /*  | */
    CTRL_GAIN_D_ATT_ROLL=4107, /*  | */
    CTRL_GAIN_P_ATT_PITCH=4108, /*  | */
    CTRL_GAIN_I_ATT_PITCH=4109, /*  | */
    CTRL_GAIN_D_ATT_PITCH=4110, /*  | */
    CTRL_GAIN_P_ATT_YAW=4111, /*  | */
    CTRL_GAIN_I_ATT_YAW=4112, /*  | */
    CTRL_GAIN_D_ATT_YAW=4113, /*  | */
    GUID_PN_CONSTANT=8192, /* Proportional constant of PN guidance, 3~5 | */
    GUID_MAXIMUM_PULLUP_G=8193, /* Constraint on maximum acceleration represented in "g" | */
    MISSION_BATTERY_RTB=12288, /* Vehicle should perform RTB when battery level is below this | */
};

//! ASCL_PARAM_ID ENUM_END
constexpr auto ASCL_PARAM_ID_ENUM_END = 12289;

/** @brief Specifies the datatype of a ASCL parameter. */
enum class ASCL_PARAM_TYPE : uint8_t
{
    UINT8=1, /* 8-bit unsigned integer | */
    INT8=2, /* 8-bit signed integer | */
    UINT16=3, /* 16-bit unsigned integer | */
    INT16=4, /* 16-bit signed integer | */
    UINT32=5, /* 32-bit unsigned integer | */
    INT32=6, /* 32-bit signed integer | */
    UINT64=7, /* 64-bit unsigned integer | */
    INT64=8, /* 64-bit signed integer | */
    REAL32=9, /* 32-bit floating-point | */
    REAL64=10, /* 64-bit floating-point | */
};

//! ASCL_PARAM_TYPE ENUM_END
constexpr auto ASCL_PARAM_TYPE_ENUM_END = 11;

/** @brief Status of a parameter. in response of ASCL_PARAM_SET/ASCL_PARAM_REQUEST */
enum class ASCL_PARAM_RESULT : uint8_t
{
    ACCEPTED=0, /* Parameter published through ASCL_PARAM_SET is accepted | */
    REJECTED=1, /* Parameter published through ASCL_PARAM_SET is rejected since it's invalid | */
    INVALID_ID=2, /* Parameter identified through both ASCL_PARAM_SET/ASCL_PARAM_REQUEST is not accessible | */
    RESPONSE=3, /* Parameter is correctly returned in response of ASCL_PARAM_REQUEST | */
};

//! ASCL_PARAM_RESULT ENUM_END
constexpr auto ASCL_PARAM_RESULT_ENUM_END = 4;

/** @brief Specifies fusion type */
enum class ASCL_EKF_FUSION
{
    EFK_FUSION_NONE=0, /*  | */
    EFK_FUSION_RESERVED2=1, /*  | */
    EFK_FUSION_RESERVED1=2, /*  | */
    EFK_FUSION_AHRS=4, /*  | */
    EFK_FUSION_MAG_DECL=8, /*  | */
    EFK_FUSION_MAG_XYZ=16, /*  | */
    EFK_FUSION_BARO_ALT=32, /*  | */
    EFK_FUSION_GPS_VEL=64, /*  | */
    EFK_FUSION_GPS_POS=128, /*  | */
    ALL=255, /*  | */
};

//! ASCL_EKF_FUSION ENUM_END
constexpr auto ASCL_EKF_FUSION_ENUM_END = 256;

/** @brief Specified sensor calibration type */
enum class ASCL_SENSOR_CALIBRATION
{
    NONE=0, /* no designated calibration | */
    MAG=1, /*  | */
    HEIGHT=2, /*  | */
    ACC=4, /*  | */
    GYRO=8, /*  | */
    RESERVED4=16, /*  | */
    RESERVED3=32, /*  | */
    RESERVED2=64, /*  | */
    RESERVED1=128, /*  | */
    ALL=129, /*  | */
};

//! ASCL_SENSOR_CALIBRATION ENUM_END
constexpr auto ASCL_SENSOR_CALIBRATION_ENUM_END = 130;

/** @brief TO BE ADDED */
enum class ASCL_CMD
{
    NAV_RESET_COVARIANCE_FROM_TO=0, /* Reset Covariance P of EKF within designated indexes. |0: maintain current, otherwise reset to P0| Empty| Empty| Empty| from idx| to idx| Empty|  */
    NAV_RESET_COVARIANCE_ALL=1, /*  |0: maintain current, otherwise reset to P0| Empty| Empty| Empty| Empty| Empty| Empty|  */
    NAV_RESET_STATE_FROM_TO=2, /*  |0: maintain current, otherwise reset to zero(zero-ables)| Empty| Empty| Empty| from idx| to idx| Empty|  */
    NAV_RESET_STATE_ALL=3, /*  |0: maintain current, otherwise reset to zero(zero-ables)| Empty| Empty| Empty| Empty| Empty| Empty|  */
    NAV_SET_FUSION=4, /*  |0: reset(no fusion), otherwise set(do fusion)| Empty| Empty| Empty| Indicate which fusion| Empty| Empty|  */
    NAV_CALIBRATE_SENSORS=5, /*  |Empty| Gyro Calibration 0:off, otherwise:on| Acc Calibration 0:off, otherwise:on| Height(Baro-Gps-etc) Calibration 0:off, otherwise:on| Mag Calibration 0:off, otherwise:on| Reserved1| Reserved2|  */
    NAV_USE_CALIBRATED=6, /*  |Empty| Use Calibrated Gyro 0:off, otherwise:on| Use Calibrated Acc 0:off, otherwise:on| Use Calibrated Height(Baro-Gps-etc) 0:off, otherwise:on| Use Calibrated Mag 0:off, otherwise:on| Reserved1| Reserved2|  */
    NAV_OVERRIDE_CALIBRATED=7, /* override FC's calivration into offline calibrated value || bias x-axis| bias y-axis| bias z-axis| scale factor x-axis| scale factor y-axis| scale factor z-axis|  */
    NAV_SET_HOME=8, /*  || Empty| Empty| Empty| latitude in degrees * 10^7| longitude in degrees * 10^7| altitude in mm|  */
};

//! ASCL_CMD ENUM_END
constexpr auto ASCL_CMD_ENUM_END = 9;

/** @brief  */
enum class ASCL_CMD_RESULT : uint8_t
{
    OK=0, /* Command is OK/applied | */
    ERR=1, /* Generic Error | */
    ERR_REJECTED=2, /* Command is refused by subscriber as it's not applicable at the moment | */
    ERR_UNKNOWN=3, /* Command is refused by subscriber as it's unknown command | */
};

//! ASCL_CMD_RESULT ENUM_END
constexpr auto ASCL_CMD_RESULT_ENUM_END = 4;


} // namespace ascluav
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ascl_param_set.hpp"
#include "./mavlink_msg_ascl_param_request.hpp"
#include "./mavlink_msg_ascl_param_value.hpp"
#include "./mavlink_msg_ascl_command_send_fi.hpp"
#include "./mavlink_msg_ascl_command_send_f.hpp"
#include "./mavlink_msg_ascl_command_ack.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_regular.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_att.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_vel_pos.hpp"
#include "./mavlink_msg_ascl_telemetry_nav_state_refernce.hpp"
#include "./mavlink_msg_ascl_telemetry_home.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_mag.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_imu.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_gps.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_baro.hpp"
#include "./mavlink_msg_ascl_telemetry_sensor_gps_ins.hpp"
#include "./mavlink_msg_ascl_rc_channels_raw.hpp"
#include "./mavlink_msg_ascl_rc_channels_scaled.hpp"
#include "./mavlink_msg_ascl_pwm_out.hpp"

// base include

