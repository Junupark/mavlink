// MESSAGE ASCL_TELEMETRY_SENSOR_GPS_INS support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_SENSOR_GPS_INS message
 *
 * Message encoding GPS/INS data. VN200 at the moment
 */
struct ASCL_TELEMETRY_SENSOR_GPS_INS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 53404;
    static constexpr size_t LENGTH = 64;
    static constexpr size_t MIN_LENGTH = 64;
    static constexpr uint8_t CRC_EXTRA = 238;
    static constexpr auto NAME = "ASCL_TELEMETRY_SENSOR_GPS_INS";


    uint32_t timems; /*< [ms]  */
    uint32_t lat; /*< [degE7]  */
    uint32_t lon; /*< [degE7]  */
    uint32_t height; /*< [mm]   */
    std::array<uint32_t, 3> velNed; /*< [mm/s]  */
    std::array<float, 3> euler; /*< [deg]   */
    std::array<float, 3> gyro; /*<   */
    std::array<float, 3> acc; /*<   */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  timems: " << timems << std::endl;
        ss << "  lat: " << lat << std::endl;
        ss << "  lon: " << lon << std::endl;
        ss << "  height: " << height << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;
        ss << "  euler: [" << to_string(euler) << "]" << std::endl;
        ss << "  gyro: [" << to_string(gyro) << "]" << std::endl;
        ss << "  acc: [" << to_string(acc) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << lat;                           // offset: 4
        map << lon;                           // offset: 8
        map << height;                        // offset: 12
        map << velNed;                        // offset: 16
        map << euler;                         // offset: 28
        map << gyro;                          // offset: 40
        map << acc;                           // offset: 52
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> lat;                           // offset: 4
        map >> lon;                           // offset: 8
        map >> height;                        // offset: 12
        map >> velNed;                        // offset: 16
        map >> euler;                         // offset: 28
        map >> gyro;                          // offset: 40
        map >> acc;                           // offset: 52
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
