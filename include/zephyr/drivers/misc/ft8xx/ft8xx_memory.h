/*
 * Copyright (c) 2020 Hubert Miś
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief FT8XX memory map
 */

#ifndef ZEPHYR_DRIVERS_MISC_FT8XX_FT8XX_MEMORY_H_
#define ZEPHYR_DRIVERS_MISC_FT8XX_FT8XX_MEMORY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>


/**
 * @brief FT8xx memory addresses
 * @defgroup ft8xx_memory FT8xx memory map
 * @ingroup ft8xx_interface
 * @{
 */

/** Main parts of FT81X memory map */
enum ft800_memory_map_t {
	FT800_RAM_G         = 0x000000,
	FT800_RAM_G_END		= 0x03FFFF,
	FT800_ROM_CHIPID    = 0x0C0000,
	FT800_ROM_FONT      = 0x0BB23C,
	FT800_ROM_FONT_ADDR = 0x0FFFFC,
	FT800_RAM_DL        = 0x100000,
	FT800_RAM_PAL       = 0x102000,
	FT800_REG           = 0x102400,
	FT800_RAM_CMD       = 0x108000
};

/** Main parts of ft81x memory map */
enum FT81x_memory_map_t {
	FT81x_RAM_G         = 0x000000,
	FT81X_RAM_G_END     = 0x0FFFFF,	
	FT81x_ROM_CHIPID    = 0x0C0000,	
	FT81x_ROM_FONT      = 0x1E0000,
	FT81x_ROM_FONT_ADDR = 0x2FFFFC,
	FT81x_RAM_DL        = 0x300000,
	FT81x_REG           = 0x302000,
	FT81x_RAM_CMD       = 0x308000
};

/** Main parts of bt81x memory map */
enum BT81x_memory_map_t {
	BT81x_RAM_G         = 0x000000,
	BT81x_RAM_G_END     = 0x0FFFFF,	
	BT81x_ROM_CHIPID    = 0x0C0000,	
	BT81x_ROM_FONT      = 0x1E0000,
	BT81x_ROM_FONT_ADDR = 0x2FFFFC,
	BT81x_RAM_DL        = 0x300000,
	BT81x_REG           = 0x302000,
	BT81x_RAM_CMD       = 0x308000,
	BT81x_FLASH       	= 0x800000,
	BT81x_FLASH_MAX    	= 0x107FFFF
};

/** FT800 register addresses */
enum ft800_register_address_t {
	FT800_REG_ID         = 0x102400,
	FT800_REG_FRAMES     = 0x102404,
	FT800_REG_CLOCK      = 0x102408,
	FT800_REG_FREQUENCY  = 0x10240C,
	FT800_REG_RENDERMODE = 0x102410,
	FT800_REG_SNAPY      = 0x102414,
	FT800_REG_SNAPSHOT   = 0x102418,
	FT800_REG_CPURESET   = 0x10241C,
	FT800_REG_TAP_CRC    = 0x102420,
	FT800_REG_TAP_MASK   = 0x102424,
	FT800_REG_HCYCLE     = 0x102428,
	FT800_REG_HOFFSET    = 0x10242C,
	FT800_REG_HSIZE      = 0x102430,
	FT800_REG_HSYNC0     = 0x102434,
	FT800_REG_HSYNC1     = 0x102438,
	FT800_REG_VCYCLE     = 0x10243C,
	FT800_REG_VOFFSET    = 0x102440,
	FT800_REG_VSIZE      = 0x102444,
	FT800_REG_VSYNC0     = 0x102448,
	FT800_REG_VSYNC1     = 0x10244C,
	FT800_REG_DLSWAP     = 0x102450,
	FT800_REG_ROTATE     = 0x102454,
	FT800_REG_OUTBITS    = 0x102458,
	FT800_REG_DITHER     = 0x10245C,
	FT800_REG_SWIZZLE    = 0x102460,
	FT800_REG_CSPREAD    = 0x102464,
	FT800_REG_PCLK_POL   = 0x102468,
	FT800_REG_PCLK       = 0x10246C,
	FT800_REG_TAG_X      = 0x102470,
	FT800_REG_TAG_Y      = 0x102474,
	FT800_REG_TAG        = 0x102478,
	FT800_REG_VOL_PB     = 0x10247C,
	FT800_REG_VOL_SOUND  = 0x102480,
	FT800_REG_SOUND      = 0x102484,
	FT800_REG_PLAY       = 0x102488,
	FT800_REG_GPIO_DIR   = 0x10248C,
	FT800_REG_GPIO       = 0x102490,

	FT800_REG_INT_FLAGS  = 0x102498,
	FT800_REG_INT_EN     = 0x10249C,
	FT800_REG_INT_MASK   = 0x1024A0,
	FT800_REG_PLAYBACK_START = 0x1024A4,
	FT800_REG_PLAYBACK_LENGTH = 0x1024A8,
	FT800_REG_PLAYBACK_READPTR = 0x1024AC,
	FT800_REG_PLAYBACK_FREQ = 0x1024B0,
	FT800_REG_PLAYBACK_FORMAT = 0x1024B4,
	FT800_REG_PLAYBACK_LOOP = 0x1024B8,
	FT800_REG_PLAYBACK_PLAY = 0x1024BC,
	FT800_REG_PWM_HZ     = 0x1024C0,
	FT800_REG_PWM_DUTY   = 0x1024C4,
	FT800_REG_MACRO_0    = 0x1024C8,
	FT800_REG_MACRO_1    = 0x1024CC,

	FT800_REG_CMD_READ   = 0x1024E4,
	FT800_REG_CMD_WRITE  = 0x1024E8,
	FT800_REG_CMD_DL     = 0x1024EC,
	FT800_REG_TOUCH_MODE = 0x1024F0,
	FT800_REG_TOUCH_ADC_MODE = 0x1024F4,
	FT800_REG_TOUCH_CHARGE = 0x1024F8,
	FT800_REG_TOUCH_SETTLE = 0x1024FC,
	FT800_REG_TOUCH_OVERSAMPLE = 0x102500,
	FT800_REG_TOUCH_RZTHRESH = 0x102504,
	FT800_REG_TOUCH_RAW_XY = 0x102508,
	FT800_REG_TOUCH_RZ   = 0x10250C,
	FT800_REG_TOUCH_SCREEN_XY = 0x102510,
	FT800_REG_TOUCH_TAG_XY = 0x102514,
	FT800_REG_TOUCH_TAG  = 0x102518,
	FT800_REG_TOUCH_TRANSFORM_A = 0x10251C,
	FT800_REG_TOUCH_TRANSFORM_B = 0x102520,
	FT800_REG_TOUCH_TRANSFORM_C = 0x102524,
	FT800_REG_TOUCH_TRANSFORM_D = 0x102528,
	FT800_REG_TOUCH_TRANSFORM_E = 0x10252C,
	FT800_REG_TOUCH_TRANSFORM_F = 0x102530,

