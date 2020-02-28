// MESSAGE ASCL_TELEMETRY_HOME support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_HOME message
 *
 * Message encoding home position
 */
struct ASCL_TELEMETRY_HOME : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55300;
    static constexpr size_t LENGTH = 16;
    static constexpr size_t MIN_LENGTH = 16;
    static constexpr uint8_t CRC_EXTRA = 43;
    static constexpr auto NAME = "ASCL_TELEMETRY_HOME";


    uint32_t timems; /*< [ms]  */
    uint32_t lat; /*< [degE7]   */
    uint32_t lon; /*< [degE7]   */
    uint32_t height; /*< [mm]   */


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

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << lat;                           // offset: 4
        map << lon;                           // offset: 8
        map << height;                        // offset: 12
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> lat;                           // offset: 4
        map >> lon;                           // offset: 8
        map >> height;                        // offset: 12
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
