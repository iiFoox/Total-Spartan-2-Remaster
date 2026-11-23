#include "ps2/vu_ops.hpp"

namespace gen {
void vu0_456DC3C89844E5A9(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_2FC06A33806359AA(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_7DCEACD37DE3D79F(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_AE9EEFEEEE6B962A(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_A4AA16B77F3145A9(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_C14B8FB84FBA54BE(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_0EDD061A8918A42B(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_6C7EA67CE2C8513A(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_97AF31A59B05C763(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_E60FACAD66D7B638(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_5B0AB6633A824DCF(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_CF5C6164D016B31B(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_8BBB4E6B94148F48(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_D96DE1D179CEC323(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_920345E027B1A5EE(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_CCDC45F529715238(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_2CD9E64F3D0E7F76(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_FC7AD8E560F9463C(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_AE58F849232E4DC5(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_096D1B30AD3FFACA(ps2::Vu0Regs &r, std::uint8_t *mem);
void vu0_BDE4A4C5108528E4(ps2::Vu0Regs &r, std::uint8_t *mem);

const ps2::vu::Program kVuPrograms[] = {
    {0x456DC3C89844E5A9ull, vu0_456DC3C89844E5A9, 0},
    {0x2FC06A33806359AAull, vu0_2FC06A33806359AA, 0},
    {0x7DCEACD37DE3D79Full, vu0_7DCEACD37DE3D79F, 0},
    {0xAE9EEFEEEE6B962Aull, vu0_AE9EEFEEEE6B962A, 0},
    {0xA4AA16B77F3145A9ull, vu0_A4AA16B77F3145A9, 0},
    {0xC14B8FB84FBA54BEull, vu0_C14B8FB84FBA54BE, 0},
    {0x0EDD061A8918A42Bull, vu0_0EDD061A8918A42B, 0},
    {0x6C7EA67CE2C8513Aull, vu0_6C7EA67CE2C8513A, 0},
    {0x97AF31A59B05C763ull, vu0_97AF31A59B05C763, 0},
    {0xE60FACAD66D7B638ull, vu0_E60FACAD66D7B638, 0},
    {0x5B0AB6633A824DCFull, vu0_5B0AB6633A824DCF, 0},
    {0xCF5C6164D016B31Bull, vu0_CF5C6164D016B31B, 0},
    {0x8BBB4E6B94148F48ull, vu0_8BBB4E6B94148F48, 0},
    {0xD96DE1D179CEC323ull, vu0_D96DE1D179CEC323, 0},
    {0x920345E027B1A5EEull, vu0_920345E027B1A5EE, 0},
    {0xCCDC45F529715238ull, vu0_CCDC45F529715238, 0},
    {0x2CD9E64F3D0E7F76ull, vu0_2CD9E64F3D0E7F76, 0},
    {0xFC7AD8E560F9463Cull, vu0_FC7AD8E560F9463C, 0},
    {0xAE58F849232E4DC5ull, vu0_AE58F849232E4DC5, 0},
    {0x096D1B30AD3FFACAull, vu0_096D1B30AD3FFACA, 0},
    {0xBDE4A4C5108528E4ull, vu0_BDE4A4C5108528E4, 0},
};

}

void register_generated_vu() { ps2::vu::register_programs(gen::kVuPrograms, 21u); }