	FT800_REG_TOUCH_DIRECT_XY = 0x102574,
	FT800_REG_TOUCH_DIRECT_Z1Z2 = 0x102578,

	// special registers
	FT800_REG_TRACKER    = 0x109000
};

/** ft81x register addresses */
enum FT81x_register_address_t {

	FT81x_REG_ID         = 0x302000,
	FT81x_REG_FRAMES     = 0x302004,
	FT81x_REG_CLOCK      = 0x302008,
	FT81x_REG_FREQUENCY  = 0x30200C,
	FT81x_REG_RENDERMODE = 0x302010,
	FT81x_REG_SNAPY      = 0x302014,
	FT81x_REG_SNAPSHOT   = 0x302018,
	FT81x_REG_SNAPFORMAT = 0x30201C,
	FT81x_REG_CPURESET   = 0x302020,
	FT81x_REG_TAP_CRC    = 0x302024,
	FT81x_REG_TAP_MASK   = 0x302028,
	FT81x_REG_HCYCLE     = 0x30202C,
	FT81x_REG_HOFFSET    = 0x302030,
	FT81x_REG_HSIZE      = 0x302034,
	FT81x_REG_HSYNC0     = 0x302038,
	FT81x_REG_HSYNC1     = 0x30203C,
	FT81x_REG_VCYCLE     = 0x302040,
	FT81x_REG_VOFFSET    = 0x302044,
	FT81x_REG_VSIZE      = 0x302048,
	FT81x_REG_VSYNC0     = 0x30204C,
	FT81x_REG_VSYNC1     = 0x302050,
	FT81x_REG_DLSWAP     = 0x302054,
	FT81x_REG_ROTATE     = 0x302058,
	FT81x_REG_OUTBITS    = 0x30205C,
	FT81x_REG_DITHER     = 0x302060,
	FT81x_REG_SWIZZLE    = 0x302064,
	FT81x_REG_CSPREAD    = 0x302068,
	FT81x_REG_PCLK_POL   = 0x30206C,
	FT81x_REG_PCLK       = 0x302070,
	FT81x_REG_TAG_X      = 0x302074,
	FT81x_REG_TAG_Y      = 0x302078,
	FT81x_REG_TAG        = 0x30207C,
	FT81x_REG_VOL_PB     = 0x302080,
	FT81x_REG_VOL_SOUND  = 0x302084,
	FT81x_REG_SOUND      = 0x302088,
	FT81x_REG_PLAY       = 0x30208C,
	FT81x_REG_GPIO_DIR   = 0x302090,
	FT81x_REG_GPIO       = 0x302094,
	FT81x_REG_GPIOX_DIR  = 0x302098,
	FT81x_REG_GPIOX      = 0x30209C,
	// 0x3020A0h - 0x3020A4 Reserved
	FT81x_REG_INT_FLAGS  = 0x3020A8,
	FT81x_REG_INT_EN     = 0x3020AC,
	FT81x_REG_INT_MASK   = 0x3020B0,
	FT81x_REG_PLAYBACK_START = 0x3020B4,
	FT81x_REG_PLAYBACK_LENGTH = 0x3020B8,
	FT81x_REG_PLAYBACK_READPTR = 0x3020BC,
	FT81x_REG_PLAYBACK_FREQ = 0x3020C0,
	FT81x_REG_PLAYBACK_FORMAT = 0x3020C4,
	FT81x_REG_PLAYBACK_LOOP = 0x3020C8,
	FT81x_REG_PLAYBACK_PLAY = 0x3020CC,
	FT81x_REG_PWM_HZ     = 0x3020D0,
	FT81x_REG_PWM_DUTY   = 0x3020D4,
	FT81x_REG_MACRO_0    = 0x3020D8,
	FT81x_REG_MACRO_1    = 0x3020DC,
	// 0x3020E0h - 0x3020F4 Reserved
	FT81x_REG_CMD_READ   = 0x3020F8,
	FT81x_REG_CMD_WRITE  = 0x3020FC,
	FT81x_REG_CMD_DL     = 0x302100,
	FT81x_REG_TOUCH_MODE = 0x302104,
	FT81x_REG_TOUCH_ADC_MODE = 0x302108,
	FT81x_REG_TOUCH_CHARGE = 0x30210C,
	FT81x_REG_TOUCH_SETTLE = 0x302110,
	FT81x_REG_TOUCH_OVERSAMPLE = 0x302114,
	FT81x_REG_TOUCH_RZTHRESH = 0x302118,
	FT81x_REG_TOUCH_RAW_XY = 0x30211C,
	FT81x_REG_TOUCH_RZ   = 0x302120,
	FT81x_REG_TOUCH_SCREEN_XY = 0x302124,
	FT81x_REG_TOUCH_TAG_XY = 0x302128,
	FT81x_REG_TOUCH_TAG  = 0x30212C,
	FT81x_REG_TOUCH_TAG1_XY = 0x302130,
	FT81x_REG_TOUCH_TAG1 = 0x302134,
	FT81x_REG_TOUCH_TAG2_XY = 0x302138,
	FT81x_REG_TOUCH_TAG2 = 0x30213C,
	FT81x_REG_TOUCH_TAG3_XY = 0x302140,
	FT81x_REG_TOUCH_TAG3 = 0x302144,
	FT81x_REG_TOUCH_TAG4_XY = 0x302148,
	FT81x_REG_TOUCH_TAG4 = 0x30214C,
	FT81x_REG_TOUCH_TRANSFORM_A = 0x302150,
	FT81x_REG_TOUCH_TRANSFORM_B = 0x302154,
	FT81x_REG_TOUCH_TRANSFORM_C = 0x302158,
	FT81x_REG_TOUCH_TRANSFORM_D = 0x30215C,
	FT81x_REG_TOUCH_TRANSFORM_E = 0x302160,
	FT81x_REG_TOUCH_TRANSFORM_F = 0x302164,
	FT81x_REG_TOUCH_CONFIG = 0x302168,
	FT81x_REG_CTOUCH_TOUCH4_X = 0x30216,
	// 0x302170		Reserved
	FT81x_REG_BIST_EN	= 0x302174,
	// 0x302178		Reserved
	// 0x30217C		Reserved
	FT81x_REG_TRIM       = 0x302180,
	FT81x_REG_ANA_COMP	= 0x302184,
	FT81x_REG_SPI_WIDTH  = 0x302180,
	FT81x_REG_TOUCH_DIRECT_XY = 0x30218C,
	FT81x_REG_TOUCH_DIRECT_Z1Z2 = 0x302190,
	// 0x302194- 0x302560	 Reserved
	FT81x_REG_DATESTAMP = 0x302564,
	FT81x_REG_CMDB_SPACE = 0x302574,
	FT81x_REG_CMDB_WRITE = 0x302578,
	
