/*
 * File:           C:\Users\oleg.tetushkin\Documents\Streamer_ADAU1452_AD1934\ПО\48ad\Streamer_AD1934_48_IC_1.h
 *
 * Created:        Wednesday, February 16, 2022 4:29:40 PM
 * Description:    Streamer_AD1934_48:IC 1 program data.
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
#ifndef __STREAMER_AD1934_48_IC_1_H__
#define __STREAMER_AD1934_48_IC_1_H__

#include "SigmaStudioFW.h"
#include "Streamer_AD1934_48_IC_1_REG.h"

#define DEVICE_ARCHITECTURE_IC_1                  "AD193x"
#define DEVICE_ADDR_IC_1                          0x8


/* Register Default - IC 1.DacCtrl2Register */
ADI_REG_TYPE R0_DACCTRL2REGISTER_IC_1_Default[REG_DACCTRL2REGISTER_IC_1_BYTE] = {
0x41
};

/* Register Default - IC 1.HWConfiguration.PllCtrl0Register */
ADI_REG_TYPE R1_PLLCTRL0REGISTER_IC_1_Default[REG_PLLCTRL0REGISTER_IC_1_BYTE] = {
0x98
};

/* Register Default - IC 1.HWConfiguration.PllCtrl1Register */
ADI_REG_TYPE R2_PLLCTRL1REGISTER_IC_1_Default[REG_PLLCTRL1REGISTER_IC_1_BYTE] = {
0x76
};

/* Register Default - IC 1.HWConfiguration.DacCtrl0Register */
ADI_REG_TYPE R3_DACCTRL0REGISTER_IC_1_Default[REG_DACCTRL0REGISTER_IC_1_BYTE] = {
0x01
};

