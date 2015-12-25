#ifndef __FONT_H__
#define __FONT_H__

#define FONT_WIDTH 8
#define FONT_HEIGHT 16

static const unsigned int CHAR_FONT_BITMAP[95][16]=
	{{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00022000u, 0x000cf000u, 0x000ce000u, 0x000ac000u, 0x0008d000u, 0x0008c000u, 0x00045000u, 0x003ff300u, 0x002dd200u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000100u, 0x00c76f00u, 0x00e83f00u, 0x00a63b00u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00212100u, 0x0098b500u, 0x0098b700u, 0x0098ba00u, 0x06ffff80u, 0x007b8900u, 0x03bdcd50u, 0x04cdcf50u, 0x003a5c00u, 0x005f5d00u, 0x00162400u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00089000u, 0x03effe20u, 0x04f40fb0u, 0x00105fb0u, 0x006ffe20u, 0x05fc5000u, 0x08f108b0u, 0x03fecfc0u, 0x003be320u, 0x0003f000u, 0x00003000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00008600u, 0x000cab90u, 0x000f15d0u, 0x0467dd30u, 0x028aa400u, 0x003b7a80u, 0x05d8c100u, 0x09a0e500u, 0x01cf8000u, 0x00010000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x0016c900u, 0x006fdf70u, 0x00011f70u, 0x0330bf10u, 0x0ae8fdc0u, 0x00df42f4u, 0x04ff8cf3u, 0x07c8ff80u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x0008b000u, 0x0009d000u, 0x0007a000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00b60000u, 0x004f4000u, 0x000de000u, 0x0006f400u, 0x0003f700u, 0x0003f800u, 0x0005f500u, 0x000af000u, 0x002f6000u, 0x00ba0000u, 0x00300000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00003d10u, 0x0000f900u, 0x000af000u, 0x000fb000u, 0x003f7000u, 0x003f7000u, 0x001f9000u, 0x000cf000u, 0x0002f600u, 0x00006d00u, 0x00000210u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x0006a000u, 0x0248a240u, 0x05dcdd80u, 0x001df400u, 0x00a95e00u, 0x00100200u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00088000u, 0x000dd000u, 0x000cc000u, 0x7ffffff7u, 0x387ee783u, 0x000cc000u, 0x000cc000u, 0x00022000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00186000u, 0x000ff100u, 0x0005f400u, 0x0000eb00u, 0x00005800u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x0bffffe1u, 0x06888870u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x0009b200u, 0x003ff800u, 0x0009b200u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x04400000u, 0x09e00000u, 0x02f60000u, 0x00ae0000u, 0x003f4000u, 0x000cc000u, 0x0003f300u, 0x0000ea00u, 0x00006f20u, 0x00000f90u, 0x00000440u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00178200u, 0x02efff40u, 0x09f41fd0u, 0x0ed009f3u, 0x1fb007f4u, 0x0fc007f4u, 0x0cf00cf1u, 0x05fb9f90u, 0x007ffa00u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00064000u, 0x001fff20u, 0x000f8210u, 0x000f8000u, 0x000f8000u, 0x000f8000u, 0x000f7000u, 0x08dfed50u, 0x08dbcd50u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00178400u, 0x02ffff80u, 0x07f609b0u, 0x06f30000u, 0x01fd0000u, 0x005fd000u, 0x0101fd00u, 0x08fbefd1u, 0x05dccbc2u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00078400u, 0x00cfff90u, 0x04f90560u, 0x01ea0000u, 0x007ff200u, 0x02fa3000u, 0x04f20000u, 0x01fd7bf2u, 0x004eff80u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00173000u, 0x008fd000u, 0x008fd800u, 0x008f3f20u, 0x007f08a0u, 0x05ef99f3u, 0x04efbcc3u, 0x02df8200u, 0x05dbd500u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x01433420u, 0x07ffffc0u, 0x01332dc0u, 0x004baec0u, 0x04ffcfb0u, 0x0bf20220u, 0x0bf00000u, 0x06fd7bc0u, 0x007effb0u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x05972000u, 0x059cf600u, 0x00006f30u, 0x00284eb0u, 0x03ffffe0u, 0x0bf22ff1u, 0x0cd00ce0u, 0x07faaf70u, 0x008ffa00u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00333330u, 0x02fffff3u, 0x00ea24a2u, 0x009d0000u, 0x004f3000u, 0x000f9000u, 0x000bf000u, 0x0005f500u, 0x0001c800u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00179400u, 0x02ffdf80u, 0x08f109f0u, 0x05f40be0u, 0x00afff30u, 0x02eb7f80u, 0x08f008f0u, 0x05fb7fd0u, 0x007ffc20u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x002bc600u, 0x01ffdf80u, 0x08f30af0u, 0x0bf008f0u, 0x0bfc8fb0u, 0x0afafc10u, 0x03f40000u, 0x009f5110u, 0x0007deb0u, 0x00000100u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x001ce400u, 0x003ff700u, 0x00046000u, 0x0008a100u, 0x003ff800u, 0x0009b200u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x001ce400u, 0x003ff700u, 0x00046000u, 0x00175000u, 0x000ff100u, 0x0005f400u, 0x0000eb00u, 0x00005800u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x17100000u, 0x2efa2000u, 0x006dfb30u, 0x00003ff9u, 0x0004cfb3u, 0x06efb400u, 0x3fa20000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x3ffffff7u, 0x18988893u, 0x3eeeeef7u, 0x18888883u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000083u, 0x00018ff3u, 0x02afe600u, 0x5ff60000u, 0x3afd6000u, 0x002afe70u, 0x000008f6u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00034200u, 0x009fff60u, 0x03f60b80u, 0x03f60000u, 0x009fc200u, 0x0003f800u, 0x00009300u, 0x000bfa00u, 0x0006d600u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x008ff800u, 0x04f65f70u, 0x08f408f0u, 0x07feb4f3u, 0x07f0c9f4u, 0x0af9d6f4u, 0x056936f1u, 0x00000fc0u, 0x00beff20u, 0x00497000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x000acd80u, 0x006fff80u, 0x00db9c00u, 0x02f51f20u, 0x08fdcf80u, 0x0debcdd0u, 0xcff30dfcu, 0xbbd51cbbu, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x008dcbc5u, 0x09fccff5u, 0x0cf20cc0u, 0x04ffffb0u, 0x1de87ec0u, 0x4f800cc0u, 0x1efdcff5u, 0x02bccbc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x1cbff900u, 0x0ff7afb0u, 0x0f4008f5u, 0x030003f8u, 0x000003f8u, 0x150008f5u, 0x4fe7afc0u, 0x05dffa00u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x005bcbc5u, 0x07ffcff5u, 0x1fd00f70u, 0x4f701f80u, 0x4f701f80u, 0x1fd00f70u, 0x07ffcff5u, 0x005bcbc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x2bcccbc5u, 0x4fdbcff5u, 0x3e4a1cc0u, 0x004fffb0u, 0x024f9ec0u, 0x4f320bc0u, 0x4fdbcff5u, 0x2bcccbc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x2bcccbc5u, 0x4fdbcff5u, 0x3e4a0bc0u, 0x004fdfb0u, 0x003f9ec0u, 0x00040bc0u, 0x00008ff5u, 0x00008cc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x0ccffb20u, 0x1ff88fe1u, 0x0f5004f7u, 0x041000fcu, 0xfefe00fdu, 0x7fc505f9u, 0x0fd6aff2u, 0x08effb20u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x5cbbbbc5u, 0x5ffbbff5u, 0x07f00f70u, 0x07ffff70u, 0x08f88f80u, 0x07f00f70u, 0x5ffcbff5u, 0x5cbbbcc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x06dbbd50u, 0x07dffd50u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x05dffd50u, 0x06dbbd50u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x5dbcd300u, 0x5dfec200u, 0x00f70000u, 0x00f80000u, 0x00f800a3u, 0x00f901f4u, 0x00ff8bf4u, 0x004dffa1u, 0x00001000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x5cc8acc5u, 0x5ff9aff5u, 0x00dc0f70u, 0x002fef80u, 0x00bfcf70u, 0x05f70f70u, 0x7ff1bff5u, 0x8d50bcc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x0008dbd9u, 0x0008efe8u, 0x00003f30u, 0x00004f30u, 0x4a004f30u, 0x9f003f30u, 0x9fccdfe8u, 0x5ccccbd9u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0xbc5005cbu, 0xcff00ffcu, 0x3ff33ff3u, 0x4fc99cf4u, 0x4f6ff6f4u, 0x3f2bb2f3u, 0xcfc00cfcu, 0xbcb00bcbu, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x5cc808d9u, 0x5ff73ff9u, 0x0cc0cfe0u, 0x0cb4faf1u, 0x0cce76f0u, 0x0bfe07f0u, 0x0cf44ff9u, 0x08b05dc9u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x009ffb20u, 0x0bfa8fe1u, 0x3f8004f9u, 0x8f3000fdu, 0x8f3000fdu, 0x5f8004f9u, 0x0bfa8fe1u, 0x009ffb20u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x029ccbc2u, 0x1efdcfe2u, 0x4f800f70u, 0x2ff88f80u, 0x04dfff70u, 0x00000f70u, 0x0005dfe2u, 0x0005dbc2u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x009ffb20u, 0x0cfa8ff2u, 0x5f8004f9u, 0x8f3000fdu, 0x8f4001fcu, 0x3fa007f7u, 0x09fecfc0u, 0x004bec00u, 0x2b8bdf50u, 0x19b64a70u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x01adcbc5u, 0x0dfccff5u, 0x0fc00cc0u, 0x08fccfb0u, 0x00dfdfb0u, 0x07fb0cc0u, 0xbff07ff5u, 0xbc308cc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00001000u, 0x07eefc20u, 0x08fa8fb0u, 0x07700cf1u, 0x005befb0u, 0x0affb610u, 0x1fd000e3u, 0x0df44ef4u, 0x03dffde3u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x3cccccc3u, 0x8fcffcf8u, 0x9f0cc0f9u, 0x5a0cc0a5u, 0x000cc000u, 0x000cc000u, 0x05dffd50u, 0x05dbbd50u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x9cd44dbbu, 0x8ff44ffcu, 0x0cc007f0u, 0x0cc008f0u, 0x0cc008f0u, 0x0cd008f0u, 0x08fa8fc0u, 0x01bffd30u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x9cd51cbbu, 0x9ff41efdu, 0x0bc009f0u, 0x04f20fb0u, 0x00f73f50u, 0x009daf00u, 0x003ff900u, 0x000ac200u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0xbcb02cbbu, 0xdfc01dfdu, 0x1f2a74f1u, 0x1e6fc9f0u, 0x0dba8de0u, 0x0bf44fb0u, 0x0cf01fc0u, 0x07a00a60u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x2cc77cc5u, 0x2df77ff5u, 0x00d98f10u, 0x001ff400u, 0x004ff400u, 0x01f95f20u, 0x5ff83ff5u, 0x5cc75cc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x2cc77cc5u, 0x2ef87ff5u, 0x00f43f30u, 0x008dea00u, 0x000ef100u, 0x000cc000u, 0x02cffd40u, 0x03dbbd20u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x08cccc60u, 0x08febfc0u, 0x00dc0bc0u, 0x000f8120u, 0x0545f300u, 0x0dd0ae00u, 0x0cfcdfa0u, 0x07cccc90u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x008db200u, 0x0028f400u, 0x0003f300u, 0x0004f300u, 0x0003f300u, 0x0003f300u, 0x0003f300u, 0x0003f300u, 0x0005f400u, 0x008ef300u, 0x00010000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000440u, 0x00000ea0u, 0x00006f20u, 0x0000db00u, 0x0003f300u, 0x000cc000u, 0x003f4000u, 0x00ae0000u, 0x02f60000u, 0x09f00000u, 0x04400000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x0007cc20u, 0x000de400u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x000cd000u, 0x000afd20u, 0x00001100u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x000ad000u, 0x008fdb00u, 0x05e20d70u, 0x02100020u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x88888888u, 0xddddddddu, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00005e40u, 0x0009c610u, 0x00020000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00145200u, 0x02fecf90u, 0x08f20320u, 0x07fded50u, 0x07f10bf3u, 0x2efc7cf3u, 0x2c89ff80u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000585u, 0x00000cfbu, 0x00010cc0u, 0x02cfdeb0u, 0x0df8bfb0u, 0x3f800dc0u, 0x4f800db0u, 0x0df8bfe5u, 0x02cfd8d9u, 0x00010000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x02034100u, 0x1effff50u, 0x1fd44df3u, 0x051003f8u, 0x020005f7u, 0x0ef88ff1u, 0x02cffc20u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x05883000u, 0x0cff6000u, 0x0cc01000u, 0x0cecfd30u, 0x0bfc7ff2u, 0x0ce004f8u, 0x0be004f8u, 0x5ffb7ff2u, 0x5d8bfd40u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00044000u, 0x03ffff50u, 0x0ed009f2u, 0x3fdcccf7u, 0x164338f6u, 0x0ed67fe0u, 0x05dffb20u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x09db4000u, 0x0bcff200u, 0x0005f400u, 0x05ffffa0u, 0x028afa40u, 0x0003f300u, 0x0003f300u, 0x02cdfe80u, 0x02ccbd80u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00004200u, 0x3fccff80u, 0x0afa2cf4u, 0x07f003f8u, 0x07f306f7u, 0x07ffcff1u, 0x08f7b920u, 0x06f72320u, 0x00bfffa0u, 0x00024300u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000783u, 0x00000ff7u, 0x00141f80u, 0x02efdf70u, 0x07f58f70u, 0x08f00f80u, 0x07f00f70u, 0x2ef88ff5u, 0x2cc77cc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x0009d000u, 0x0009e000u, 0x00011000u, 0x000aff30u, 0x000cf710u, 0x000cc000u, 0x000cc000u, 0x0adffda0u, 0x0adbbda0u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x000e7000u, 0x000e7000u, 0x00010000u, 0x007fffd0u, 0x008f8860u, 0x008f0000u, 0x008f1000u, 0x008f0000u, 0x008f0000u, 0x007f6350u, 0x000cfff2u, 0x00003420u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000583u, 0x00000cf7u, 0x00000cc0u, 0x0dfc0cc0u, 0x03bf2cc0u, 0x002fffb0u, 0x00fd7fb0u, 0x5ff80cf5u, 0x5cc808d5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00058810u, 0x000cff30u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x000cc000u, 0x0adffda0u, 0x0adbbda0u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x01403201u, 0x1dfdffdfu, 0x4f7ed5fcu, 0x4f2bc0f8u, 0x3f2bc0f8u, 0xdf9fb7feu, 0xbb8d88ccu, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00140010u, 0x02efdcf7u, 0x07f67fc2u, 0x08f00f70u, 0x07f00f70u, 0x2ef88ff5u, 0x2cc77cc5u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00034100u, 0x03efff50u, 0x0ef54df3u, 0x4f8003f8u, 0x3f9005f7u, 0x0cfa8ff1u, 0x00affc20u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00142010u, 0x05fffcf7u, 0x1ff47fe3u, 0x4f700cc0u, 0x3fa00ec0u, 0x0bfdefb0u, 0x008d8dc0u, 0x00002dd2u, 0x0007ffffu, 0x00014343u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00014200u, 0x3fdeff80u, 0x0afa2cf4u, 0x07f003f8u, 0x07f306f7u, 0x07ffcfe1u, 0x07f7ca10u, 0x1af30000u, 0xcfff7000u, 0x24341000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x03300100u, 0x3ffb7ff3u, 0x2c8cff81u, 0x0000af00u, 0x00007f00u, 0x008defc2u, 0x008dcbc2u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x01235200u, 0x07fecf80u, 0x04910af0u, 0x02aeffa0u, 0x0efc8530u, 0x0fe109f0u, 0x04deeec0u, 0x00011000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00007e00u, 0x00008f00u, 0x02dcefd5u, 0x02dcefd5u, 0x00007f00u, 0x00007f00u, 0x1fc7df00u, 0x07eff500u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00100010u, 0x07fa0af7u, 0x07f50cf2u, 0x08f00cb0u, 0x07f00cc0u, 0x2efc8fb0u, 0x2c99fd20u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00100110u, 0x3ff96ffbu, 0x0bf52ff5u, 0x00f60f70u, 0x008d8f10u, 0x000ef900u, 0x0007f100u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x01000010u, 0xefe00bffu, 0x8f7344fcu, 0x0f4bf1f4u, 0x0dabc9f2u, 0x09f96fd0u, 0x04f40f80u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00100100u, 0x0df99ff3u, 0x06f98f91u, 0x000ef500u, 0x006dd900u, 0x2df86fd2u, 0x2cc76cc2u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00100110u, 0x3ff96ffbu, 0x0bf52ff5u, 0x00f60f70u, 0x008d8f00u, 0x001ef700u, 0x0008f100u, 0x0005f831u, 0x000ffff6u, 0x00034341u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00010000u, 0x06feffc0u, 0x01df6df1u, 0x000d8160u, 0x0570da00u, 0x09fbdfd0u, 0x04cccbb1u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x02d90000u, 0x019f9000u, 0x000cc000u, 0x000cc000u, 0x000be100u, 0x0002ff40u, 0x0008f910u, 0x000dc000u, 0x000cc000u, 0x000eb000u, 0x02ff4000u, 0x00410000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x0008d000u, 0x0008d000u, 0x0008d000u, 0x0008d000u, 0x0008d000u, 0x0008d000u, 0x0008d000u, 0x0008d000u, 0x0008d000u, 0x0008d000u, 0x0008c000u, 0x0008d000u, 0x0008c000u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00007d30u, 0x0005fb20u, 0x0008f000u, 0x0007f100u, 0x000bf000u, 0x01ff6000u, 0x007fb000u, 0x0008f000u, 0x0008f000u, 0x0008f200u, 0x0002ef50u, 0x00001400u, 0x00000000u, 0x00000000u, 0x00000000u},
	{0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00013400u, 0x2ffffff2u, 0x05cb6372u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u}};

#endif