/*
 * Author: Jason
 * Date: 2012.08.31
 * Description: Create for dev-vpp.c call i2c_api_register_write and 
 *              register_i2c_register_read.
 */
#include "../../video/wmt/vpp.h"

void i2c_api_register_write(u8 slaveAddr, int addrLen, int index, u8 data);
int i2c_api_register_read(u8 slaveAddr, int addrLen, int index);