	// special registers
	FT81x_REG_TRACKER    = 0x309000,
	FT81x_REG_TRACKER1   = 0x309004,
	FT81x_REG_TRACKER2   = 0x309008,
	FT81x_REG_TRACKER3   = 0x30900C,
	FT81x_REG_TRACKER4   = 0x309010,
	FT81x_REG_MEDIAFIFO_READ = 0x309014,
	FT81x_REG_MEDIAFIFO_WRITE = 0x309018,
};

/** bt81x register addresses */
enum BT81x_register_address_t {

	BT81x_REG_ID         = 0x302000,
	BT81x_REG_FRAMES     = 0x302004,
	BT81x_REG_CLOCK      = 0x302008,
	BT81x_REG_FREQUENCY  = 0x30200C,
	BT81x_REG_RENDERMODE = 0x302010,
	BT81x_REG_SNAPY      = 0x302014,
	BT81x_REG_SNAPSHOT   = 0x302018,
	BT81x_REG_SNAPFORMAT = 0x30201C,
	BT81x_REG_CPURESET   = 0x302020,
	BT81x_REG_TAP_CRC    = 0x302024,
	BT81x_REG_TAP_MASK   = 0x302028,
	BT81x_REG_HCYCLE     = 0x30202C,
	BT81x_REG_HOFFSET    = 0x302030,
	BT81x_REG_HSIZE      = 0x302034,
	BT81x_REG_HSYNC0     = 0x302038,
	BT81x_REG_HSYNC1     = 0x30203C,
	BT81x_REG_VCYCLE     = 0x302040,
	BT81x_REG_VOFFSET    = 0x302044,
	BT81x_REG_VSIZE      = 0x302048,
	BT81x_REG_VSYNC0     = 0x30204C,
	BT81x_REG_VSYNC1     = 0x302050,
	BT81x_REG_DLSWAP     = 0x302054,
	BT81x_REG_ROTATE     = 0x302058,
	BT81x_REG_OUTBITS    = 0x30205C,
	BT81x_REG_DITHER     = 0x302060,
	BT81x_REG_SWIZZLE    = 0x302064,
	BT81x_REG_CSPREAD    = 0x302068,
	BT81x_REG_PCLK_POL   = 0x30206C,
	BT81x_REG_PCLK       = 0x302070,
	BT81x_REG_TAG_X      = 0x302074,
	BT81x_REG_TAG_Y      = 0x302078,
	BT81x_REG_TAG        = 0x30207C,
	BT81x_REG_VOL_PB     = 0x302080,
	BT81x_REG_VOL_SOUND  = 0x302084,
	BT81x_REG_SOUND      = 0x302088,
	BT81x_REG_PLAY       = 0x30208C,
	BT81x_REG_GPIO_DIR   = 0x302090,
	BT81x_REG_GPIO       = 0x302094,
	BT81x_REG_GPIOX_DIR  = 0x302098,
	BT81x_REG_GPIOX      = 0x30209C,
	// 0x3020A0h - 0x3020A4 Reserved
	BT81x_REG_INT_FLAGS  = 0x3020A8,
	BT81x_REG_INT_EN     = 0x3020AC,
	BT81x_REG_INT_MASK   = 0x3020B0,
	BT81x_REG_PLAYBACK_START = 0x3020B4,
	BT81x_REG_PLAYBACK_LENGTH = 0x3020B8,
	BT81x_REG_PLAYBACK_READPTR = 0x3020BC,
	BT81x_REG_PLAYBACK_FREQ = 0x3020C0,
	BT81x_REG_PLAYBACK_FORMAT = 0x3020C4,
	BT81x_REG_PLAYBACK_LOOP = 0x3020C8,
	BT81x_REG_PLAYBACK_PLAY = 0x3020CC,
	BT81x_REG_PWM_HZ     = 0x3020D0,
	BT81x_REG_PWM_DUTY   = 0x3020D4,
	BT81x_REG_MACRO_0    = 0x3020D8,
	BT81x_REG_MACRO_1    = 0x3020DC,
	// 0x3020E0h - 0x3020F4 Reserved
	BT81x_REG_CMD_READ   = 0x3020F8,
	BT81x_REG_CMD_WRITE  = 0x3020FC,
	BT81x_REG_CMD_DL     = 0x302100,
	BT81x_REG_TOUCH_MODE = 0x302104,
	BT81x_REG_TOUCH_ADC_MODE = 0x302108,
	BT81x_REG_TOUCH_CHARGE = 0x30210C,
	BT81x_REG_TOUCH_SETTLE = 0x302110,
	BT81x_REG_TOUCH_OVERSAMPLE = 0x302114,
	BT81x_REG_TOUCH_RZTHRESH = 0x302118,
	BT81x_REG_TOUCH_RAW_XY = 0x30211C,
	BT81x_REG_TOUCH_RZ   = 0x302120,
	BT81x_REG_TOUCH_SCREEN_XY = 0x302124,
	BT81x_REG_TOUCH_TAG_XY = 0x302128,
	BT81x_REG_TOUCH_TAG  = 0x30212C,
	BT81x_REG_TOUCH_TAG1_XY = 0x302130,
	BT81x_REG_TOUCH_TAG1 = 0x302134,
	BT81x_REG_TOUCH_TAG2_XY = 0x302138,
	BT81x_REG_TOUCH_TAG2 = 0x30213C,
	BT81x_REG_TOUCH_TAG3_XY = 0x302140,
	BT81x_REG_TOUCH_TAG3 = 0x302144,
	BT81x_REG_TOUCH_TAG4_XY = 0x302148,
	BT81x_REG_TOUCH_TAG4 = 0x30214C,
	BT81x_REG_TOUCH_TRANSFORM_A = 0x302150,
	BT81x_REG_TOUCH_TRANSFORM_B = 0x302154,
	BT81x_REG_TOUCH_TRANSFORM_C = 0x302158,
	BT81x_REG_TOUCH_TRANSFORM_D = 0x30215C,
	BT81x_REG_TOUCH_TRANSFORM_E = 0x302160,
	BT81x_REG_TOUCH_TRANSFORM_F = 0x302164,
	BT81x_REG_TOUCH_CONFIG = 0x302168,
	BT81x_REG_CTOUCH_TOUCH4_X = 0x30216,
	BT81x_REG_EHOST_TOUCH_ACK = 0x302170,
	BT81x_REG_BIST_EN	= 0x302174,
	// 0x302178		Reserved
	// 0x30217C		Reserved
	BT81x_REG_TRIM       = 0x302180,
	BT81x_REG_ANA_COMP	= 0x302184,
	BT81x_REG_SPI_WIDTH  = 0x302180,
	BT81x_REG_TOUCH_DIRECT_XY = 0x30218C,
	BT81x_REG_TOUCH_DIRECT_Z1Z2 = 0x302190,
	// 0x302194- 0x302560	 Reserved
	BT81x_REG_DATESTAMP = 0x302564,
	BT81x_REG_CMDB_SPACE = 0x302574,
	BT81x_REG_CMDB_WRITE = 0x302578,
	BT81x_REG_ADAPTIVE_FRAMERATE = 0x30257C,
	BT81x_REG_PLAYBACK_PAUSE = 0x3025EC,
	BT81x_REG_FLASH_STATUS = 0x3025F0,
	