/* Register Default - IC 1.HWConfiguration.DacCtrl1Register */
ADI_REG_TYPE R4_DACCTRL1REGISTER_IC_1_Default[REG_DACCTRL1REGISTER_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacCtrl2Register */
ADI_REG_TYPE R5_DACCTRL2REGISTER_IC_1_Default[REG_DACCTRL2REGISTER_IC_1_BYTE] = {
0x41
};

/* Register Default - IC 1.HWConfiguration.DacMutesRegister */
ADI_REG_TYPE R6_DACMUTESREGISTER_IC_1_Default[REG_DACMUTESREGISTER_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacVolumeRegistes0 */
ADI_REG_TYPE R7_DACVOLUMEREGISTES0_IC_1_Default[REG_DACVOLUMEREGISTES0_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacVolumeRegistes1 */
ADI_REG_TYPE R8_DACVOLUMEREGISTES1_IC_1_Default[REG_DACVOLUMEREGISTES1_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacVolumeRegistes2 */
ADI_REG_TYPE R9_DACVOLUMEREGISTES2_IC_1_Default[REG_DACVOLUMEREGISTES2_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacVolumeRegistes3 */
ADI_REG_TYPE R10_DACVOLUMEREGISTES3_IC_1_Default[REG_DACVOLUMEREGISTES3_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacVolumeRegistes4 */
ADI_REG_TYPE R11_DACVOLUMEREGISTES4_IC_1_Default[REG_DACVOLUMEREGISTES4_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacVolumeRegistes5 */
ADI_REG_TYPE R12_DACVOLUMEREGISTES5_IC_1_Default[REG_DACVOLUMEREGISTES5_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacVolumeRegistes6 */
ADI_REG_TYPE R13_DACVOLUMEREGISTES6_IC_1_Default[REG_DACVOLUMEREGISTES6_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.DacVolumeRegistes7 */
ADI_REG_TYPE R14_DACVOLUMEREGISTES7_IC_1_Default[REG_DACVOLUMEREGISTES7_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.AdcCtrl0Register */
ADI_REG_TYPE R15_ADCCTRL0REGISTER_IC_1_Default[REG_ADCCTRL0REGISTER_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.AdcCtrl1Register */
ADI_REG_TYPE R16_ADCCTRL1REGISTER_IC_1_Default[REG_ADCCTRL1REGISTER_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.HWConfiguration.AdcCtrl2Register */
ADI_REG_TYPE R17_ADCCTRL2REGISTER_IC_1_Default[REG_ADCCTRL2REGISTER_IC_1_BYTE] = {
0x00
};

/* Register Default - IC 1.DacCtrl2Register */
ADI_REG_TYPE R18_DACCTRL2REGISTER_IC_1_Default[REG_DACCTRL2REGISTER_IC_1_BYTE] = {
0x40
};


/*
 * Default Download
 */
#define DEFAULT_DOWNLOAD_SIZE_IC_1 19

void default_download_IC_1() {
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACCTRL2REGISTER_IC_1_ADDR, REG_DACCTRL2REGISTER_IC_1_BYTE, R0_DACCTRL2REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_PLLCTRL0REGISTER_IC_1_ADDR, REG_PLLCTRL0REGISTER_IC_1_BYTE, R1_PLLCTRL0REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_PLLCTRL1REGISTER_IC_1_ADDR, REG_PLLCTRL1REGISTER_IC_1_BYTE, R2_PLLCTRL1REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACCTRL0REGISTER_IC_1_ADDR, REG_DACCTRL0REGISTER_IC_1_BYTE, R3_DACCTRL0REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACCTRL1REGISTER_IC_1_ADDR, REG_DACCTRL1REGISTER_IC_1_BYTE, R4_DACCTRL1REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACCTRL2REGISTER_IC_1_ADDR, REG_DACCTRL2REGISTER_IC_1_BYTE, R5_DACCTRL2REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACMUTESREGISTER_IC_1_ADDR, REG_DACMUTESREGISTER_IC_1_BYTE, R6_DACMUTESREGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACVOLUMEREGISTES0_IC_1_ADDR, REG_DACVOLUMEREGISTES0_IC_1_BYTE, R7_DACVOLUMEREGISTES0_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACVOLUMEREGISTES1_IC_1_ADDR, REG_DACVOLUMEREGISTES1_IC_1_BYTE, R8_DACVOLUMEREGISTES1_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACVOLUMEREGISTES2_IC_1_ADDR, REG_DACVOLUMEREGISTES2_IC_1_BYTE, R9_DACVOLUMEREGISTES2_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACVOLUMEREGISTES3_IC_1_ADDR, REG_DACVOLUMEREGISTES3_IC_1_BYTE, R10_DACVOLUMEREGISTES3_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACVOLUMEREGISTES4_IC_1_ADDR, REG_DACVOLUMEREGISTES4_IC_1_BYTE, R11_DACVOLUMEREGISTES4_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACVOLUMEREGISTES5_IC_1_ADDR, REG_DACVOLUMEREGISTES5_IC_1_BYTE, R12_DACVOLUMEREGISTES5_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACVOLUMEREGISTES6_IC_1_ADDR, REG_DACVOLUMEREGISTES6_IC_1_BYTE, R13_DACVOLUMEREGISTES6_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACVOLUMEREGISTES7_IC_1_ADDR, REG_DACVOLUMEREGISTES7_IC_1_BYTE, R14_DACVOLUMEREGISTES7_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_ADCCTRL0REGISTER_IC_1_ADDR, REG_ADCCTRL0REGISTER_IC_1_BYTE, R15_ADCCTRL0REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_ADCCTRL1REGISTER_IC_1_ADDR, REG_ADCCTRL1REGISTER_IC_1_BYTE, R16_ADCCTRL1REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_ADCCTRL2REGISTER_IC_1_ADDR, REG_ADCCTRL2REGISTER_IC_1_BYTE, R17_ADCCTRL2REGISTER_IC_1_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_1, REG_DACCTRL2REGISTER_IC_1_ADDR, REG_DACCTRL2REGISTER_IC_1_BYTE, R18_DACCTRL2REGISTER_IC_1_Default );
}

#endif
