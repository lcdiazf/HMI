const unsigned char font[96][7] = {
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00}, //  
	{0x5f,0x00,0x00,0x00,0x00,0x00,0x00}, // !
	{0x03,0x00,0x03,0x00,0x00,0x00,0x00}, // "
	{0x14,0x7f,0x14,0x7f,0x14,0x00,0x00}, // #
	{0x6f,0x49,0xc9,0x7b,0x00,0x00,0x00}, // $
	{0x63,0x13,0x08,0x64,0x63,0x00,0x00}, // %
	{0x7f,0xc9,0x49,0x63,0x00,0x00,0x00}, // &
	{0x03,0x00,0x00,0x00,0x00,0x00,0x00}, // '
	{0x3e,0x41,0x00,0x00,0x00,0x00,0x00}, // (
	{0x41,0x3e,0x00,0x00,0x00,0x00,0x00}, // )
	{0x0a,0x04,0x1f,0x04,0x0a,0x00,0x00}, // *
	{0x08,0x08,0x3e,0x08,0x08,0x00,0x00}, // +
	{0xc0,0x00,0x00,0x00,0x00,0x00,0x00}, // ,
	{0x08,0x08,0x08,0x08,0x00,0x00,0x00}, // -
	{0x40,0x00,0x00,0x00,0x00,0x00,0x00}, // .
	{0x60,0x10,0x08,0x04,0x03,0x00,0x00}, // /
	{0x7f,0x41,0x41,0x7f,0x00,0x00,0x00}, // 0
	{0x01,0x7f,0x00,0x00,0x00,0x00,0x00}, // 1
	{0x7b,0x49,0x49,0x6f,0x00,0x00,0x00}, // 2
	{0x63,0x49,0x49,0x7f,0x00,0x00,0x00}, // 3
	{0x0f,0x08,0x08,0x7f,0x00,0x00,0x00}, // 4
	{0x6f,0x49,0x49,0x7b,0x00,0x00,0x00}, // 5
	{0x7f,0x49,0x49,0x7b,0x00,0x00,0x00}, // 6
	{0x03,0x01,0x01,0x7f,0x00,0x00,0x00}, // 7
	{0x7f,0x49,0x49,0x7f,0x00,0x00,0x00}, // 8
	{0x0f,0x09,0x09,0x7f,0x00,0x00,0x00}, // 9
	{0x66,0x66,0x00,0x00,0x00,0x00,0x00}, // :
	{0xc1,0x00,0x00,0x00,0x00,0x00,0x00}, // ;
	{0x08,0x14,0x22,0x00,0x00,0x00,0x00}, // <
	{0x14,0x14,0x14,0x14,0x00,0x00,0x00}, // =
	{0x22,0x14,0x08,0x00,0x00,0x00,0x00}, // >
	{0x03,0x59,0x09,0x0f,0x00,0x00,0x00}, // ?
	{0x30,0x60,0x30,0x18,0x0c,0x06,0x00}, // @/Mod:Check
	{0x7f,0x09,0x09,0x7f,0x00,0x00,0x00}, // A
	{0x7f,0x49,0x49,0x77,0x00,0x00,0x00}, // B
	{0x7f,0x41,0x41,0x63,0x00,0x00,0x00}, // C
	{0x7f,0x41,0x41,0x3e,0x00,0x00,0x00}, // D
	{0x7f,0x49,0x49,0x63,0x00,0x00,0x00}, // E
	{0x7f,0x09,0x09,0x03,0x00,0x00,0x00}, // F
	{0x7f,0x41,0x49,0x7b,0x00,0x00,0x00}, // G
	{0x7f,0x08,0x08,0x7f,0x00,0x00,0x00}, // H
	{0x41,0x7f,0x41,0x00,0x00,0x00,0x00}, // I
	{0x60,0x40,0x40,0x7f,0x00,0x00,0x00}, // J
	{0x7f,0x08,0x08,0x77,0x00,0x00,0x00}, // K
	{0x7f,0x40,0x40,0x60,0x00,0x00,0x00}, // L
	{0x7f,0x01,0x01,0x7f,0x01,0x01,0x7f}, // M
	{0x7f,0x01,0x01,0x7f,0x00,0x00,0x00}, // N
	{0x7f,0x41,0x41,0x7f,0x00,0x00,0x00}, // O
	{0x7f,0x09,0x09,0x0f,0x00,0x00,0x00}, // P
	{0x7f,0x41,0xc1,0x7f,0x00,0x00,0x00}, // Q
	{0x7f,0x09,0x09,0x77,0x00,0x00,0x00}, // R
	{0x6f,0x49,0x49,0x7b,0x00,0x00,0x00}, // S
	{0x01,0x01,0x7f,0x01,0x01,0x00,0x00}, // T
	{0x7f,0x40,0x40,0x7f,0x00,0x00,0x00}, // U
	{0x7f,0x20,0x10,0x0f,0x00,0x00,0x00}, // V
	{0x7f,0x40,0x40,0x7f,0x40,0x40,0x7f}, // W
	{0x77,0x08,0x08,0x77,0x00,0x00,0x00}, // X
	{0x6f,0x48,0x48,0x7f,0x00,0x00,0x00}, // Y
	{0x71,0x49,0x49,0x47,0x00,0x00,0x00}, // Z
	{0x7f,0x41,0x00,0x00,0x00,0x00,0x00}, // [
	{0x03,0x04,0x08,0x10,0x60,0x00,0x00}, // "\"
	{0x41,0x7f,0x00,0x00,0x00,0x00,0x00}, // ]
	{0x0f,0x09,0x09,0x0f,0x00,0x00,0x00}, // ^/Mod:°
	{0x80,0x80,0x80,0x80,0x00,0x00,0x00}, // _
	{0x03,0x00,0x00,0x00,0x00,0x00,0x00}, // `
	{0x74,0x54,0x54,0x7c,0x00,0x00,0x00}, // a
	{0x7f,0x44,0x44,0x7c,0x00,0x00,0x00}, // b
	{0x7c,0x44,0x44,0x6c,0x00,0x00,0x00}, // c
	{0x7c,0x44,0x44,0x7f,0x00,0x00,0x00}, // d
	{0x7c,0x54,0x54,0x5c,0x00,0x00,0x00}, // e
	{0x7f,0x05,0x05,0x01,0x00,0x00,0x00}, // f
	{0xbc,0xa4,0xa4,0xfc,0x00,0x00,0x00}, // g
	{0x7f,0x04,0x04,0x7c,0x00,0x00,0x00}, // h
	{0x7d,0x00,0x00,0x00,0x00,0x00,0x00}, // i
	{0x80,0xfd,0x00,0x00,0x00,0x00,0x00}, // j
	{0x7f,0x04,0x04,0x7a,0x00,0x00,0x00}, // k
	{0x7f,0x00,0x00,0x00,0x00,0x00,0x00}, // l
	{0x7c,0x04,0x04,0x7c,0x04,0x04,0x7c}, // m
	{0x7c,0x04,0x04,0x7c,0x00,0x00,0x00}, // n
	{0x7c,0x44,0x44,0x7c,0x00,0x00,0x00}, // o
	{0xfc,0x44,0x44,0x7c,0x00,0x00,0x00}, // p
	{0x7c,0x44,0x44,0xfc,0x00,0x00,0x00}, // q
	{0x7c,0x04,0x04,0x0c,0x00,0x00,0x00}, // r
	{0x5c,0x54,0x54,0x74,0x00,0x00,0x00}, // s
	{0x7f,0x44,0x44,0x60,0x00,0x00,0x00}, // t
	{0x7c,0x40,0x40,0x7c,0x00,0x00,0x00}, // u
	{0x7c,0x20,0x10,0x0c,0x00,0x00,0x00}, // v
	{0x7c,0x40,0x40,0x7c,0x40,0x40,0x7c}, // w
	{0x6c,0x10,0x10,0x6c,0x00,0x00,0x00}, // x
	{0xbc,0xa0,0xa0,0xfc,0x00,0x00,0x00}, // y
	{0x64,0x54,0x54,0x4c,0x00,0x00,0x00}, // z
	{0x08,0x3e,0x41,0x00,0x00,0x00,0x00}, // {
	{0xff,0x00,0x00,0x00,0x00,0x00,0x00}, // |
	{0x41,0x3e,0x08,0x00,0x00,0x00,0x00}, // }
	{0x1c,0x04,0x1c,0x10,0x1c,0x00,0x00}, // ~
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};
