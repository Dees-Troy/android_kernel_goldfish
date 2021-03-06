/* arch/x86/include/asm/mach-goldfish/io.h
**
** Copyright (C) 2007 Google, Inc.
** Copyright (C) 2011 Intel, Corp.
**
** This software is licensed under the terms of the GNU General Public
** License version 2, as published by the Free Software Foundation, and
** may be copied, distributed, and modified under those terms.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
*/

#ifndef __ASM_X86_ARCH_IO_H
#define __ASM_X86_ARCH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

#define __io(a)			((void __iomem *)(a))
#define __mem_pci(a)		(a)

#endif