	// special registers
	BT81x_REG_TRACKER    = 0x309000,
	BT81x_REG_TRACKER1   = 0x309004,
	BT81x_REG_TRACKER2   = 0x309008,
	BT81x_REG_TRACKER3   = 0x30900C,
	BT81x_REG_TRACKER4   = 0x309010,
	BT81x_REG_MEDIAFIFO_READ = 0x309014,
	BT81x_REG_MEDIAFIFO_WRITE = 0x309018,
	BT81x_REG_PLAY_CONTROL = 0x30914E,
	BT81x_REG_ANIM_ACTIVE = 0x30902C,
	BT81x_REG_COPRO_PATCH_PTR = 0x309162,
}




struct ft8xx_memory_map_t
{
	uint32_t RAM_G,
	uint32_t RAM_G_END,
	uint32_t ROM_CHIPID,    
	uint32_t ROM_FONT,      
	uint32_t ROM_FONT_ADDR, 
	uint32_t RAM_DL,        
	uint32_t RAM_PAL,      // not present on ft81x 
	uint32_t REG,           
	uint32_t RAM_CMD,        
	uint32_t FLASH,       // external NOR Flash Ram
	uint32_t FLASH_MAX,       // maximum external NOR Flash Ram

}

const static struct ft8xx_memory_map_t ft800_memory_map = 
{
	.RAM_G 				= FT800_RAM_G,
	.RAM_G_END 			= FT800_RAM_G_END,
	.ROM_CHIPID 		= FT800_ROM_CHIPID,    
	.ROM_FONT			= FT800_ROM_FONT,      
	.ROM_FONT_ADDR 		= FT800_ROM_FONT_ADDR, 
	.RAM_DL 			= FT800_RAM_DL,        
	.RAM_PAL 			= FT800_RAM_PAL, 
	.REG 				= FT800_REG,           
	.RAM_CMD 			= FT800_RAM_CMD, 
	.FLASH				= 0, //not present on ft81x 
	.FLASH_MAX			= 0 //not present on ft81x 	
}

const static struct ft8xx_memory_map_t ft81x_memory_map =
{
	.RAM_G 				= FT81X_RAM_G,
	.ROM_CHIPID 		= FT81X_ROM_CHIPID,
	.RAM_G_END 			= FT81X_RAM_G_END,
	.ROM_FONT			= FT81X_ROM_FONT,      
	.ROM_FONT_ADDR 		= FT81X_ROM_FONT_ADDR, 
	.RAM_DL 			= FT81X_RAM_DL,              
	.RAM_PAL 			= 0, // not present on ft81x 
	.REG 				= FT81X_REG,           
	.RAM_CMD 			= FT81X_RAM_CMD,
	.FLASH				= 0, // not present on ft81x
	.FLASH_MAX			= 0 // not present on ft81x 
}

const static struct ft8xx_memory_map_t bt81x_memory_map =
{
	.RAM_G 				= BT81X_RAM_G,
	.ROM_CHIPID 		= BT81X_ROM_CHIPID,
	.RAM_G_END 			= BT81X_RAM_G_END,
	.ROM_FONT			= BT81X_ROM_FONT,      
	.ROM_FONT_ADDR 		= BT81X_ROM_FONT_ADDR, 
	.RAM_DL 			= BT81X_RAM_DL,              
	.RAM_PAL 			= 0 // not present on ft81x 
	.REG 				= BT81X_REG,           
	.RAM_CMD 			= BT81X_RAM_CMD,
	.FLASH				= BT81X_FLASH,
	.FLASH_MAX			= BT81X_FLASH_MAX
}

struct ft8xx_register_address_map_t
{  
	uint32_t REG_ID,
	uint32_t REG_FRAMES,
	uint32_t REG_CLOCK,
	uint32_t REG_FREQUENCY,
	uint32_t REG_RENDERMODE,
	uint32_t REG_SNAPY,
	uint32_t REG_SNAPSHOT,
	uint32_t REG_SNAPFORMAT,
	uint32_t REG_CPURESET,
	uint32_t REG_TAP_CRC,
	uint32_t REG_TAP_MASK,
	uint32_t REG_HCYCLE,
	uint32_t REG_HOFFSET,
	uint32_t REG_HSIZE,
	uint32_t REG_HSYNC0,
	uint32_t REG_HSYNC1,
	uint32_t REG_VCYCLE,
	uint32_t REG_VOFFSET,
	uint32_t REG_VSIZE,
	uint32_t REG_VSYNC0,
	uint32_t REG_VSYNC1,
	uint32_t REG_DLSWAP,
	uint32_t REG_ROTATE,
	uint32_t REG_OUTBITS,
	uint32_t REG_DITHER,
	uint32_t REG_SWIZZLE,
	uint32_t REG_CSPREAD,
	uint32_t REG_PCLK_POL,
	uint32_t REG_PCLK,
	uint32_t REG_TAG_X,
	uint32_t REG_TAG_Y,
	uint32_t REG_TAG,
	uint32_t REG_VOL_PB,
	uint32_t REG_VOL_SOUND,
	uint32_t REG_SOUND,
	uint32_t REG_PLAY,
	uint32_t REG_GPIO_DIR,
	uint32_t REG_GPIO,
	uint32_t REG_GPIOX_DIR,
	uint32_t REG_GPIOX,
	uint32_t REG_INT_FLAGS,
	uint32_t REG_INT_EN,
	uint32_t REG_INT_MASK,
	uint32_t REG_PLAYBACK_START,
	uint32_t REG_PLAYBACK_LENGTH,
	uint32_t REG_PLAYBACK_READPTR,
	uint32_t REG_PLAYBACK_FREQ,
	uint32_t REG_PLAYBACK_FORMAT,
	uint32_t REG_PLAYBACK_LOOP,
	uint32_t REG_PLAYBACK_PLAY,
	uint32_t REG_PWM_HZ,
	uint32_t REG_PWM_DUTY,
	uint32_t REG_MACRO_0,
	uint32_t REG_MACRO_1,
	uint32_t REG_CMD_READ,
	uint32_t REG_CMD_WRITE,
	uint32_t REG_CMD_DL,
	uint32_t REG_TOUCH_MODE,
	uint32_t REG_TOUCH_ADC_MODE,
	uint32_t REG_TOUCH_CHARGE,
	uint32_t REG_TOUCH_SETTLE,
	uint32_t REG_TOUCH_OVERSAMPLE,
	uint32_t REG_TOUCH_RZTHRESH,
	uint32_t REG_TOUCH_RAW_XY,
	uint32_t REG_TOUCH_RZ,
	uint32_t REG_TOUCH_SCREEN_XY,
	uint32_t REG_TOUCH_TAG_XY,
	uint32_t REG_TOUCH_TAG,
	uint32_t REG_TOUCH_TRANSFORM_A,
	uint32_t REG_TOUCH_TRANSFORM_B,
	uint32_t REG_TOUCH_TRANSFORM_C,
	uint32_t REG_TOUCH_TRANSFORM_D,
	uint32_t REG_TOUCH_TRANSFORM_E,
	uint32_t REG_TOUCH_TRANSFORM_F,
	uint32_t REG_TOUCH_CONFIG,
	uint32_t REG_CTOUCH_TOUCH4_X,
	uint32_t REG_EHOST_TOUCH_ACK,
	uint32_t REG_BIST_EN,
	uint32_t REG_TRIM,
	uint32_t REG_ANA_COMP,
	uint32_t REG_SPI_WIDTH,
	uint32_t REG_TOUCH_DIRECT_XY,
	uint32_t REG_TOUCH_DIRECT_Z1Z2,
	uint32_t REG_DATESTAMP,
	uint32_t REG_CMDB_SPACE,
	uint32_t REG_CMDB_WRITE,
	uint32_t REG_ADAPTIVE_FRAMERATE,
	uint32_t REG_PLAYBACK_PAUSE,
	uint32_t REG_FLASH_STATUS,	
	uint32_t REG_TRACKER,
	uint32_t REG_TRACKER1,
	uint32_t REG_TRACKER2,
	uint32_t REG_TRACKER3,
	uint32_t REG_TRACKER4,
	uint32_t REG_MEDIAFIFO_READ,
	uint32_t REG_MEDIAFIFO_WRITE,
	uint32_t REG_PLAY_CONTROL,
	uint32_t REG_ANIM_ACTIVE,
	uint32_t REG_COPRO_PATCH_PTR,	
	     
}

