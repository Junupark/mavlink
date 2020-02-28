// MESSAGE ASCL_TELEMETRY_NAV_STATE_VEL_POS support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_NAV_STATE_VEL_POS message
 *
 * Message encoding position-related estimation
 */
struct ASCL_TELEMETRY_NAV_STATE_VEL_POS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 53298;
    static constexpr size_t LENGTH = 145;
    static constexpr size_t MIN_LENGTH = 145;
    static constexpr uint8_t CRC_EXTRA = 143;
    static constexpr auto NAME = "ASCL_TELEMETRY_NAV_STATE_VEL_POS";


    uint32_t timems; /*< [ms]  */
    std::array<float, 3> acc; /*< [m/s^2]   */
    std::array<float, 3> velBody; /*< [deg]   */
    std::array<float, 3> velNed; /*< [deg]   */
    std::array<float, 3> ned; /*< [deg]   */
    std::array<uint32_t, 2> llh; /*< [degE7,mm]   */
    std::array<float, 21> covVelPos; /*<    */
    uint8_t fused; /*<    */


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
        ss << "  acc: [" << to_string(acc) << "]" << std::endl;
        ss << "  velBody: [" << to_string(velBody) << "]" << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;
        ss << "  ned: [" << to_string(ned) << "]" << std::endl;
        ss << "  llh: [" << to_string(llh) << "]" << std::endl;
        ss << "  covVelPos: [" << to_string(covVelPos) << "]" << std::endl;
        ss << "  fused: " << +fused << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << acc;                           // offset: 4
        map << velBody;                       // offset: 16
        map << velNed;                        // offset: 28
        map << ned;                           // offset: 40
        map << llh;                           // offset: 52
        map << covVelPos;                     // offset: 60
        map << fused;                         // offset: 144
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> acc;                           // offset: 4
        map >> velBody;                       // offset: 16
        map >> velNed;                        // offset: 28
        map >> ned;                           // offset: 40
        map >> llh;                           // offset: 52
        map >> covVelPos;                     // offset: 60
        map >> fused;                         // offset: 144
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
