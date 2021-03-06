/* sinus.h autocreated by sin_create (C) 2001 by Ge0rG */

#define SIN_SIZE 1024
#define SIN_MUL 65536
static int Sin[SIN_SIZE] = {
	0x0000, 0x00c9, 0x0192, 0x025b, 0x0324, 0x03ed, 0x04b6, 0x057f,
	0x0648, 0x0711, 0x07da, 0x08a3, 0x096c, 0x0a35, 0x0afe, 0x0bc7,
	0x0c90, 0x0d59, 0x0e21, 0x0eea, 0x0fb3, 0x107b, 0x1144, 0x120d,
	0x12d5, 0x139e, 0x1466, 0x152e, 0x15f7, 0x16bf, 0x1787, 0x1850,
	0x1918, 0x19e0, 0x1aa8, 0x1b70, 0x1c38, 0x1cff, 0x1dc7, 0x1e8f,
	0x1f56, 0x201e, 0x20e5, 0x21ad, 0x2274, 0x233b, 0x2402, 0x24c9,
	0x2590, 0x2657, 0x271e, 0x27e4, 0x28ab, 0x2971, 0x2a38, 0x2afe,
	0x2bc4, 0x2c8a, 0x2d50, 0x2e16, 0x2edc, 0x2fa1, 0x3067, 0x312c,
	0x31f1, 0x32b7, 0x337c, 0x3440, 0x3505, 0x35ca, 0x368e, 0x3753,
	0x3817, 0x38db, 0x399f, 0x3a63, 0x3b27, 0x3bea, 0x3cae, 0x3d71,
	0x3e34, 0x3ef7, 0x3fba, 0x407c, 0x413f, 0x4201, 0x42c3, 0x4385,
	0x4447, 0x4509, 0x45cb, 0x468c, 0x474d, 0x480e, 0x48cf, 0x4990,
	0x4a50, 0x4b10, 0x4bd1, 0x4c90, 0x4d50, 0x4e10, 0x4ecf, 0x4f8e,
	0x504d, 0x510c, 0x51cb, 0x5289, 0x5348, 0x5406, 0x54c3, 0x5581,
	0x563e, 0x56fc, 0x57b9, 0x5875, 0x5932, 0x59ee, 0x5aaa, 0x5b66,
	0x5c22, 0x5cde, 0x5d99, 0x5e54, 0x5f0f, 0x5fc9, 0x6084, 0x613e,
	0x61f8, 0x62b1, 0x636b, 0x6424, 0x64dd, 0x6595, 0x664e, 0x6706,
	0x67be, 0x6876, 0x692d, 0x69e4, 0x6a9b, 0x6b52, 0x6c08, 0x6cbe,
	0x6d74, 0x6e2a, 0x6edf, 0x6f94, 0x7049, 0x70fe, 0x71b2, 0x7266,
	0x731a, 0x73cd, 0x7480, 0x7533, 0x75e6, 0x7698, 0x774a, 0x77fc,
	0x78ad, 0x795f, 0x7a10, 0x7ac0, 0x7b70, 0x7c20, 0x7cd0, 0x7d7f,
	0x7e2f, 0x7edd, 0x7f8c, 0x803a, 0x80e8, 0x8195, 0x8243, 0x82f0,
	0x839c, 0x8449, 0x84f5, 0x85a0, 0x864c, 0x86f7, 0x87a1, 0x884c,
	0x88f6, 0x899f, 0x8a49, 0x8af2, 0x8b9a, 0x8c43, 0x8ceb, 0x8d93,
	0x8e3a, 0x8ee1, 0x8f88, 0x902e, 0x90d4, 0x9179, 0x921f, 0x92c4,
	0x9368, 0x940c, 0x94b0, 0x9554, 0x95f7, 0x969a, 0x973c, 0x97de,
	0x9880, 0x9921, 0x99c2, 0x9a63, 0x9b03, 0x9ba3, 0x9c42, 0x9ce1,
	0x9d80, 0x9e1e, 0x9ebc, 0x9f5a, 0x9ff7, 0xa094, 0xa130, 0xa1cc,
	0xa268, 0xa303, 0xa39e, 0xa438, 0xa4d2, 0xa56c, 0xa605, 0xa69e,
	0xa736, 0xa7ce, 0xa866, 0xa8fd, 0xa994, 0xaa2a, 0xaac1, 0xab56,
	0xabeb, 0xac80, 0xad14, 0xada8, 0xae3c, 0xaecf, 0xaf62, 0xaff4,
	0xb086, 0xb117, 0xb1a8, 0xb239, 0xb2c9, 0xb358, 0xb3e8, 0xb477,
	0xb505, 0xb593, 0xb620, 0xb6ad, 0xb73a, 0xb7c6, 0xb852, 0xb8dd,
	0xb968, 0xb9f3, 0xba7d, 0xbb06, 0xbb8f, 0xbc18, 0xbca0, 0xbd28,
	0xbdaf, 0xbe36, 0xbebc, 0xbf42, 0xbfc7, 0xc04c, 0xc0d1, 0xc155,
	0xc1d8, 0xc25c, 0xc2de, 0xc360, 0xc3e2, 0xc463, 0xc4e4, 0xc564,
	0xc5e4, 0xc663, 0xc6e2, 0xc761, 0xc7de, 0xc85c, 0xc8d9, 0xc955,
	0xc9d1, 0xca4d, 0xcac7, 0xcb42, 0xcbbc, 0xcc35, 0xccae, 0xcd27,
	0xcd9f, 0xce17, 0xce8e, 0xcf04, 0xcf7a, 0xcff0, 0xd065, 0xd0d9,
	0xd14d, 0xd1c1, 0xd234, 0xd2a6, 0xd318, 0xd38a, 0xd3fb, 0xd46b,
	0xd4db, 0xd54b, 0xd5ba, 0xd628, 0xd696, 0xd703, 0xd770, 0xd7dc,
	0xd848, 0xd8b4, 0xd91e, 0xd989, 0xd9f2, 0xda5c, 0xdac4, 0xdb2c,
	0xdb94, 0xdbfb, 0xdc62, 0xdcc8, 0xdd2d, 0xdd92, 0xddf7, 0xde5b,
	0xdebe, 0xdf21, 0xdf83, 0xdfe5, 0xe046, 0xe0a7, 0xe107, 0xe167,
	0xe1c6, 0xe224, 0xe282, 0xe2df, 0xe33c, 0xe399, 0xe3f4, 0xe450,
	0xe4aa, 0xe504, 0xe55e, 0xe5b7, 0xe610, 0xe667, 0xe6bf, 0xe716,
	0xe76c, 0xe7c2, 0xe817, 0xe86b, 0xe8bf, 0xe913, 0xe966, 0xe9b8,
	0xea0a, 0xea5b, 0xeaab, 0xeafc, 0xeb4b, 0xeb9a, 0xebe8, 0xec36,
	0xec83, 0xecd0, 0xed1c, 0xed68, 0xedb3, 0xedfd, 0xee47, 0xee90,
	0xeed9, 0xef21, 0xef68, 0xefaf, 0xeff5, 0xf03b, 0xf080, 0xf0c5,
	0xf109, 0xf14c, 0xf18f, 0xf1d2, 0xf213, 0xf254, 0xf295, 0xf2d5,
	0xf314, 0xf353, 0xf391, 0xf3cf, 0xf40c, 0xf448, 0xf484, 0xf4bf,
	0xf4fa, 0xf534, 0xf56e, 0xf5a6, 0xf5df, 0xf616, 0xf64e, 0xf684,
	0xf6ba, 0xf6ef, 0xf724, 0xf758, 0xf78c, 0xf7bf, 0xf7f1, 0xf823,
	0xf854, 0xf885, 0xf8b4, 0xf8e4, 0xf913, 0xf941, 0xf96e, 0xf99b,
	0xf9c8, 0xf9f3, 0xfa1f, 0xfa49, 0xfa73, 0xfa9c, 0xfac5, 0xfaed,
	0xfb15, 0xfb3c, 0xfb62, 0xfb88, 0xfbad, 0xfbd1, 0xfbf5, 0xfc18,
	0xfc3b, 0xfc5d, 0xfc7f, 0xfca0, 0xfcc0, 0xfcdf, 0xfcfe, 0xfd1d,
	0xfd3b, 0xfd58, 0xfd74, 0xfd90, 0xfdac, 0xfdc7, 0xfde1, 0xfdfa,
	0xfe13, 0xfe2b, 0xfe43, 0xfe5a, 0xfe71, 0xfe87, 0xfe9c, 0xfeb0,
	0xfec4, 0xfed8, 0xfeeb, 0xfefd, 0xff0e, 0xff1f, 0xff30, 0xff3f,
	0xff4e, 0xff5d, 0xff6b, 0xff78, 0xff85, 0xff91, 0xff9c, 0xffa7,
	0xffb1, 0xffbb, 0xffc4, 0xffcc, 0xffd4, 0xffdb, 0xffe1, 0xffe7,
	0xffec, 0xfff1, 0xfff5, 0xfff8, 0xfffb, 0xfffd, 0xffff, 0x10000,
	0x10000, 0x10000, 0xffff, 0xfffd, 0xfffb, 0xfff8, 0xfff5, 0xfff1,
	0xffec, 0xffe7, 0xffe1, 0xffdb, 0xffd4, 0xffcc, 0xffc4, 0xffbb,
	0xffb1, 0xffa7, 0xff9c, 0xff91, 0xff85, 0xff78, 0xff6b, 0xff5d,
	0xff4e, 0xff3f, 0xff30, 0xff1f, 0xff0e, 0xfefd, 0xfeeb, 0xfed8,
	0xfec4, 0xfeb0, 0xfe9c, 0xfe87, 0xfe71, 0xfe5a, 0xfe43, 0xfe2b,
	0xfe13, 0xfdfa, 0xfde1, 0xfdc7, 0xfdac, 0xfd90, 0xfd74, 0xfd58,
	0xfd3b, 0xfd1d, 0xfcfe, 0xfcdf, 0xfcc0, 0xfca0, 0xfc7f, 0xfc5d,
	0xfc3b, 0xfc18, 0xfbf5, 0xfbd1, 0xfbad, 0xfb88, 0xfb62, 0xfb3c,
	0xfb15, 0xfaed, 0xfac5, 0xfa9c, 0xfa73, 0xfa49, 0xfa1f, 0xf9f3,
	0xf9c8, 0xf99b, 0xf96e, 0xf941, 0xf913, 0xf8e4, 0xf8b4, 0xf885,
	0xf854, 0xf823, 0xf7f1, 0xf7bf, 0xf78c, 0xf758, 0xf724, 0xf6ef,
	0xf6ba, 0xf684, 0xf64e, 0xf616, 0xf5df, 0xf5a6, 0xf56e, 0xf534,
	0xf4fa, 0xf4bf, 0xf484, 0xf448, 0xf40c, 0xf3cf, 0xf391, 0xf353,
	0xf314, 0xf2d5, 0xf295, 0xf254, 0xf213, 0xf1d2, 0xf18f, 0xf14c,
	0xf109, 0xf0c5, 0xf080, 0xf03b, 0xeff5, 0xefaf, 0xef68, 0xef21,
	0xeed9, 0xee90, 0xee47, 0xedfd, 0xedb3, 0xed68, 0xed1c, 0xecd0,
	0xec83, 0xec36, 0xebe8, 0xeb9a, 0xeb4b, 0xeafc, 0xeaab, 0xea5b,
	0xea0a, 0xe9b8, 0xe966, 0xe913, 0xe8bf, 0xe86b, 0xe817, 0xe7c2,
	0xe76c, 0xe716, 0xe6bf, 0xe667, 0xe610, 0xe5b7, 0xe55e, 0xe504,
	0xe4aa, 0xe450, 0xe3f4, 0xe399, 0xe33c, 0xe2df, 0xe282, 0xe224,
	0xe1c6, 0xe167, 0xe107, 0xe0a7, 0xe046, 0xdfe5, 0xdf83, 0xdf21,
	0xdebe, 0xde5b, 0xddf7, 0xdd92, 0xdd2d, 0xdcc8, 0xdc62, 0xdbfb,
	0xdb94, 0xdb2c, 0xdac4, 0xda5c, 0xd9f2, 0xd989, 0xd91e, 0xd8b4,
	0xd848, 0xd7dc, 0xd770, 0xd703, 0xd696, 0xd628, 0xd5ba, 0xd54b,
	0xd4db, 0xd46b, 0xd3fb, 0xd38a, 0xd318, 0xd2a6, 0xd234, 0xd1c1,
	0xd14d, 0xd0d9, 0xd065, 0xcff0, 0xcf7a, 0xcf04, 0xce8e, 0xce17,
	0xcd9f, 0xcd27, 0xccae, 0xcc35, 0xcbbc, 0xcb42, 0xcac7, 0xca4d,
	0xc9d1, 0xc955, 0xc8d9, 0xc85c, 0xc7de, 0xc761, 0xc6e2, 0xc663,
	0xc5e4, 0xc564, 0xc4e4, 0xc463, 0xc3e2, 0xc360, 0xc2de, 0xc25c,
	0xc1d8, 0xc155, 0xc0d1, 0xc04c, 0xbfc7, 0xbf42, 0xbebc, 0xbe36,
	0xbdaf, 0xbd28, 0xbca0, 0xbc18, 0xbb8f, 0xbb06, 0xba7d, 0xb9f3,
	0xb968, 0xb8dd, 0xb852, 0xb7c6, 0xb73a, 0xb6ad, 0xb620, 0xb593,
	0xb505, 0xb477, 0xb3e8, 0xb358, 0xb2c9, 0xb239, 0xb1a8, 0xb117,
	0xb086, 0xaff4, 0xaf62, 0xaecf, 0xae3c, 0xada8, 0xad14, 0xac80,
	0xabeb, 0xab56, 0xaac1, 0xaa2a, 0xa994, 0xa8fd, 0xa866, 0xa7ce,
	0xa736, 0xa69e, 0xa605, 0xa56c, 0xa4d2, 0xa438, 0xa39e, 0xa303,
	0xa268, 0xa1cc, 0xa130, 0xa094, 0x9ff7, 0x9f5a, 0x9ebc, 0x9e1e,
	0x9d80, 0x9ce1, 0x9c42, 0x9ba3, 0x9b03, 0x9a63, 0x99c2, 0x9921,
	0x9880, 0x97de, 0x973c, 0x969a, 0x95f7, 0x9554, 0x94b0, 0x940c,
	0x9368, 0x92c4, 0x921f, 0x9179, 0x90d4, 0x902e, 0x8f88, 0x8ee1,
	0x8e3a, 0x8d93, 0x8ceb, 0x8c43, 0x8b9a, 0x8af2, 0x8a49, 0x899f,
	0x88f6, 0x884c, 0x87a1, 0x86f7, 0x864c, 0x85a0, 0x84f5, 0x8449,
	0x839c, 0x82f0, 0x8243, 0x8195, 0x80e8, 0x803a, 0x7f8c, 0x7edd,
	0x7e2f, 0x7d7f, 0x7cd0, 0x7c20, 0x7b70, 0x7ac0, 0x7a10, 0x795f,
	0x78ad, 0x77fc, 0x774a, 0x7698, 0x75e6, 0x7533, 0x7480, 0x73cd,
	0x731a, 0x7266, 0x71b2, 0x70fe, 0x7049, 0x6f94, 0x6edf, 0x6e2a,
	0x6d74, 0x6cbe, 0x6c08, 0x6b52, 0x6a9b, 0x69e4, 0x692d, 0x6876,
	0x67be, 0x6706, 0x664e, 0x6595, 0x64dd, 0x6424, 0x636b, 0x62b1,
	0x61f8, 0x613e, 0x6084, 0x5fc9, 0x5f0f, 0x5e54, 0x5d99, 0x5cde,
	0x5c22, 0x5b66, 0x5aaa, 0x59ee, 0x5932, 0x5875, 0x57b9, 0x56fc,
	0x563e, 0x5581, 0x54c3, 0x5406, 0x5348, 0x5289, 0x51cb, 0x510c,
	0x504d, 0x4f8e, 0x4ecf, 0x4e10, 0x4d50, 0x4c90, 0x4bd1, 0x4b10,
	0x4a50, 0x4990, 0x48cf, 0x480e, 0x474d, 0x468c, 0x45cb, 0x4509,
	0x4447, 0x4385, 0x42c3, 0x4201, 0x413f, 0x407c, 0x3fba, 0x3ef7,
	0x3e34, 0x3d71, 0x3cae, 0x3bea, 0x3b27, 0x3a63, 0x399f, 0x38db,
	0x3817, 0x3753, 0x368e, 0x35ca, 0x3505, 0x3440, 0x337c, 0x32b7,
	0x31f1, 0x312c, 0x3067, 0x2fa1, 0x2edc, 0x2e16, 0x2d50, 0x2c8a,
	0x2bc4, 0x2afe, 0x2a38, 0x2971, 0x28ab, 0x27e4, 0x271e, 0x2657,
	0x2590, 0x24c9, 0x2402, 0x233b, 0x2274, 0x21ad, 0x20e5, 0x201e,
	0x1f56, 0x1e8f, 0x1dc7, 0x1cff, 0x1c38, 0x1b70, 0x1aa8, 0x19e0,
	0x1918, 0x1850, 0x1787, 0x16bf, 0x15f7, 0x152e, 0x1466, 0x139e,
	0x12d5, 0x120d, 0x1144, 0x107b, 0x0fb3, 0x0eea, 0x0e21, 0x0d59,
	0x0c90, 0x0bc7, 0x0afe, 0x0a35, 0x096c, 0x08a3, 0x07da, 0x0711,
	0x0648, 0x057f, 0x04b6, 0x03ed, 0x0324, 0x025b, 0x0192, 0x00c9};
int isin(int x) {
	x = x & (2*SIN_SIZE-1);
	if (x>=SIN_SIZE) return -Sin[x-SIN_SIZE]; else return Sin[x];
}