const static struct ft8xx_register_address_map_t ft800_register_address_map
{  
	.REG_ID         			= FT800_REG_ID,
	.REG_FRAMES         		= FT800_REG_FRAMES,
	.REG_CLOCK         			= FT800_REG_CLOCK,
	.REG_FREQUENCY      		= FT800_REG_FREQUENCY,
	.REG_RENDERMODE         	= FT800_REG_RENDERMODE,
	.REG_SNAPY        		 	= FT800_REG_SNAPY,
	.REG_SNAPSHOT				= FT800_REG_SNAPSHOT,
	.REG_SNAPFORMAT				= 0, // not present on ft800	
	.REG_CPURESET				= FT800_REG_CPURESET,
	.REG_TAP_CRC    		    = FT800_REG_TAP_CRC,
	.REG_TAP_MASK				= FT800_REG_TAP_MASK,
	.REG_HCYCLE     		    = FT800_REG_HCYCLE,
	.REG_HOFFSET    		    = FT800_REG_HOFFSET,
	.REG_HSIZE      		   	= FT800_REG_HSIZE,
	.REG_HSYNC0     		    = FT800_REG_HSYNC0,
	.REG_HSYNC1					= FT800_REG_HSYNC1,
	.REG_VCYCLE					= FT800_REG_HCYCLE,
	.REG_VOFFSET				= FT800_REG_VOFFSET,
	.REG_VSIZE					= FT800_REG_VSIZE,
	.REG_VSYNC0					= FT800_REG_VSYNC0,
	.REG_VSYNC1					= FT800_REG_VSYNC1,
	.REG_DLSWAP					= FT800_REG_DLSWAP,
	.REG_ROTATE					= FT800_REG_ROTATE,
	.REG_OUTBITS				= FT800_REG_OUTBITS,
	.REG_DITHER					= FT800_REG_DITHER,
	.REG_SWIZZLE       			= FT800_REG_SWIZZLE,
	.REG_CSPREAD				= FT800_REG_CSPREAD,
	.REG_PCLK_POL  		     	= FT800_REG_PCLK_POL,
	.REG_PCLK					= FT800_REG_PCLK,
	.REG_TAG_X  				= FT800_REG_TAG_X,
	.REG_TAG_Y					= FT800_REG_TAG_Y,
	.REG_TAG            		= FT800_REG_TAG
	.REG_VOL_PB 		        = FT800_REG_VOL_PB,
	.REG_VOL_SOUND      		= FT800_REG_VOL_SOUND,
	.REG_SOUND    		      	= FT800_REG_SOUND,
	.REG_PLAY           		= FT800_REG_PLAY,
	.REG_GPIO_DIR       		= FT800_REG_GPIO_DIR,
	.REG_GPIO         		  	= FT800_REG_GPIO,
	.REG_GPIOX_DIR    		  	= 0, // not present on ft800
	.REG_GPIOX      			= 0, // not present on ft800
	.REG_INT_FLAGS      		= FT800_REG_INT_FLAGS,
	.REG_INT_EN         		= FT800_REG_INT_EN,
	.REG_INT_MASK       		= FT800_REG_INT_MASK,
	.REG_PLAYBACK_START     	= FT800_REG_PLAYBACK_START,
	.REG_PLAYBACK_LENGTH     	= FT800_REG_PLAYBACK_LENGTH,
	.REG_PLAYBACK_READPTR     	= FT800_REG_PLAYBACK_READPTR,
	.REG_PLAYBACK_FREQ     		= FT800_REG_PLAYBACK_FREQ,
	.REG_PLAYBACK_FORMAT     	= FT800_REG_PLAYBACK_FORMAT,
	.REG_PLAYBACK_LOOP     		= FT800_REG_PLAYBACK_LOOP,
	.REG_PLAYBACK_PLAY			= FT800_REG_PLAYBACK_PLAY,
	.REG_PWM_HZ         		= FT800_REG_PWM_HZ,
	.REG_PWM_DUTY       		= FT800_REG_PWM_DUTY,
	.REG_MACRO_0        		= FT800_REG_MACRO_0,
	.REG_MACRO_1				= FT800_REG_MACRO_1,
	.REG_CMD_READ       		= FT800_REG_CMD_READ,
	.REG_CMD_WRITE      		= FT800_REG_CMD_WRITE,
	.REG_CMD_DL         		= FT800_REG_CMD_DL,
	.REG_TOUCH_MODE     		= FT800_REG_TOUCH_MODE,
	.REG_TOUCH_ADC_MODE   		= FT800_REG_TOUCH_ADC_MODE,
	.REG_TOUCH_CHARGE     		= FT800_REG_TOUCH_CHARGE,
	.REG_TOUCH_SETTLE     		= FT800_REG_TOUCH_SETTLE,
	.REG_TOUCH_OVERSAMPLE     	= FT800_REG_TOUCH_OVERSAMPLE,
	.REG_TOUCH_RZTHRESH     	= FT800_REG_TOUCH_RZTHRESH,
	.REG_TOUCH_RAW_XY     		= FT800_REG_TOUCH_RAW_XY,
	.REG_TOUCH_RZ       		= FT800_REG_TOUCH_RZ,
	.REG_TOUCH_SCREEN_XY     	= FT800_REG_TOUCH_SCREEN_XY,
	.REG_TOUCH_TAG_XY     		= FT800_REG_TOUCH_TAG_XY,
	.REG_TOUCH_TAG      		= FT800_REG_TOUCH_TAG,
	.REG_TOUCH_TRANSFORM_A     	= FT800_REG_TOUCH_TRANSFORM_A,
	.REG_TOUCH_TRANSFORM_B     	= FT800_REG_TOUCH_TRANSFORM_B,
	.REG_TOUCH_TRANSFORM_C     	= FT800_REG_TOUCH_TRANSFORM_C,
	.REG_TOUCH_TRANSFORM_D     	= FT800_REG_TOUCH_TRANSFORM_D,
	.REG_TOUCH_TRANSFORM_E     	= FT800_REG_TOUCH_TRANSFORM_E,
	.REG_TOUCH_TRANSFORM_F     	= FT800_REG_TOUCH_TRANSFORM_F,
	.REG_TOUCH_CONFIG    		= 0, // not present on ft800
	.REG_CTOUCH_TOUCH4_X    	= 0, // not present on ft800
	.REG_BIST_EN    			= 0, // not present on ft800
	.REG_TRIM    				= 0, // not present on ft800
	.REG_ANA_COMP     			= 0, // not present on ft800
	.REG_SPI_WIDTH    			= 0, // not present on ft800
	.REG_TOUCH_DIRECT_XY     	= FT800_REG_TOUCH_DIRECT_XY,
	.REG_TOUCH_DIRECT_Z1Z2    	= FT800_REG_TOUCH_DIRECT_Z1Z2,
	.REG_DATESTAMP    			= 0, // not present on ft800
	.REG_CMDB_SPACE     		= 0, // not present on ft800
	.REG_CMDB_WRITE    			= 0, // not present on ft800
	.REG_ADAPTIVE_FRAMERATE		= 0, // not present on ft800
	.REG_PLAYBACK_PAUSE			= 0, // not present on ft800
	.REG_FLASH_STATUS			= 0, // not present on ft800
	.REG_TRACKER        		= FT800_REG_TRACKER,
	.REG_TRACKER1       		= 0, // not present on ft800
	.REG_TRACKER2   			= 0, // not present on ft800
	.REG_TRACKER3   			= 0, // not present on ft800
	.REG_TRACKER4   			= 0, // not present on ft800
	.REG_MEDIAFIFO_READ     	= 0, // not present on ft800
	.REG_MEDIAFIFO_WRITE 		= 0, // not present on ft800
	.REG_PLAY_CONTROL 			= 0, // not present on ft800
	.REG_ANIM_ACTIVE			= 0, // not present on ft800
	.REG_COPRO_PATCH_PTR		= 0, // not present on ft800
	     
}

