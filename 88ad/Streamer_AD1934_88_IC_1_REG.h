/*
 * File:           C:\Users\oleg.tetushkin\Documents\Streamer_ADAU1452_AD1934\ПО\88\88ad\Streamer_AD1934_88_IC_1_REG.h
 *
 * Created:        Tuesday, March 29, 2022 2:52:47 PM
 * Description:    Streamer_AD1934_88:IC 1 control register definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2022 Analog Devices, Inc. All rights reserved.
 */
#ifndef __STREAMER_AD1934_88_IC_1_REG_H__
#define __STREAMER_AD1934_88_IC_1_REG_H__


/* PllCtrl0Register  - Registers (IC 1) */
#define REG_PLLCTRL0REGISTER_IC_1_ADDR            0x0
#define REG_PLLCTRL0REGISTER_IC_1_BYTE            1
#define REG_PLLCTRL0REGISTER_IC_1_VALUE           0x98

/* PllCtrl1Register  - Registers (IC 1) */
#define REG_PLLCTRL1REGISTER_IC_1_ADDR            0x1
#define REG_PLLCTRL1REGISTER_IC_1_BYTE            1
#define REG_PLLCTRL1REGISTER_IC_1_VALUE           0x76

/* DacCtrl0Register  - Registers (IC 1) */
#define REG_DACCTRL0REGISTER_IC_1_ADDR            0x2
#define REG_DACCTRL0REGISTER_IC_1_BYTE            1
#define REG_DACCTRL0REGISTER_IC_1_VALUE           0x2

/* DacCtrl1Register  - Registers (IC 1) */
#define REG_DACCTRL1REGISTER_IC_1_ADDR            0x3
#define REG_DACCTRL1REGISTER_IC_1_BYTE            1
#define REG_DACCTRL1REGISTER_IC_1_VALUE           0x0

/* DacCtrl2Register  - Registers (IC 1) */
#define REG_DACCTRL2REGISTER_IC_1_ADDR            0x4
#define REG_DACCTRL2REGISTER_IC_1_BYTE            1
#define REG_DACCTRL2REGISTER_IC_1_VALUE           0x40

/* DacMutesRegister  - Registers (IC 1) */
#define REG_DACMUTESREGISTER_IC_1_ADDR            0x5
#define REG_DACMUTESREGISTER_IC_1_BYTE            1
#define REG_DACMUTESREGISTER_IC_1_VALUE           0x0

/* DacVolumeRegistes0  - Registers (IC 1) */
#define REG_DACVOLUMEREGISTES0_IC_1_ADDR          0x6
#define REG_DACVOLUMEREGISTES0_IC_1_BYTE          1
#define REG_DACVOLUMEREGISTES0_IC_1_VALUE         0x0

/* DacVolumeRegistes1  - Registers (IC 1) */
#define REG_DACVOLUMEREGISTES1_IC_1_ADDR          0x7
#define REG_DACVOLUMEREGISTES1_IC_1_BYTE          1
#define REG_DACVOLUMEREGISTES1_IC_1_VALUE         0x0

/* DacVolumeRegistes2  - Registers (IC 1) */
#define REG_DACVOLUMEREGISTES2_IC_1_ADDR          0x8
#define REG_DACVOLUMEREGISTES2_IC_1_BYTE          1
#define REG_DACVOLUMEREGISTES2_IC_1_VALUE         0x0

/* DacVolumeRegistes3  - Registers (IC 1) */
#define REG_DACVOLUMEREGISTES3_IC_1_ADDR          0x9
#define REG_DACVOLUMEREGISTES3_IC_1_BYTE          1
#define REG_DACVOLUMEREGISTES3_IC_1_VALUE         0x0

/* DacVolumeRegistes4  - Registers (IC 1) */
#define REG_DACVOLUMEREGISTES4_IC_1_ADDR          0xA
#define REG_DACVOLUMEREGISTES4_IC_1_BYTE          1
#define REG_DACVOLUMEREGISTES4_IC_1_VALUE         0x0

