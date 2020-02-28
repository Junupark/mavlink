// MESSAGE ASCL_COMMAND_SEND_FI support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_COMMAND_SEND_FI message
 *
 * Message encoding a command with parameters
 */
struct ASCL_COMMAND_SEND_FI : mavlink::Message {
    static constexpr msgid_t MSG_ID = 53248;
    static constexpr size_t LENGTH = 28;
    static constexpr size_t MIN_LENGTH = 28;
    static constexpr uint8_t CRC_EXTRA = 86;
    static constexpr auto NAME = "ASCL_COMMAND_SEND_FI";


    uint16_t command; /*<  Command ID */
    uint16_t option; /*<  command option, see ASCL_CMD enum */
    float param2; /*<  PARAM2, see ASCL_CMD enum */
    float param3; /*<  PARAM3, see ASCL_CMD enum */
    float param4; /*<  PARAM4, see ASCL_CMD enum */
    int32_t x; /*<  PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7 */
    int32_t y; /*<  PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7 */
    int32_t z; /*<  PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame). */


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
        ss << "  command: " << command << std::endl;
        ss << "  option: " << option << std::endl;
        ss << "  param2: " << param2 << std::endl;
        ss << "  param3: " << param3 << std::endl;
        ss << "  param4: " << param4 << std::endl;
        ss << "  x: " << x << std::endl;
        ss << "  y: " << y << std::endl;
        ss << "  z: " << z << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << param2;                        // offset: 0
        map << param3;                        // offset: 4
        map << param4;                        // offset: 8
        map << x;                             // offset: 12
        map << y;                             // offset: 16
        map << z;                             // offset: 20
        map << command;                       // offset: 24
        map << option;                        // offset: 26
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> param2;                        // offset: 0
        map >> param3;                        // offset: 4
        map >> param4;                        // offset: 8
        map >> x;                             // offset: 12
        map >> y;                             // offset: 16
        map >> z;                             // offset: 20
        map >> command;                       // offset: 24
        map >> option;                        // offset: 26
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