const static struct ft8xx_register_address_map_t ft81X_register_address_map
{  
	.REG_ID         			= FT81X_REG_ID,
	.REG_FRAMES         		= FT81X_REG_FRAMES,
	.REG_CLOCK         			= FT81X_REG_CLOCK,
	.REG_FREQUENCY      		= FT81X_REG_FREQUENCY,
	.REG_RENDERMODE         	= FT81X_REG_RENDERMODE,
	.REG_SNAPY        		 	= FT81X_REG_SNAPY,
	.REG_SNAPSHOT				= FT81X_REG_SNAPSHOT,
	.REG_SNAPFORMAT				= FT81X_REG_SNAPFORMAT,	
	.REG_CPURESET				= FT81X_REG_CPURESET,
	.REG_TAP_CRC    		    = FT81X_REG_TAP_CRC,
	.REG_TAP_MASK				= FT81X_REG_TAP_MASK,
	.REG_HCYCLE     		    = FT81X_REG_HCYCLE,
	.REG_HOFFSET    		    = FT81X_REG_HOFFSET,
	.REG_HSIZE      		   	= FT81X_REG_HSIZE,
	.REG_HSYNC0     		    = FT81X_REG_HSYNC0,
	.REG_HSYNC1					= FT81X_REG_HSYNC1,
	.REG_VCYCLE					= FT81X_REG_HCYCLE,
	.REG_VOFFSET				= FT81X_REG_VOFFSET,
	.REG_VSIZE					= FT81X_REG_VSIZE,
	.REG_VSYNC0					= FT81X_REG_VSYNC0,
	.REG_VSYNC1					= FT81X_REG_VSYNC1,
	.REG_DLSWAP					= FT81X_REG_DLSWAP,
	.REG_ROTATE					= FT81X_REG_ROTATE,
	.REG_OUTBITS				= FT81X_REG_OUTBITS,
	.REG_DITHER					= FT81X_REG_DITHER,
	.REG_SWIZZLE       			= FT81X_REG_SWIZZLE,
	.REG_CSPREAD				= FT81X_REG_CSPREAD,
	.REG_PCLK_POL  		     	= FT81X_REG_PCLK_POL,
	.REG_PCLK					= FT81X_REG_PCLK,
	.REG_TAG_X  				= FT81X_REG_TAG_X,
	.REG_TAG_Y					= FT81X_REG_TAG_Y,
	.REG_TAG            		= FT81X_REG_TAG
	.REG_VOL_PB 		        = FT81X_REG_VOL_PB,
	.REG_VOL_SOUND      		= FT81X_REG_VOL_SOUND,
	.REG_SOUND    		      	= FT81X_REG_SOUND,
	.REG_PLAY           		= FT81X_REG_PLAY,
	.REG_GPIO_DIR       		= FT81X_REG_GPIO_DIR,
	.REG_GPIO         		  	= FT81X_REG_GPIO,
	.REG_GPIOX_DIR    		  	= FT81x_REG_GPIOX_DIR
	.REG_GPIOX      			= FT81x_REG_GPIOX
	.REG_INT_FLAGS      		= FT81X_REG_INT_FLAGS,
	.REG_INT_EN         		= FT81X_REG_INT_EN,
	.REG_INT_MASK       		= FT81X_REG_INT_MASK,
	.REG_PLAYBACK_START     	= FT81X_REG_PLAYBACK_START,
	.REG_PLAYBACK_LENGTH     	= FT81X_REG_PLAYBACK_LENGTH,
	.REG_PLAYBACK_READPTR     	= FT81X_REG_PLAYBACK_READPTR,
	.REG_PLAYBACK_FREQ     		= FT81X_REG_PLAYBACK_FREQ,
	.REG_PLAYBACK_FORMAT     	= FT81X_REG_PLAYBACK_FORMAT,
	.REG_PLAYBACK_LOOP     		= FT81X_REG_PLAYBACK_LOOP,
	.REG_PLAYBACK_PLAY			= FT81X_REG_PLAYBACK_PLAY,
	.REG_PWM_HZ         		= FT81X_REG_PWM_HZ,
	.REG_PWM_DUTY       		= FT81X_REG_PWM_DUTY,
	.REG_MACRO_0        		= FT81X_REG_MACRO_0,
	.REG_MACRO_1				= FT81X_REG_MACRO_1,
	.REG_CMD_READ       		= FT81X_REG_CMD_READ,
	.REG_CMD_WRITE      		= FT81X_REG_CMD_WRITE,
	.REG_CMD_DL         		= FT81X_REG_CMD_DL,
	.REG_TOUCH_MODE     		= FT81X_REG_TOUCH_MODE,
	.REG_TOUCH_ADC_MODE   		= FT81X_REG_TOUCH_ADC_MODE,
	.REG_TOUCH_CHARGE     		= FT81X_REG_TOUCH_CHARGE,
	.REG_TOUCH_SETTLE     		= FT81X_REG_TOUCH_SETTLE,
	.REG_TOUCH_OVERSAMPLE     	= FT81X_REG_TOUCH_OVERSAMPLE,
	.REG_TOUCH_RZTHRESH     	= FT81X_REG_TOUCH_RZTHRESH,
	.REG_TOUCH_RAW_XY     		= FT81X_REG_TOUCH_RAW_XY,
	.REG_TOUCH_RZ       		= FT81X_REG_TOUCH_RZ,
	.REG_TOUCH_SCREEN_XY     	= FT81X_REG_TOUCH_SCREEN_XY,
	.REG_TOUCH_TAG_XY     		= FT81X_REG_TOUCH_TAG_XY,
	.REG_TOUCH_TAG      		= FT81X_REG_TOUCH_TAG,
	.REG_TOUCH_TRANSFORM_A     	= FT81X_REG_TOUCH_TRANSFORM_A,
	.REG_TOUCH_TRANSFORM_B     	= FT81X_REG_TOUCH_TRANSFORM_B,
	.REG_TOUCH_TRANSFORM_C     	= FT81X_REG_TOUCH_TRANSFORM_C,
	.REG_TOUCH_TRANSFORM_D     	= FT81X_REG_TOUCH_TRANSFORM_D,
	.REG_TOUCH_TRANSFORM_E     	= FT81X_REG_TOUCH_TRANSFORM_E,
	.REG_TOUCH_TRANSFORM_F     	= FT81X_REG_TOUCH_TRANSFORM_F,
	.REG_TOUCH_CONFIG    		= FT81x_REG_TOUCH_CONFIG,
	.REG_CTOUCH_TOUCH4_X    	= FT81x_REG_CTOUCH_TOUCH4_X,
	.REG_EHOST_TOUCH_ACK		= 0, // not present on ft81x
	.REG_BIST_EN    			= FT81x_REG_BIST_EN,
	.REG_TRIM    				= FT81x_REG_TRIM,
	.REG_ANA_COMP     			= FT81x_REG_ANA_COMP,
	.REG_SPI_WIDTH    			= FT81x_REG_SPI_WIDTH,
	.REG_TOUCH_DIRECT_XY     	= FT81X_REG_TOUCH_DIRECT_XY,
	.REG_TOUCH_DIRECT_Z1Z2    	= FT81X_REG_TOUCH_DIRECT_Z1Z2,
	.REG_DATESTAMP    			= FT81x_REG_DATESTAMP,
	.REG_CMDB_SPACE     		= FT81x_REG_CMDB_SPACE,
	.REG_CMDB_WRITE    			= FT81x_REG_CMDB_WRITE,
	.REG_ADAPTIVE_FRAMERATE		= 0, // not present on ft81x
	.REG_PLAYBACK_PAUSE			= 0, // not present on ft81x
	.REG_FLASH_STATUS			= 0, // not present on ft81x	
	.REG_TRACKER        		= FT81X_REG_TRACKER,
	.REG_TRACKER1       		= FT81x_REG_TRACKER1,
	.REG_TRACKER2   			= FT81x_REG_TRACKER2,
	.REG_TRACKER3   			= FT81x_REG_TRACKER3,
	.REG_TRACKER4   			= FT81x_REG_TRACKER4,
	.REG_MEDIAFIFO_READ     	= FT81x_REG_MEDIAFIFO_READ,
	.REG_MEDIAFIFO_WRITE 		= FT81x_REG_MEDIAFIFO_WRITE,
	.REG_PLAY_CONTROL 			= 0, // not present on ft81x
	.REG_ANIM_ACTIVE			= 0, // not present on ft81x
	.REG_COPRO_PATCH_PTR		= 0, // not present on ft81x	
}