/* DacVolumeRegistes5  - Registers (IC 1) */
#define REG_DACVOLUMEREGISTES5_IC_1_ADDR          0xB
#define REG_DACVOLUMEREGISTES5_IC_1_BYTE          1
#define REG_DACVOLUMEREGISTES5_IC_1_VALUE         0x0

/* DacVolumeRegistes6  - Registers (IC 1) */
#define REG_DACVOLUMEREGISTES6_IC_1_ADDR          0xC
#define REG_DACVOLUMEREGISTES6_IC_1_BYTE          1
#define REG_DACVOLUMEREGISTES6_IC_1_VALUE         0x0

/* DacVolumeRegistes7  - Registers (IC 1) */
#define REG_DACVOLUMEREGISTES7_IC_1_ADDR          0xD
#define REG_DACVOLUMEREGISTES7_IC_1_BYTE          1
#define REG_DACVOLUMEREGISTES7_IC_1_VALUE         0x0

/* AdcCtrl0Register  - Registers (IC 1) */
#define REG_ADCCTRL0REGISTER_IC_1_ADDR            0xE
#define REG_ADCCTRL0REGISTER_IC_1_BYTE            1
#define REG_ADCCTRL0REGISTER_IC_1_VALUE           0x0

/* AdcCtrl1Register  - Registers (IC 1) */
#define REG_ADCCTRL1REGISTER_IC_1_ADDR            0xF
#define REG_ADCCTRL1REGISTER_IC_1_BYTE            1
#define REG_ADCCTRL1REGISTER_IC_1_VALUE           0x0

/* AdcCtrl2Register  - Registers (IC 1) */
#define REG_ADCCTRL2REGISTER_IC_1_ADDR            0x10
#define REG_ADCCTRL2REGISTER_IC_1_BYTE            1
#define REG_ADCCTRL2REGISTER_IC_1_VALUE           0x0


/*
 *
 * Control register's field descriptions
 *
 */

/* PllCtrl0Register (IC 1) */
#define R0_POWERDOWN_IC_1                         0x0    /* 0b	[0] */
#define R0_MCLK_PIN_FUNC_IC_1                     0x0    /* 00b	[2:1] */
#define R0_MCLK_O_FUNC_IC_1                       0x3    /* 11b	[4:3] */
#define R0_PLL_INPUT_IC_1                         0x0    /* 00b	[6:5] */
#define R0_MCLK_ENABLE_IC_1                       0x1    /* 1b	[7] */
#define R0_POWERDOWN_IC_1_MASK                    0x1
#define R0_POWERDOWN_IC_1_SHIFT                   0
#define R0_MCLK_PIN_FUNC_IC_1_MASK                0x6
#define R0_MCLK_PIN_FUNC_IC_1_SHIFT               1
#define R0_MCLK_O_FUNC_IC_1_MASK                  0x18
#define R0_MCLK_O_FUNC_IC_1_SHIFT                 3
#define R0_PLL_INPUT_IC_1_MASK                    0x60
#define R0_PLL_INPUT_IC_1_SHIFT                   5
#define R0_MCLK_ENABLE_IC_1_MASK                  0x80
#define R0_MCLK_ENABLE_IC_1_SHIFT                 7

/* PllCtrl1Register (IC 1) */
#define R1_DAC_CLK_IC_1                           0x0    /* 0b	[0] */
#define R1_ADC_CLK_IC_1                           0x1    /* 1b	[1] */
#define R1_VREF_IC_1                              0x1    /* 1b	[2] */
#define R1_PLL_LOCK_IC_1                          0x0    /* 0b	[3] */
#define R1_DAC_CLK_IC_1_MASK                      0x1
#define R1_DAC_CLK_IC_1_SHIFT                     0
#define R1_ADC_CLK_IC_1_MASK                      0x2
#define R1_ADC_CLK_IC_1_SHIFT                     1
#define R1_VREF_IC_1_MASK                         0x4
#define R1_VREF_IC_1_SHIFT                        2
#define R1_PLL_LOCK_IC_1_MASK                     0x8
#define R1_PLL_LOCK_IC_1_SHIFT                    3

