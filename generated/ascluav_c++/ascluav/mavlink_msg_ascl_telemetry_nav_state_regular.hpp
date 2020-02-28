// MESSAGE ASCL_TELEMETRY_NAV_STATE_REGULAR support class

#pragma once

namespace mavlink {
namespace ascluav {
namespace msg {

/**
 * @brief ASCL_TELEMETRY_NAV_STATE_REGULAR message
 *
 * Message encoding regular telemetry set
 */
struct ASCL_TELEMETRY_NAV_STATE_REGULAR : mavlink::Message {
    static constexpr msgid_t MSG_ID = 55296;
    static constexpr size_t LENGTH = 313;
    static constexpr size_t MIN_LENGTH = 313;
    static constexpr uint8_t CRC_EXTRA = 12;
    static constexpr auto NAME = "ASCL_TELEMETRY_NAV_STATE_REGULAR";


    uint32_t timems; /*< [ms]  */
    std::array<float, 3> pqr; /*< [deg/s]   */
    std::array<float, 3> euler; /*< [deg]   */
    std::array<float, 4> quat; /*<    */
    std::array<float, 3> acc; /*< [m/s^2]   */
    std::array<float, 3> velBody; /*< [deg]   */
    std::array<float, 3> velNed; /*< [deg]   */
    std::array<float, 3> ned; /*< [deg]   */
    std::array<uint32_t, 2> llh; /*< [degE7,mm]   */
    std::array<float, 10> covQuat; /*<   Upper triangle of P(IDX_QUAT:IDX_QUAT+3, IDX_QUAT:IDX_QUAT+3) */
    std::array<float, 21> covVelPos; /*<   Upper triangle of P(IDX_VEL:IDX_POS+2, IDX_VEL:IDX_POS+2) */
    std::array<float, 22> covDiag; /*<   Diagonal element of P(IDX_GYRO_BIAS:end, IDX_GYRO_BIAS:end) */
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
        ss << "  pqr: [" << to_string(pqr) << "]" << std::endl;
        ss << "  euler: [" << to_string(euler) << "]" << std::endl;
        ss << "  quat: [" << to_string(quat) << "]" << std::endl;
        ss << "  acc: [" << to_string(acc) << "]" << std::endl;
        ss << "  velBody: [" << to_string(velBody) << "]" << std::endl;
        ss << "  velNed: [" << to_string(velNed) << "]" << std::endl;
        ss << "  ned: [" << to_string(ned) << "]" << std::endl;
        ss << "  llh: [" << to_string(llh) << "]" << std::endl;
        ss << "  covQuat: [" << to_string(covQuat) << "]" << std::endl;
        ss << "  covVelPos: [" << to_string(covVelPos) << "]" << std::endl;
        ss << "  covDiag: [" << to_string(covDiag) << "]" << std::endl;
        ss << "  fused: " << +fused << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timems;                        // offset: 0
        map << pqr;                           // offset: 4
        map << euler;                         // offset: 16
        map << quat;                          // offset: 28
        map << acc;                           // offset: 44
        map << velBody;                       // offset: 56
        map << velNed;                        // offset: 68
        map << ned;                           // offset: 80
        map << llh;                           // offset: 92
        map << covQuat;                       // offset: 100
        map << covVelPos;                     // offset: 140
        map << covDiag;                       // offset: 224
        map << fused;                         // offset: 312
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timems;                        // offset: 0
        map >> pqr;                           // offset: 4
        map >> euler;                         // offset: 16
        map >> quat;                          // offset: 28
        map >> acc;                           // offset: 44
        map >> velBody;                       // offset: 56
        map >> velNed;                        // offset: 68
        map >> ned;                           // offset: 80
        map >> llh;                           // offset: 92
        map >> covQuat;                       // offset: 100
        map >> covVelPos;                     // offset: 140
        map >> covDiag;                       // offset: 224
        map >> fused;                         // offset: 312
    }
};

} // namespace msg
} // namespace ascluav
} // namespace mavlink