const static struct ft8xx_register_address_map_t bt81X_register_address_map
{  
	.REG_ID         			= BT81X_REG_ID,
	.REG_FRAMES         		= BT81X_REG_FRAMES,
	.REG_CLOCK         			= BT81X_REG_CLOCK,
	.REG_FREQUENCY      		= BT81X_REG_FREQUENCY,
	.REG_RENDERMODE         	= BT81X_REG_RENDERMODE,
	.REG_SNAPY        		 	= BT81X_REG_SNAPY,
	.REG_SNAPSHOT				= BT81X_REG_SNAPSHOT,
	.REG_SNAPFORMAT				= BT81X_REG_SNAPFORMAT,	
	.REG_CPURESET				= BT81X_REG_CPURESET,
	.REG_TAP_CRC    		    = BT81X_REG_TAP_CRC,
	.REG_TAP_MASK				= BT81X_REG_TAP_MASK,
	.REG_HCYCLE     		    = BT81X_REG_HCYCLE,
	.REG_HOFFSET    		    = BT81X_REG_HOFFSET,
	.REG_HSIZE      		   	= BT81X_REG_HSIZE,
	.REG_HSYNC0     		    = BT81X_REG_HSYNC0,
	.REG_HSYNC1					= BT81X_REG_HSYNC1,
	.REG_VCYCLE					= BT81X_REG_HCYCLE,
	.REG_VOFFSET				= BT81X_REG_VOFFSET,
	.REG_VSIZE					= BT81X_REG_VSIZE,
	.REG_VSYNC0					= BT81X_REG_VSYNC0,
	.REG_VSYNC1					= BT81X_REG_VSYNC1,
	.REG_DLSWAP					= BT81X_REG_DLSWAP,
	.REG_ROTATE					= BT81X_REG_ROTATE,
	.REG_OUTBITS				= BT81X_REG_OUTBITS,
	.REG_DITHER					= BT81X_REG_DITHER,
	.REG_SWIZZLE       			= BT81X_REG_SWIZZLE,
	.REG_CSPREAD				= BT81X_REG_CSPREAD,
	.REG_PCLK_POL  		     	= BT81X_REG_PCLK_POL,
	.REG_PCLK					= BT81X_REG_PCLK,
	.REG_TAG_X  				= BT81X_REG_TAG_X,
	.REG_TAG_Y					= BT81X_REG_TAG_Y,
	.REG_TAG            		= BT81X_REG_TAG
	.REG_VOL_PB 		        = BT81X_REG_VOL_PB,
	.REG_VOL_SOUND      		= BT81X_REG_VOL_SOUND,
	.REG_SOUND    		      	= BT81X_REG_SOUND,
	.REG_PLAY           		= BT81X_REG_PLAY,
	.REG_GPIO_DIR       		= BT81X_REG_GPIO_DIR,
	.REG_GPIO         		  	= BT81X_REG_GPIO,
	.REG_GPIOX_DIR    		  	= BT81X_REG_GPIOX_DIR
	.REG_GPIOX      			= BT81X_REG_GPIOX
	.REG_INT_FLAGS      		= BT81X_REG_INT_FLAGS,
	.REG_INT_EN         		= BT81X_REG_INT_EN,
	.REG_INT_MASK       		= BT81X_REG_INT_MASK,
	.REG_PLAYBACK_START     	= BT81X_REG_PLAYBACK_START,
	.REG_PLAYBACK_LENGTH     	= BT81X_REG_PLAYBACK_LENGTH,
	.REG_PLAYBACK_READPTR     	= BT81X_REG_PLAYBACK_READPTR,
	.REG_PLAYBACK_FREQ     		= BT81X_REG_PLAYBACK_FREQ,
	.REG_PLAYBACK_FORMAT     	= BT81X_REG_PLAYBACK_FORMAT,
	.REG_PLAYBACK_LOOP     		= BT81X_REG_PLAYBACK_LOOP,
	.REG_PLAYBACK_PLAY			= BT81X_REG_PLAYBACK_PLAY,
	.REG_PWM_HZ         		= BT81X_REG_PWM_HZ,
	.REG_PWM_DUTY       		= BT81X_REG_PWM_DUTY,
	.REG_MACRO_0        		= BT81X_REG_MACRO_0,
	.REG_MACRO_1				= BT81X_REG_MACRO_1,
	.REG_CMD_READ       		= BT81X_REG_CMD_READ,
	.REG_CMD_WRITE      		= BT81X_REG_CMD_WRITE,
	.REG_CMD_DL         		= BT81X_REG_CMD_DL,
	.REG_TOUCH_MODE     		= BT81X_REG_TOUCH_MODE,
	.REG_TOUCH_ADC_MODE   		= BT81X_REG_TOUCH_ADC_MODE,
	.REG_TOUCH_CHARGE     		= BT81X_REG_TOUCH_CHARGE,
	.REG_TOUCH_SETTLE     		= BT81X_REG_TOUCH_SETTLE,
	.REG_TOUCH_OVERSAMPLE     	= BT81X_REG_TOUCH_OVERSAMPLE,
	.REG_TOUCH_RZTHRESH     	= BT81X_REG_TOUCH_RZTHRESH,
	.REG_TOUCH_RAW_XY     		= BT81X_REG_TOUCH_RAW_XY,
	.REG_TOUCH_RZ       		= BT81X_REG_TOUCH_RZ,
	.REG_TOUCH_SCREEN_XY     	= BT81X_REG_TOUCH_SCREEN_XY,
	.REG_TOUCH_TAG_XY     		= BT81X_REG_TOUCH_TAG_XY,
	.REG_TOUCH_TAG      		= BT81X_REG_TOUCH_TAG,
	.REG_TOUCH_TRANSFORM_A     	= BT81X_REG_TOUCH_TRANSFORM_A,
	.REG_TOUCH_TRANSFORM_B     	= BT81X_REG_TOUCH_TRANSFORM_B,
	.REG_TOUCH_TRANSFORM_C     	= BT81X_REG_TOUCH_TRANSFORM_C,
	.REG_TOUCH_TRANSFORM_D     	= BT81X_REG_TOUCH_TRANSFORM_D,
	.REG_TOUCH_TRANSFORM_E     	= BT81X_REG_TOUCH_TRANSFORM_E,
	.REG_TOUCH_TRANSFORM_F     	= BT81X_REG_TOUCH_TRANSFORM_F,
	.REG_TOUCH_CONFIG    		= BT81X_REG_TOUCH_CONFIG,
	.REG_CTOUCH_TOUCH4_X    	= BT81X_REG_CTOUCH_TOUCH4_X,
	.REG_EHOST_TOUCH_ACK		= BT81X_REG_EHOST_TOUCH_ACK,
	.REG_BIST_EN    			= BT81X_REG_BIST_EN,
	.REG_TRIM    				= BT81X_REG_TRIM,
	.REG_ANA_COMP     			= BT81X_REG_ANA_COMP,
	.REG_SPI_WIDTH    			= BT81X_REG_SPI_WIDTH,
	.REG_TOUCH_DIRECT_XY     	= BT81X_REG_TOUCH_DIRECT_XY,
	.REG_TOUCH_DIRECT_Z1Z2    	= BT81X_REG_TOUCH_DIRECT_Z1Z2,
	.REG_DATESTAMP    			= BT81X_REG_DATESTAMP,
	.REG_CMDB_SPACE     		= BT81X_REG_CMDB_SPACE,
	.REG_CMDB_WRITE    			= BT81X_REG_CMDB_WRITE,
	.REG_ADAPTIVE_FRAMERATE		= BT81X_REG_ADAPTIVE_FRAMERATE,
	.REG_PLAYBACK_PAUSE			= BT81X_REG_PLAYBACK_PAUSE,
	.REG_FLASH_STATUS			= BT81X_REG_FLASH_STATUS,	
	.REG_TRACKER        		= BT81X_REG_TRACKER,
	.REG_TRACKER1       		= BT81X_REG_TRACKER1,
	.REG_TRACKER2   			= BT81X_REG_TRACKER2,
	.REG_TRACKER3   			= BT81X_REG_TRACKER3,
	.REG_TRACKER4   			= BT81X_REG_TRACKER4,
	.REG_MEDIAFIFO_READ     	= BT81X_REG_MEDIAFIFO_READ,
	.REG_MEDIAFIFO_WRITE 		= BT81X_REG_MEDIAFIFO_WRITE,
	.REG_PLAY_CONTROL 			= BT81X_REG_PLAY_CONTROL,
	.REG_ANIM_ACTIVE			= BT81X_REG_ANIM_ACTIVE,
	.REG_COPRO_PATCH_PTR		= BT81X_REG_COPRO_PATCH_PTR,	
}




/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_DRIVERS_MISC_FT8XX_FT8XX_MEMORY_H_ */