/* DacCtrl0Register (IC 1) */
#define R2_POWERDOWN_IC_1                         0x0    /* 0b	[0] */
#define R2_SAMPLE_RATE_IC_1                       0x1    /* 01b	[2:1] */
#define R2_SDATA_DELAY_IC_1                       0x0    /* 000b	[5:3] */
#define R2_SERIAL_FORMAT_IC_1                     0x0    /* 00b	[7:6] */
#define R2_POWERDOWN_IC_1_MASK                    0x1
#define R2_POWERDOWN_IC_1_SHIFT                   0
#define R2_SAMPLE_RATE_IC_1_MASK                  0x6
#define R2_SAMPLE_RATE_IC_1_SHIFT                 1
#define R2_SDATA_DELAY_IC_1_MASK                  0x38
#define R2_SDATA_DELAY_IC_1_SHIFT                 3
#define R2_SERIAL_FORMAT_IC_1_MASK                0xC0
#define R2_SERIAL_FORMAT_IC_1_SHIFT               6

/* DacCtrl1Register (IC 1) */
#define R3_BCLK_ACTIVE_IC_1                       0x0    /* 0b	[0] */
#define R3_BCLK_PF_IC_1                           0x0    /* 00b	[2:1] */
#define R3_LRCLK_POL_IC_1                         0x0    /* 0b	[3] */
#define R3_LRCLK_MASTER_IC_1                      0x0    /* 0b	[4] */
#define R3_BCLK_MASTER_IC_1                       0x0    /* 0b	[5] */
#define R3_BCLK_SOURCE_IC_1                       0x0    /* 0b	[6] */
#define R3_BCLK_POLARITY_IC_1                     0x0    /* 0b	[7] */
#define R3_BCLK_ACTIVE_IC_1_MASK                  0x1
#define R3_BCLK_ACTIVE_IC_1_SHIFT                 0
#define R3_BCLK_PF_IC_1_MASK                      0x6
#define R3_BCLK_PF_IC_1_SHIFT                     1
#define R3_LRCLK_POL_IC_1_MASK                    0x8
#define R3_LRCLK_POL_IC_1_SHIFT                   3
#define R3_LRCLK_MASTER_IC_1_MASK                 0x10
#define R3_LRCLK_MASTER_IC_1_SHIFT                4
#define R3_BCLK_MASTER_IC_1_MASK                  0x20
#define R3_BCLK_MASTER_IC_1_SHIFT                 5
#define R3_BCLK_SOURCE_IC_1_MASK                  0x40
#define R3_BCLK_SOURCE_IC_1_SHIFT                 6
#define R3_BCLK_POLARITY_IC_1_MASK                0x80
#define R3_BCLK_POLARITY_IC_1_SHIFT               7

/* DacCtrl2Register (IC 1) */
#define R4_MASTER_MUTE_IC_1                       0x0    /* 0b	[0] */
#define R4_DEEMPH_IC_1                            0x0    /* 00b	[2:1] */
#define R4_WORD_WIDTH_IC_1                        0x0    /* 00b	[4:3] */
#define R4_DAC_OUT_POL_IC_1                       0x0    /* 0b	[5] */
#define R4_MASTER_MUTE_IC_1_MASK                  0x1
#define R4_MASTER_MUTE_IC_1_SHIFT                 0
#define R4_DEEMPH_IC_1_MASK                       0x6
#define R4_DEEMPH_IC_1_SHIFT                      1
#define R4_WORD_WIDTH_IC_1_MASK                   0x18
#define R4_WORD_WIDTH_IC_1_SHIFT                  3
#define R4_DAC_OUT_POL_IC_1_MASK                  0x20
#define R4_DAC_OUT_POL_IC_1_SHIFT                 5

