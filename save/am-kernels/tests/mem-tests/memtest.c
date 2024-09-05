#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#define uint8_t unsigned char
#define uint16_t unsigned short
#define uint32_t unsigned int
#define uint64_t unsigned long long
// 定义SRAM的基地址和结束地址
#define SRAM_BASE 0x0f000000
#define SRAM_END  0x0f0017ff

int main() {
    volatile uint32_t *sram32 = (volatile uint32_t *)SRAM_BASE;

    // 8位数据合并成32位测试
    for (uint32_t addr = SRAM_BASE; addr <= SRAM_END; addr += 4) {
        uint32_t data = 0;
        // 将4个8位数据合并成一个32位数据
        data |= ((addr + 0) & 0xFF) << 0;
        data |= ((addr + 1) & 0xFF) << 8;
        data |= ((addr + 2) & 0xFF) << 16;
        data |= ((addr + 3) & 0xFF) << 24;
        // 写入32位数据
        sram32[(addr - SRAM_BASE) / 4] = data;
    }

    // 检查8位合并成32位数据
    for (uint32_t addr = SRAM_BASE; addr <= SRAM_END; addr += 4) {
        uint32_t expected = 0;
        // 将4个8位数据拼接成32位的预期值
        expected |= ((addr + 0) & 0xFF) << 0;
        expected |= ((addr + 1) & 0xFF) << 8;
        expected |= ((addr + 2) & 0xFF) << 16;
        expected |= ((addr + 3) & 0xFF) << 24;
        // 检查是否匹配
        if (sram32[(addr - SRAM_BASE) / 4] != expected) {
            halt(1);  // 检查失败，终止程序
        }
    }

    // 16位数据合并成32位测试
    for (uint32_t addr = SRAM_BASE; addr <= SRAM_END; addr += 4) {
        uint32_t data = 0;
        // 将两个16位数据合并成一个32位数据
        data |= ((addr + 0) & 0xFFFF) << 0;
        data |= ((addr + 2) & 0xFFFF) << 16;
        // 写入32位数据
        sram32[(addr - SRAM_BASE) / 4] = data;
    }

    // 检查16位合并成32位数据
    for (uint32_t addr = SRAM_BASE; addr <= SRAM_END; addr += 4) {
        uint32_t expected = 0;
        // 将两个16位数据拼接成32位的预期值
        expected |= ((addr + 0) & 0xFFFF) << 0;
        expected |= ((addr + 2) & 0xFFFF) << 16;
        // 检查是否匹配
        if (sram32[(addr - SRAM_BASE) / 4] != expected) {
            halt(1);  // 检查失败，终止程序
        }
    }

    // 32位测试
    for (uint32_t addr = SRAM_BASE; addr <= SRAM_END; addr += 4) {
        uint32_t data = (addr & 0xFFFFFFFF);
        sram32[(addr - SRAM_BASE) / 4] = data;
    }

    for (uint32_t addr = SRAM_BASE; addr <= SRAM_END; addr += 4) {
        uint32_t expected = (addr & 0xFFFFFFFF);
        if (sram32[(addr - SRAM_BASE) / 4] != expected) {
            halt(1);
        }
    }

    // 64位测试，写入时将64位数据拆分成两个32位数据写入
    for (uint32_t addr = SRAM_BASE; addr <= SRAM_END; addr += 8) {
        uint64_t data = (uint64_t)(addr & 0xFFFFFFFFFFFFFFFF);
        // 将64位数据分成两部分，低32位和高32位
        uint32_t lower = (uint32_t)(data & 0xFFFFFFFF);
        uint32_t upper = (uint32_t)((data >> 32) & 0xFFFFFFFF);
        sram32[(addr - SRAM_BASE) / 4] = lower;            // 低32位写入
        sram32[(addr - SRAM_BASE) / 4 + 1] = upper;        // 高32位写入
    }

    // 检查64位测试
    for (uint32_t addr = SRAM_BASE; addr <= SRAM_END; addr += 8) {
        uint64_t expected = (uint64_t)(addr & 0xFFFFFFFFFFFFFFFF);
        uint32_t lower = (uint32_t)(expected & 0xFFFFFFFF);
        uint32_t upper = (uint32_t)((expected >> 32) & 0xFFFFFFFF);
        if (sram32[(addr - SRAM_BASE) / 4] != lower || sram32[(addr - SRAM_BASE) / 4 + 1] != upper) {
            halt(1);
        }
    }

    return 0;  // 所有测试通过，正常退出
}
