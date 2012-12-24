/*++ 
 * Copyright (c) 2011 WonderMedia Technologies, Inc.
 *
 * This program is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 2 of the License, or 
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * WonderMedia Technologies, Inc.
 * 10F, 529, Chung-Cheng Road, Hsin-Tien, Taipei 231, R.O.C
--*/
#ifndef GE_IOCTL_H
#define GE_IOCTL_H
#ifndef __POST__
#ifndef __KERNEL__
#include <sys/ioctl.h>
#include <linux/ioctl.h>
#endif /* __KERNEL__ */
#define GEIO_MAGIC		0x69
#define GEIO_RESERVED0		_IO(GEIO_MAGIC, 0)	/* VQ_POLL */
#define GEIO_RESERVED1		_IO(GEIO_MAGIC, 1)	/* VQ_UPDATE */
#define GEIO_RESERVED2		_IO(GEIO_MAGIC, 2)	/* VQ_SYNC */
#define GEIO_ROTATE		_IOW(GEIO_MAGIC, 3, void *)
#define GEIO_RESERVED3		_IO(GEIO_MAGIC, 4)
#define GEIOGET_CHIP_ID		_IOR(GEIO_MAGIC, 5, unsigned int)
#define GEIOSET_AMX_EN		_IO(GEIO_MAGIC, 6)
#define GEIO_RESERVED4		_IO(GEIO_MAGIC, 7)	/* AMX_HOLD */
#define GEIO_ALPHA_BLEND	_IO(GEIO_MAGIC, 8)
#define GEIOSET_OSD		_IO(GEIO_MAGIC, 9)
#define GEIOSET_COLORKEY	_IO(GEIO_MAGIC, 10)
#define GEIO_RESERVED6		_IO(GEIO_MAGIC, 11)	/* CLEAR_OSD */
#define GEIO_RESERVED7		_IO(GEIO_MAGIC, 12)	/* SHOW_OSD */
#define GEIO_WAIT_SYNC		_IO(GEIO_MAGIC, 13)
#define GEIO_RESERVED8		_IO(GEIO_MAGIC, 14)	/* RESET_OSD */
#define GEIO_LOCK		_IO(GEIO_MAGIC, 15)
#define GEIO_STOP_LOGO		_IO(GEIO_MAGIC, 18)
#define GEIO_ALLOW_PAN_DISPLAY	_IO(GEIO_MAGIC, 19)
#endif /* __POST__ */
#endif /* GE_IOCTL_H */