/* DacMutesRegister (IC 1) */
#define R5_DAC_MUTE0_IC_1                         0x0    /* 0b	[0] */
#define R5_DAC_MUTE1_IC_1                         0x0    /* 0b	[1] */
#define R5_DAC_MUTE2_IC_1                         0x0    /* 0b	[2] */
#define R5_DAC_MUTE3_IC_1                         0x0    /* 0b	[3] */
#define R5_DAC_MUTE4_IC_1                         0x0    /* 0b	[4] */
#define R5_DAC_MUTE5_IC_1                         0x0    /* 0b	[5] */
#define R5_DAC_MUTE6_IC_1                         0x0    /* 0b	[6] */
#define R5_DAC_MUTE7_IC_1                         0x0    /* 0b	[7] */
#define R5_DAC_MUTE0_IC_1_MASK                    0x1
#define R5_DAC_MUTE0_IC_1_SHIFT                   0
#define R5_DAC_MUTE1_IC_1_MASK                    0x2
#define R5_DAC_MUTE1_IC_1_SHIFT                   1
#define R5_DAC_MUTE2_IC_1_MASK                    0x4
#define R5_DAC_MUTE2_IC_1_SHIFT                   2
#define R5_DAC_MUTE3_IC_1_MASK                    0x8
#define R5_DAC_MUTE3_IC_1_SHIFT                   3
#define R5_DAC_MUTE4_IC_1_MASK                    0x10
#define R5_DAC_MUTE4_IC_1_SHIFT                   4
#define R5_DAC_MUTE5_IC_1_MASK                    0x20
#define R5_DAC_MUTE5_IC_1_SHIFT                   5
#define R5_DAC_MUTE6_IC_1_MASK                    0x40
#define R5_DAC_MUTE6_IC_1_SHIFT                   6
#define R5_DAC_MUTE7_IC_1_MASK                    0x80
#define R5_DAC_MUTE7_IC_1_SHIFT                   7

/* DacVolumeRegistes0 (IC 1) */
#define R6_DAC_VOL_1L_IC_1                        0x00   /* 00000000b	[7:0] */
#define R6_DAC_VOL_1L_IC_1_MASK                   0xFF
#define R6_DAC_VOL_1L_IC_1_SHIFT                  0

/* DacVolumeRegistes1 (IC 1) */
#define R7_DAC_VOL_1R_IC_1                        0x00   /* 00000000b	[7:0] */
#define R7_DAC_VOL_1R_IC_1_MASK                   0xFF
#define R7_DAC_VOL_1R_IC_1_SHIFT                  0

/* DacVolumeRegistes2 (IC 1) */
#define R8_DAC_VOL_2L_IC_1                        0x00   /* 00000000b	[7:0] */
#define R8_DAC_VOL_2L_IC_1_MASK                   0xFF
#define R8_DAC_VOL_2L_IC_1_SHIFT                  0

/* DacVolumeRegistes3 (IC 1) */
#define R9_DAC_VOL_2R_IC_1                        0x00   /* 00000000b	[7:0] */
#define R9_DAC_VOL_2R_IC_1_MASK                   0xFF
#define R9_DAC_VOL_2R_IC_1_SHIFT                  0

/* DacVolumeRegistes4 (IC 1) */
#define R10_DAC_VOL_3L_IC_1                       0x00   /* 00000000b	[7:0] */
#define R10_DAC_VOL_3L_IC_1_MASK                  0xFF
#define R10_DAC_VOL_3L_IC_1_SHIFT                 0

/* DacVolumeRegistes5 (IC 1) */
#define R11_DAC_VOL_3R_IC_1                       0x00   /* 00000000b	[7:0] */
#define R11_DAC_VOL_3R_IC_1_MASK                  0xFF
#define R11_DAC_VOL_3R_IC_1_SHIFT                 0

/* DacVolumeRegistes6 (IC 1) */
#define R12_DAC_VOL_4L_IC_1                       0x00   /* 00000000b	[7:0] */
#define R12_DAC_VOL_4L_IC_1_MASK                  0xFF
#define R12_DAC_VOL_4L_IC_1_SHIFT                 0

/* DacVolumeRegistes7 (IC 1) */
#define R13_DAC_VOL_4R_IC_1                       0x00   /* 00000000b	[7:0] */
#define R13_DAC_VOL_4R_IC_1_MASK                  0xFF
#define R13_DAC_VOL_4R_IC_1_SHIFT                 0

