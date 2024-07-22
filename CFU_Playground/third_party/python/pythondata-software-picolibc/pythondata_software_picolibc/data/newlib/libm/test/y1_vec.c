/*
 * Copyright (c) 1994 Cygnus Support.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * and/or other materials related to such
 * distribution and use acknowledge that the software was developed
 * at Cygnus Support, Inc.  Cygnus Support, Inc. may not be used to
 * endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
#include "test.h"
 one_line_type y1_vec[] = {
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff33333, 0x33333333},	/* nan=f(-1.2)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff30a3d, 0x70a3d70a},	/* nan=f(-1.19)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2e147, 0xae147ae1},	/* nan=f(-1.18)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2b851, 0xeb851eb8},	/* nan=f(-1.17)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff28f5c, 0x28f5c28f},	/* nan=f(-1.16)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff26666, 0x66666666},	/* nan=f(-1.15)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff23d70, 0xa3d70a3d},	/* nan=f(-1.14)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2147a, 0xe147ae14},	/* nan=f(-1.13)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff1eb85, 0x1eb851eb},	/* nan=f(-1.12)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff1c28f, 0x5c28f5c2},	/* nan=f(-1.11)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff19999, 0x99999999},	/* nan=f(-1.1)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff170a3, 0xd70a3d70},	/* nan=f(-1.09)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff147ae, 0x147ae147},	/* nan=f(-1.08)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff11eb8, 0x51eb851e},	/* nan=f(-1.07)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0f5c2, 0x8f5c28f5},	/* nan=f(-1.06)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0cccc, 0xcccccccc},	/* nan=f(-1.05)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0a3d7, 0x0a3d70a3},	/* nan=f(-1.04)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff07ae1, 0x47ae147a},	/* nan=f(-1.03)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff051eb, 0x851eb851},	/* nan=f(-1.02)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff028f5, 0xc28f5c28},	/* nan=f(-1.01)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfefffff, 0xfffffffe},	/* nan=f(-1)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfefae14, 0x7ae147ac},	/* nan=f(-0.99)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfef5c28, 0xf5c28f5a},	/* nan=f(-0.98)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfef0a3d, 0x70a3d708},	/* nan=f(-0.97)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeeb851, 0xeb851eb6},	/* nan=f(-0.96)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfee6666, 0x66666664},	/* nan=f(-0.95)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfee147a, 0xe147ae12},	/* nan=f(-0.94)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfedc28f, 0x5c28f5c0},	/* nan=f(-0.93)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfed70a3, 0xd70a3d6e},	/* nan=f(-0.92)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfed1eb8, 0x51eb851c},	/* nan=f(-0.91)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeccccc, 0xccccccca},	/* nan=f(-0.9)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfec7ae1, 0x47ae1478},	/* nan=f(-0.89)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfec28f5, 0xc28f5c26},	/* nan=f(-0.88)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfebd70a, 0x3d70a3d4},	/* nan=f(-0.87)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeb851e, 0xb851eb82},	/* nan=f(-0.86)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeb3333, 0x33333330},	/* nan=f(-0.85)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeae147, 0xae147ade},	/* nan=f(-0.84)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfea8f5c, 0x28f5c28c},	/* nan=f(-0.83)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfea3d70, 0xa3d70a3a},	/* nan=f(-0.82)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe9eb85, 0x1eb851e8},	/* nan=f(-0.81)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe99999, 0x99999996},	/* nan=f(-0.8)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe947ae, 0x147ae144},	/* nan=f(-0.79)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe8f5c2, 0x8f5c28f2},	/* nan=f(-0.78)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe8a3d7, 0x0a3d70a0},	/* nan=f(-0.77)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe851eb, 0x851eb84e},	/* nan=f(-0.76)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe7ffff, 0xfffffffc},	/* nan=f(-0.75)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe7ae14, 0x7ae147aa},	/* nan=f(-0.74)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe75c28, 0xf5c28f58},	/* nan=f(-0.73)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe70a3d, 0x70a3d706},	/* nan=f(-0.72)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe6b851, 0xeb851eb4},	/* nan=f(-0.71)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe66666, 0x66666662},	/* nan=f(-0.7)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe6147a, 0xe147ae10},	/* nan=f(-0.69)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe5c28f, 0x5c28f5be},	/* nan=f(-0.68)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe570a3, 0xd70a3d6c},	/* nan=f(-0.67)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe51eb8, 0x51eb851a},	/* nan=f(-0.66)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe4cccc, 0xccccccc8},	/* nan=f(-0.65)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe47ae1, 0x47ae1476},	/* nan=f(-0.64)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe428f5, 0xc28f5c24},	/* nan=f(-0.63)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe3d70a, 0x3d70a3d2},	/* nan=f(-0.62)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe3851e, 0xb851eb80},	/* nan=f(-0.61)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe33333, 0x3333332e},	/* nan=f(-0.6)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe2e147, 0xae147adc},	/* nan=f(-0.59)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe28f5c, 0x28f5c28a},	/* nan=f(-0.58)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe23d70, 0xa3d70a38},	/* nan=f(-0.57)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe1eb85, 0x1eb851e6},	/* nan=f(-0.56)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe19999, 0x99999994},	/* nan=f(-0.55)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe147ae, 0x147ae142},	/* nan=f(-0.54)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe0f5c2, 0x8f5c28f0},	/* nan=f(-0.53)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe0a3d7, 0x0a3d709e},	/* nan=f(-0.52)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe051eb, 0x851eb84c},	/* nan=f(-0.51)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdfffff, 0xfffffff4},	/* nan=f(-0.5)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdf5c28, 0xf5c28f50},	/* nan=f(-0.49)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdeb851, 0xeb851eac},	/* nan=f(-0.48)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfde147a, 0xe147ae08},	/* nan=f(-0.47)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdd70a3, 0xd70a3d64},	/* nan=f(-0.46)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdccccc, 0xccccccc0},	/* nan=f(-0.45)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdc28f5, 0xc28f5c1c},	/* nan=f(-0.44)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdb851e, 0xb851eb78},	/* nan=f(-0.43)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdae147, 0xae147ad4},	/* nan=f(-0.42)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfda3d70, 0xa3d70a30},	/* nan=f(-0.41)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd99999, 0x9999998c},	/* nan=f(-0.4)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd8f5c2, 0x8f5c28e8},	/* nan=f(-0.39)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd851eb, 0x851eb844},	/* nan=f(-0.38)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd7ae14, 0x7ae147a0},	/* nan=f(-0.37)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd70a3d, 0x70a3d6fc},	/* nan=f(-0.36)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd66666, 0x66666658},	/* nan=f(-0.35)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd5c28f, 0x5c28f5b4},	/* nan=f(-0.34)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd51eb8, 0x51eb8510},	/* nan=f(-0.33)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd47ae1, 0x47ae146c},	/* nan=f(-0.32)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd3d70a, 0x3d70a3c8},	/* nan=f(-0.31)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd33333, 0x33333324},	/* nan=f(-0.3)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd28f5c, 0x28f5c280},	/* nan=f(-0.29)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd1eb85, 0x1eb851dc},	/* nan=f(-0.28)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd147ae, 0x147ae138},	/* nan=f(-0.27)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd0a3d7, 0x0a3d7094},	/* nan=f(-0.26)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfcfffff, 0xffffffe0},	/* nan=f(-0.25)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfceb851, 0xeb851e98},	/* nan=f(-0.24)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfcd70a3, 0xd70a3d50},	/* nan=f(-0.23)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfcc28f5, 0xc28f5c08},	/* nan=f(-0.22)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfcae147, 0xae147ac0},	/* nan=f(-0.21)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc99999, 0x99999978},	/* nan=f(-0.2)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc851eb, 0x851eb830},	/* nan=f(-0.19)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc70a3d, 0x70a3d6e8},	/* nan=f(-0.18)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc5c28f, 0x5c28f5a0},	/* nan=f(-0.17)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc47ae1, 0x47ae1458},	/* nan=f(-0.16)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc33333, 0x33333310},	/* nan=f(-0.15)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc1eb85, 0x1eb851c8},	/* nan=f(-0.14)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc0a3d7, 0x0a3d7080},	/* nan=f(-0.13)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfbeb851, 0xeb851e71},	/* nan=f(-0.12)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfbc28f5, 0xc28f5be2},	/* nan=f(-0.11)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfb99999, 0x99999953},	/* nan=f(-0.1)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfb70a3d, 0x70a3d6c4},	/* nan=f(-0.09)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfb47ae1, 0x47ae1435},	/* nan=f(-0.08)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfb1eb85, 0x1eb851a6},	/* nan=f(-0.07)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfaeb851, 0xeb851e2d},	/* nan=f(-0.06)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfa99999, 0x9999990e},	/* nan=f(-0.05)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfa47ae1, 0x47ae13ef},	/* nan=f(-0.04)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbf9eb851, 0xeb851da0},	/* nan=f(-0.03)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbf947ae1, 0x47ae1362},	/* nan=f(-0.02)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbf847ae1, 0x47ae1249},	/* nan=f(-0.01)*/
{63, 0,123,__LINE__, 0xc3028f34, 0x51ccc8e5, 0x3cd19000, 0x00000000},	/* -6.53001e+14=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0xc04fd6dc, 0x3e334e38, 0x3f847ae1, 0x47ae16ad},	/* -63.6786=f(0.01)*/
{63, 0,123,__LINE__, 0xc03fdc1c, 0xb0eef4eb, 0x3f947ae1, 0x47ae1594},	/* -31.8598=f(0.02)*/
{64, 0,123,__LINE__, 0xc0354290, 0xb7c32631, 0x3f9eb851, 0xeb851fd2},	/* -21.26=f(0.03)*/
{64, 0,123,__LINE__, 0xc02fedb9, 0xe607ef4f, 0x3fa47ae1, 0x47ae1508},	/* -15.9643=f(0.04)*/
{63, 0,123,__LINE__, 0xc0299467, 0xe5a18b38, 0x3fa99999, 0x99999a27},	/* -12.7899=f(0.05)*/
{63, 0,123,__LINE__, 0xc0255a01, 0x0c0e9f0a, 0x3faeb851, 0xeb851f46},	/* -10.6758=f(0.06)*/
{63, 0,123,__LINE__, 0xc02255c1, 0x41fbfbef, 0x3fb1eb85, 0x1eb85232},	/* -9.16749=f(0.07)*/
{64, 0,123,__LINE__, 0xc0201349, 0x6e9843f8, 0x3fb47ae1, 0x47ae14c1},	/* -8.03767=f(0.08)*/
{64, 0,123,__LINE__, 0xc01ca3e9, 0xbb27878f, 0x3fb70a3d, 0x70a3d750},	/* -7.16007=f(0.09)*/
{64, 0,123,__LINE__, 0xc019d5f7, 0x4698d559, 0x3fb99999, 0x999999df},	/* -6.45895=f(0.1)*/
{63, 0,123,__LINE__, 0xc0178b61, 0xd24a2161, 0x3fbc28f5, 0xc28f5c6e},	/* -5.88612=f(0.11)*/
{63, 0,123,__LINE__, 0xc015a344, 0x4a03f79f, 0x3fbeb851, 0xeb851efd},	/* -5.40944=f(0.12)*/
{64, 0,123,__LINE__, 0xc01406d9, 0xbe1b5f10, 0x3fc0a3d7, 0x0a3d70c6},	/* -5.00669=f(0.13)*/
{64, 0,123,__LINE__, 0xc012a5df, 0x770b6f6d, 0x3fc1eb85, 0x1eb8520e},	/* -4.66199=f(0.14)*/
{63, 0,123,__LINE__, 0xc0117469, 0x7020665a, 0x3fc33333, 0x33333356},	/* -4.36368=f(0.15)*/
{63, 0,123,__LINE__, 0xc0106987, 0x29e4663b, 0x3fc47ae1, 0x47ae149e},	/* -4.10305=f(0.16)*/
{64, 0,123,__LINE__, 0xc00efcc6, 0x1239add3, 0x3fc5c28f, 0x5c28f5e6},	/* -3.87342=f(0.17)*/
{64, 0,123,__LINE__, 0xc00d5b59, 0x31f511ee, 0x3fc70a3d, 0x70a3d72e},	/* -3.6696=f(0.18)*/
{63, 0,123,__LINE__, 0xc00be664, 0x31944805, 0x3fc851eb, 0x851eb876},	/* -3.4875=f(0.19)*/
{64, 0,123,__LINE__, 0xc00a9731, 0x8e2c8b12, 0x3fc99999, 0x999999be},	/* -3.32382=f(0.2)*/
{64, 0,123,__LINE__, 0xc0096853, 0x558ea2d0, 0x3fcae147, 0xae147b06},	/* -3.17594=f(0.21)*/
{64, 0,123,__LINE__, 0xc0085558, 0xa9b5bffa, 0x3fcc28f5, 0xc28f5c4e},	/* -3.04167=f(0.22)*/
{63, 0,123,__LINE__, 0xc0075a96, 0xb404b99d, 0x3fcd70a3, 0xd70a3d96},	/* -2.91923=f(0.23)*/
{63, 0,123,__LINE__, 0xc00674ff, 0x5ccd6bf9, 0x3fceb851, 0xeb851ede},	/* -2.80713=f(0.24)*/
{64, 0,123,__LINE__, 0xc005a201, 0xec26d03b, 0x3fd00000, 0x00000013},	/* -2.70411=f(0.25)*/
{63, 0,123,__LINE__, 0xc004df72, 0xe8cf58bc, 0x3fd0a3d7, 0x0a3d70b7},	/* -2.60911=f(0.26)*/
{63, 0,123,__LINE__, 0xc0042b79, 0x54525686, 0x3fd147ae, 0x147ae15b},	/* -2.52123=f(0.27)*/
{63, 0,123,__LINE__, 0xc003847f, 0xed0a3f73, 0x3fd1eb85, 0x1eb851ff},	/* -2.4397=f(0.28)*/
{64, 0,123,__LINE__, 0xc002e929, 0x7d58868e, 0x3fd28f5c, 0x28f5c2a3},	/* -2.36385=f(0.29)*/
{64, 0,123,__LINE__, 0xc0025847, 0x81bd5896, 0x3fd33333, 0x33333347},	/* -2.29311=f(0.3)*/
{63, 0,123,__LINE__, 0xc001d0d2, 0x9e89a057, 0x3fd3d70a, 0x3d70a3eb},	/* -2.22696=f(0.31)*/
{63, 0,123,__LINE__, 0xc00151e4, 0x7fb8d6a4, 0x3fd47ae1, 0x47ae148f},	/* -2.16499=f(0.32)*/
{64, 0,123,__LINE__, 0xc000dab2, 0xd6195bcc, 0x3fd51eb8, 0x51eb8533},	/* -2.10679=f(0.33)*/
{64, 0,123,__LINE__, 0xc0006a8b, 0x37002a86, 0x3fd5c28f, 0x5c28f5d7},	/* -2.05202=f(0.34)*/
{63, 0,123,__LINE__, 0xc00000cf, 0xb133ff93, 0x3fd66666, 0x6666667b},	/* -2.0004=f(0.35)*/
{64, 0,123,__LINE__, 0xbfff39e7, 0xe79ec9ca, 0x3fd70a3d, 0x70a3d71f},	/* -1.95164=f(0.36)*/
{64, 0,123,__LINE__, 0xbffe7cf5, 0xd6f1bcf2, 0x3fd7ae14, 0x7ae147c3},	/* -1.90551=f(0.37)*/
{63, 0,123,__LINE__, 0xbffdc9e9, 0x8043d493, 0x3fd851eb, 0x851eb867},	/* -1.86179=f(0.38)*/
{63, 0,123,__LINE__, 0xbffd1ffa, 0x43ee5bc9, 0x3fd8f5c2, 0x8f5c290b},	/* -1.82031=f(0.39)*/
{63, 0,123,__LINE__, 0xbffc7e73, 0xaf48021d, 0x3fd99999, 0x999999af},	/* -1.78087=f(0.4)*/
{64, 0,123,__LINE__, 0xbffbe4b3, 0x0580d476, 0x3fda3d70, 0xa3d70a53},	/* -1.74333=f(0.41)*/
{63, 0,123,__LINE__, 0xbffb5225, 0x22c20731, 0x3fdae147, 0xae147af7},	/* -1.70755=f(0.42)*/
{64, 0,123,__LINE__, 0xbffac644, 0xaadd5200, 0x3fdb851e, 0xb851eb9b},	/* -1.67341=f(0.43)*/
{63, 0,123,__LINE__, 0xbffa4098, 0x77845129, 0x3fdc28f5, 0xc28f5c3f},	/* -1.64077=f(0.44)*/
{64, 0,123,__LINE__, 0xbff9c0b2, 0x3c24180d, 0x3fdccccc, 0xcccccce3},	/* -1.60954=f(0.45)*/
{64, 0,123,__LINE__, 0xbff9462d, 0x5739a738, 0x3fdd70a3, 0xd70a3d87},	/* -1.57963=f(0.46)*/
{64, 0,123,__LINE__, 0xbff8d0ad, 0xca581cba, 0x3fde147a, 0xe147ae2b},	/* -1.55095=f(0.47)*/
{64, 0,123,__LINE__, 0xbff85fdf, 0x533acd50, 0x3fdeb851, 0xeb851ecf},	/* -1.52341=f(0.48)*/
{63, 0,123,__LINE__, 0xbff7f374, 0xa129a303, 0x3fdf5c28, 0xf5c28f73},	/* -1.49694=f(0.49)*/
{64, 0,123,__LINE__, 0xbff78b26, 0xa2b7c4d2, 0x3fe00000, 0x0000000b},	/* -1.47147=f(0.5)*/
{63, 0,123,__LINE__, 0xbff726b3, 0xe88401f1, 0x3fe051eb, 0x851eb85d},	/* -1.44695=f(0.51)*/
{64, 0,123,__LINE__, 0xbff6c5e0, 0x1a2655ef, 0x3fe0a3d7, 0x0a3d70af},	/* -1.42331=f(0.52)*/
{63, 0,123,__LINE__, 0xbff66873, 0x7ae34f37, 0x3fe0f5c2, 0x8f5c2901},	/* -1.4005=f(0.53)*/
{63, 0,123,__LINE__, 0xbff60e3a, 0x7c1955f1, 0x3fe147ae, 0x147ae153},	/* -1.37847=f(0.54)*/
{64, 0,123,__LINE__, 0xbff5b705, 0x5ba816cb, 0x3fe19999, 0x999999a5},	/* -1.35718=f(0.55)*/
{64, 0,123,__LINE__, 0xbff562a7, 0xccd257c6, 0x3fe1eb85, 0x1eb851f7},	/* -1.33659=f(0.56)*/
{63, 0,123,__LINE__, 0xbff510f8, 0xaa5062b4, 0x3fe23d70, 0xa3d70a49},	/* -1.31664=f(0.57)*/
{63, 0,123,__LINE__, 0xbff4c1d1, 0xb076b8b3, 0x3fe28f5c, 0x28f5c29b},	/* -1.29732=f(0.58)*/
{63, 0,123,__LINE__, 0xbff4750f, 0x3e7b569b, 0x3fe2e147, 0xae147aed},	/* -1.27858=f(0.59)*/
{63, 0,123,__LINE__, 0xbff42a90, 0x1e049cae, 0x3fe33333, 0x3333333f},	/* -1.26039=f(0.6)*/
{63, 0,123,__LINE__, 0xbff3e235, 0x5048deee, 0x3fe3851e, 0xb851eb91},	/* -1.24273=f(0.61)*/
{64, 0,123,__LINE__, 0xbff39be1, 0xe01d876d, 0x3fe3d70a, 0x3d70a3e3},	/* -1.22556=f(0.62)*/
{64, 0,123,__LINE__, 0xbff3577a, 0xb8692d6b, 0x3fe428f5, 0xc28f5c35},	/* -1.20886=f(0.63)*/
{64, 0,123,__LINE__, 0xbff314e6, 0x7e7d9c43, 0x3fe47ae1, 0x47ae1487},	/* -1.1926=f(0.64)*/
{63, 0,123,__LINE__, 0xbff2d40d, 0x6feded0a, 0x3fe4cccc, 0xccccccd9},	/* -1.17677=f(0.65)*/
{63, 0,123,__LINE__, 0xbff294d9, 0x4381ec60, 0x3fe51eb8, 0x51eb852b},	/* -1.16134=f(0.66)*/
{63, 0,123,__LINE__, 0xbff25735, 0x0cf35a14, 0x3fe570a3, 0xd70a3d7d},	/* -1.14629=f(0.67)*/
{63, 0,123,__LINE__, 0xbff21b0d, 0x232b6442, 0x3fe5c28f, 0x5c28f5cf},	/* -1.1316=f(0.68)*/
{64, 0,123,__LINE__, 0xbff1e04f, 0x08bf4b2c, 0x3fe6147a, 0xe147ae21},	/* -1.11726=f(0.69)*/
{64, 0,123,__LINE__, 0xbff1a6e9, 0x56728d2d, 0x3fe66666, 0x66666673},	/* -1.10325=f(0.7)*/
{64, 0,123,__LINE__, 0xbff16ecb, 0xa78b7a7c, 0x3fe6b851, 0xeb851ec5},	/* -1.08955=f(0.71)*/
{64, 0,123,__LINE__, 0xbff137e6, 0x87ccc07e, 0x3fe70a3d, 0x70a3d717},	/* -1.07615=f(0.72)*/
{63, 0,123,__LINE__, 0xbff1022b, 0x62eb78d5, 0x3fe75c28, 0xf5c28f69},	/* -1.06303=f(0.73)*/
{64, 0,123,__LINE__, 0xbff0cd8c, 0x755da97a, 0x3fe7ae14, 0x7ae147bb},	/* -1.05018=f(0.74)*/
{64, 0,123,__LINE__, 0xbff099fc, 0xbe60fd7b, 0x3fe80000, 0x0000000d},	/* -1.03759=f(0.75)*/
{63, 0,123,__LINE__, 0xbff0676f, 0xf31ce375, 0x3fe851eb, 0x851eb85f},	/* -1.02525=f(0.76)*/
{63, 0,123,__LINE__, 0xbff035da, 0x72c63ebd, 0x3fe8a3d7, 0x0a3d70b1},	/* -1.01315=f(0.77)*/
{64, 0,123,__LINE__, 0xbff00531, 0x3bad7f1b, 0x3fe8f5c2, 0x8f5c2903},	/* -1.00127=f(0.78)*/
{63, 0,123,__LINE__, 0xbfefaad3, 0xc2449975, 0x3fe947ae, 0x147ae155},	/* -0.989603=f(0.79)*/
{64, 0,123,__LINE__, 0xbfef4cf5, 0x04341779, 0x3fe99999, 0x999999a7},	/* -0.978144=f(0.8)*/
{64, 0,123,__LINE__, 0xbfeef0b3, 0x8110aaef, 0x3fe9eb85, 0x1eb851f9},	/* -0.966882=f(0.81)*/
{63, 0,123,__LINE__, 0xbfee95fd, 0x72b45757, 0x3fea3d70, 0xa3d70a4b},	/* -0.955809=f(0.82)*/
{64, 0,123,__LINE__, 0xbfee3cc1, 0xfa0c451d, 0x3fea8f5c, 0x28f5c29d},	/* -0.944917=f(0.83)*/
{64, 0,123,__LINE__, 0xbfede4f1, 0x114a1d4d, 0x3feae147, 0xae147aef},	/* -0.934197=f(0.84)*/
{64, 0,123,__LINE__, 0xbfed8e7b, 0x7f0fdfe2, 0x3feb3333, 0x33333341},	/* -0.923643=f(0.85)*/
{63, 0,123,__LINE__, 0xbfed3952, 0xca81c192, 0x3feb851e, 0xb851eb93},	/* -0.913247=f(0.86)*/
{63, 0,123,__LINE__, 0xbfece569, 0x302b8077, 0x3febd70a, 0x3d70a3e5},	/* -0.903004=f(0.87)*/
{64, 0,123,__LINE__, 0xbfec92b1, 0x97a84f99, 0x3fec28f5, 0xc28f5c37},	/* -0.892907=f(0.88)*/
{63, 0,123,__LINE__, 0xbfec411f, 0x89fdfebd, 0x3fec7ae1, 0x47ae1489},	/* -0.88295=f(0.89)*/
{64, 0,123,__LINE__, 0xbfebf0a7, 0x289d61ad, 0x3feccccc, 0xccccccdb},	/* -0.873127=f(0.9)*/
{63, 0,123,__LINE__, 0xbfeba13d, 0x24fb35dc, 0x3fed1eb8, 0x51eb852d},	/* -0.863432=f(0.91)*/
{63, 0,123,__LINE__, 0xbfeb52d6, 0xb8b5e1a4, 0x3fed70a3, 0xd70a3d7f},	/* -0.853862=f(0.92)*/
{63, 0,123,__LINE__, 0xbfeb0569, 0x9e3d6974, 0x3fedc28f, 0x5c28f5d1},	/* -0.844411=f(0.93)*/
{64, 0,123,__LINE__, 0xbfeab8ec, 0x09f3df7c, 0x3fee147a, 0xe147ae23},	/* -0.835073=f(0.94)*/
{64, 0,123,__LINE__, 0xbfea6d54, 0xa3bd64c4, 0x3fee6666, 0x66666675},	/* -0.825846=f(0.95)*/
{64, 0,123,__LINE__, 0xbfea229a, 0x80f7910d, 0x3feeb851, 0xeb851ec7},	/* -0.816724=f(0.96)*/
{63, 0,123,__LINE__, 0xbfe9d8b5, 0x1ed0c3c7, 0x3fef0a3d, 0x70a3d719},	/* -0.807704=f(0.97)*/
{63, 0,123,__LINE__, 0xbfe98f9c, 0x5cf87d45, 0x3fef5c28, 0xf5c28f6b},	/* -0.798781=f(0.98)*/
{63, 0,123,__LINE__, 0xbfe94748, 0x78a26dff, 0x3fefae14, 0x7ae147bd},	/* -0.789952=f(0.99)*/
{64, 0,123,__LINE__, 0xbfe8ffb2, 0x07d66b88, 0x3ff00000, 0x00000007},	/* -0.781213=f(1)*/
{63, 0,123,__LINE__, 0xbfe8b8d1, 0xf507f0f5, 0x3ff028f5, 0xc28f5c30},	/* -0.772561=f(1.01)*/
{64, 0,123,__LINE__, 0xbfe872a1, 0x7af03c5a, 0x3ff051eb, 0x851eb859},	/* -0.763993=f(1.02)*/
{63, 0,123,__LINE__, 0xbfe82d1a, 0x20a67d2d, 0x3ff07ae1, 0x47ae1482},	/* -0.755506=f(1.03)*/
{64, 0,123,__LINE__, 0xbfe7e835, 0xb5f1e144, 0x3ff0a3d7, 0x0a3d70ab},	/* -0.747096=f(1.04)*/
{63, 0,123,__LINE__, 0xbfe7a3ee, 0x4fd1a02c, 0x3ff0cccc, 0xccccccd4},	/* -0.738761=f(1.05)*/
{64, 0,123,__LINE__, 0xbfe7603e, 0x45376fba, 0x3ff0f5c2, 0x8f5c28fd},	/* -0.730498=f(1.06)*/
{64, 0,123,__LINE__, 0xbfe71d20, 0x2bf11178, 0x3ff11eb8, 0x51eb8526},	/* -0.722305=f(1.07)*/
{63, 0,123,__LINE__, 0xbfe6da8e, 0xd5bde799, 0x3ff147ae, 0x147ae14f},	/* -0.714179=f(1.08)*/
{64, 0,123,__LINE__, 0xbfe69885, 0x4d8db9f0, 0x3ff170a3, 0xd70a3d78},	/* -0.706118=f(1.09)*/
{64, 0,123,__LINE__, 0xbfe656fe, 0xd4e60874, 0x3ff19999, 0x999999a1},	/* -0.69812=f(1.1)*/
{64, 0,123,__LINE__, 0xbfe615f6, 0xe16b79b2, 0x3ff1c28f, 0x5c28f5ca},	/* -0.690181=f(1.11)*/
{63, 0,123,__LINE__, 0xbfe5d569, 0x1a8d2047, 0x3ff1eb85, 0x1eb851f3},	/* -0.682301=f(1.12)*/
{64, 0,123,__LINE__, 0xbfe59551, 0x574f7bdf, 0x3ff2147a, 0xe147ae1c},	/* -0.674477=f(1.13)*/
{64, 0,123,__LINE__, 0xbfe555ab, 0x9c35400a, 0x3ff23d70, 0xa3d70a45},	/* -0.666708=f(1.14)*/
{64, 0,123,__LINE__, 0xbfe51674, 0x19440e79, 0x3ff26666, 0x6666666e},	/* -0.658991=f(1.15)*/
{64, 0,123,__LINE__, 0xbfe4d7a7, 0x28237235, 0x3ff28f5c, 0x28f5c297},	/* -0.651325=f(1.16)*/
{64, 0,123,__LINE__, 0xbfe49941, 0x4a548778, 0x3ff2b851, 0xeb851ec0},	/* -0.643708=f(1.17)*/
{64, 0,123,__LINE__, 0xbfe45b3f, 0x2780d71b, 0x3ff2e147, 0xae147ae9},	/* -0.636139=f(1.18)*/
{63, 0,123,__LINE__, 0xbfe41d9d, 0x8bdf0627, 0x3ff30a3d, 0x70a3d712},	/* -0.628615=f(1.19)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc01921fb, 0x54442d18},	/* nan=f(-6.28319)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc012d97c, 0x7f3321d2},	/* nan=f(-4.71239)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc00921fb, 0x54442d18},	/* nan=f(-3.14159)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff921fb, 0x54442d18},	/* nan=f(-1.5708)*/
{ 0, 0, 34,__LINE__, 0xfff00000, 0x00000000, 0x00000000, 0x00000000},	/* -inf=f(0)*/
{63, 0,123,__LINE__, 0xbfd77123, 0x5406f042, 0x3ff921fb, 0x54442d18},	/* -0.36628=f(1.5708)*/
{62, 0,123,__LINE__, 0x3fd6f7c6, 0x1c3e7909, 0x400921fb, 0x54442d18},	/* 0.358873=f(3.14159)*/
{60, 0,123,__LINE__, 0x3fced109, 0x0321e8d9, 0x4012d97c, 0x7f3321d2},	/* 0.240754=f(4.71239)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03e0000, 0x00000000},	/* nan=f(-30)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03c4ccc, 0xcccccccd},	/* nan=f(-28.3)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03a9999, 0x9999999a},	/* nan=f(-26.6)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc038e666, 0x66666667},	/* nan=f(-24.9)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0373333, 0x33333334},	/* nan=f(-23.2)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0358000, 0x00000001},	/* nan=f(-21.5)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc033cccc, 0xccccccce},	/* nan=f(-19.8)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0321999, 0x9999999b},	/* nan=f(-18.1)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0306666, 0x66666668},	/* nan=f(-16.4)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc02d6666, 0x6666666a},	/* nan=f(-14.7)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc02a0000, 0x00000004},	/* nan=f(-13)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0269999, 0x9999999e},	/* nan=f(-11.3)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0233333, 0x33333338},	/* nan=f(-9.6)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc01f9999, 0x999999a3},	/* nan=f(-7.9)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc018cccc, 0xccccccd6},	/* nan=f(-6.2)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0120000, 0x00000009},	/* nan=f(-4.5)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0066666, 0x66666678},	/* nan=f(-2.8)*/
{64, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff19999, 0x999999bd},	/* nan=f(-1.1)*/
{64, 0,123,__LINE__, 0xbff42a90, 0x1e049cf8, 0x3fe33333, 0x333332ec},	/* -1.26039=f(0.6)*/
{61, 0,123,__LINE__, 0x3faac417, 0xa3bf474c, 0x40026666, 0x66666654},	/* 0.0522773=f(2.3)*/
{64, 0,123,__LINE__, 0x3fd9779d, 0x664523cf, 0x400fffff, 0xffffffee},	/* 0.397926=f(4)*/
{58, 0,123,__LINE__, 0xbfb6b692, 0xa5de21d7, 0x4016cccc, 0xccccccc4},	/* -0.0887233=f(5.7)*/
{58, 0,123,__LINE__, 0xbfd17ab7, 0x2b13b949, 0x401d9999, 0x99999991},	/* -0.273115=f(7.4)*/
{62, 0,123,__LINE__, 0x3fc050cd, 0x513210bc, 0x40223333, 0x3333332f},	/* 0.127466=f(9.1)*/
{62, 0,123,__LINE__, 0x3fc940c4, 0xd7d877b3, 0x40259999, 0x99999995},	/* 0.197289=f(10.8)*/
{61, 0,123,__LINE__, 0xbfc3b0f8, 0xd459e256, 0x4028ffff, 0xfffffffb},	/* -0.153838=f(12.5)*/
{63, 0,123,__LINE__, 0xbfc165b0, 0xfd54018a, 0x402c6666, 0x66666661},	/* -0.135916=f(14.2)*/
{64, 0,123,__LINE__, 0x3fc594e5, 0x4261700e, 0x402fcccc, 0xccccccc7},	/* 0.168606=f(15.9)*/
{59, 0,123,__LINE__, 0x3fb4e0ac, 0x47a4e1b9, 0x40319999, 0x99999997},	/* 0.0815532=f(17.6)*/
{62, 0,123,__LINE__, 0xbfc61c4c, 0x8f518081, 0x40334ccc, 0xccccccca},	/* -0.172739=f(19.3)*/
{58, 0,123,__LINE__, 0xbfa0a8fc, 0x69909f5a, 0x4034ffff, 0xfffffffd},	/* -0.0325393=f(21)*/
{63, 0,123,__LINE__, 0x3fc567a2, 0x1848d0d0, 0x4036b333, 0x33333330},	/* 0.167225=f(22.7)*/
{56, 0,123,__LINE__, 0xbf867d4b, 0x580d24ce, 0x40386666, 0x66666663},	/* -0.0109812=f(24.4)*/
{62, 0,123,__LINE__, 0xbfc39cd0, 0xcf7f5219, 0x403a1999, 0x99999996},	/* -0.153223=f(26.1)*/
{58, 0,123,__LINE__, 0x3fa8b66b, 0x1871711a, 0x403bcccc, 0xccccccc9},	/* 0.0482667=f(27.8)*/
{61, 0,123,__LINE__, 0x3fc0e92b, 0x1cafe2d5, 0x403d7fff, 0xfffffffc},	/* 0.132116=f(29.5)*/
{0},};
void test_y1(int m)   {run_vector_1(m,y1_vec,(char *)(y1),"y1","dd");   }	