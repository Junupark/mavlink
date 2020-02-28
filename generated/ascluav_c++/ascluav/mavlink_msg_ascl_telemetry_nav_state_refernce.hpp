// MESSAGE ASCL_TELEMETRY_NAV_STATE_REFERNCE support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_NAV_STATE_REFERNCE message
 *
 * Message encoding navigational reference(believed to be true)
 */
struct ASCL_TELEMETRY_NAV_STATE_REFERNCE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55299;
    static constexpr size_t LENGTH = 36;
    static constexpr size_t MIN_LENGTH = 36;
    static constexpr uint8_t CRC_EXTRA = 215;
    static constexpr auto NAME = "ASCL_TELEMETRY_NAV_STATE_REFERNCE";


    uint32_t timems; /*< [ms]  */
    std::array<float, 3> euler; /*< [deg]   */
    std::array<uint32_t, 2> llh; /*< [degE7,mm]   */
    std::array<float, 3> velNed; /*< [deg]   */


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
        ss << "  euler: [" << to_string(euler) << "]" << std::endl;
        ss << "  llh: [" << to_string(llh) << "]" << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << euler;                         // offset: 4
        map << llh;                           // offset: 16
        map << velNed;                        // offset: 24
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> euler;                         // offset: 4
        map >> llh;                           // offset: 16
        map >> velNed;                        // offset: 24
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