/* AdcCtrl0Register (IC 1) */
#define R14_ADC_PD_IC_1                           0x0    /* 0b	[0] */
#define R14_ADC_HIGHPASS_IC_1                     0x0    /* 0b	[1] */
#define R14_ADC_1L_MUTE_IC_1                      0x0    /* 0b	[2] */
#define R14_ADC_1R_MUTE_IC_1                      0x0    /* 0b	[3] */
#define R14_ADC_2L_MUTE_IC_1                      0x0    /* 0b	[4] */
#define R14_ADC_2R_MUTE_IC_1                      0x0    /* 0b	[5] */
#define R14_SAMPLE_RATE_IC_1                      0x0    /* 00b	[7:6] */
#define R14_ADC_PD_IC_1_MASK                      0x1
#define R14_ADC_PD_IC_1_SHIFT                     0
#define R14_ADC_HIGHPASS_IC_1_MASK                0x2
#define R14_ADC_HIGHPASS_IC_1_SHIFT               1
#define R14_ADC_1L_MUTE_IC_1_MASK                 0x4
#define R14_ADC_1L_MUTE_IC_1_SHIFT                2
#define R14_ADC_1R_MUTE_IC_1_MASK                 0x8
#define R14_ADC_1R_MUTE_IC_1_SHIFT                3
#define R14_ADC_2L_MUTE_IC_1_MASK                 0x10
#define R14_ADC_2L_MUTE_IC_1_SHIFT                4
#define R14_ADC_2R_MUTE_IC_1_MASK                 0x20
#define R14_ADC_2R_MUTE_IC_1_SHIFT                5
#define R14_SAMPLE_RATE_IC_1_MASK                 0xC0
#define R14_SAMPLE_RATE_IC_1_SHIFT                6

/* AdcCtrl1Register (IC 1) */
#define R15_WORD_WIDTH_IC_1                       0x0    /* 00b	[1:0] */
#define R15_SDATA_DELAY_IC_1                      0x0    /* 000b	[4:2] */
#define R15_SERIAL_FORMAT_IC_1                    0x0    /* 00b	[6:5] */
#define R15_WORD_WIDTH_IC_1_MASK                  0x3
#define R15_WORD_WIDTH_IC_1_SHIFT                 0
#define R15_SDATA_DELAY_IC_1_MASK                 0x1C
#define R15_SDATA_DELAY_IC_1_SHIFT                2
#define R15_SERIAL_FORMAT_IC_1_MASK               0x60
#define R15_SERIAL_FORMAT_IC_1_SHIFT              5

/* AdcCtrl2Register (IC 1) */
#define R16_LRCLK_FORMAT_IC_1                     0x0    /* 0b	[0] */
#define R16_BCLK_POL_IC_1                         0x0    /* 0b	[1] */
#define R16_LRCLK_POL_IC_1                        0x0    /* 0b	[2] */
#define R16_LRCLK_MASTER_IC_1                     0x0    /* 0b	[3] */
#define R16_BCLK_PFRAME_IC_1                      0x0    /* 00b	[5:4] */
#define R16_BCLK_MASTER_IC_1                      0x0    /* 0b	[6] */
#define R16_BCLK_SOURCE_IC_1                      0x0    /* 0b	[7] */
#define R16_LRCLK_FORMAT_IC_1_MASK                0x1
#define R16_LRCLK_FORMAT_IC_1_SHIFT               0
#define R16_BCLK_POL_IC_1_MASK                    0x2
#define R16_BCLK_POL_IC_1_SHIFT                   1
#define R16_LRCLK_POL_IC_1_MASK                   0x4
#define R16_LRCLK_POL_IC_1_SHIFT                  2
#define R16_LRCLK_MASTER_IC_1_MASK                0x8
#define R16_LRCLK_MASTER_IC_1_SHIFT               3
#define R16_BCLK_PFRAME_IC_1_MASK                 0x30
#define R16_BCLK_PFRAME_IC_1_SHIFT                4
#define R16_BCLK_MASTER_IC_1_MASK                 0x40
#define R16_BCLK_MASTER_IC_1_SHIFT                6
#define R16_BCLK_SOURCE_IC_1_MASK                 0x80
#define R16_BCLK_SOURCE_IC_1_SHIFT                7

#endif
