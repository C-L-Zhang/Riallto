// Copyright 2023 Advanced Micro Devices, Inc.
// SPDX-License-Identifier: MIT

#ifndef X_LUT_INV_8B
#define X_LUT_INV_8B

constexpr uint16 num_entries_lut_inv_8b = 256;

// Q0.8 data format
alignas(aie::vector_decl_align) const uint16 lut_inv_8b_ab[] = {
/*bank0*/255,0,128,85,64,51,42,36,/*bank1*/255,0,128,85,64,51,42,36,
/*bank0*/32,28,25,23,21,19,18,17,/*bank1*/32,28,25,23,21,19,18,17,
/*bank0*/16,15,14,13,12,12,11,11,/*bank1*/16,15,14,13,12,12,11,11,
/*bank0*/10,10,9,9,9,8,8,8,/*bank1*/10,10,9,9,9,8,8,8,
/*bank0*/8,7,7,7,7,6,6,6,/*bank1*/8,7,7,7,7,6,6,6,
/*bank0*/6,6,6,5,5,5,5,5,/*bank1*/6,6,6,5,5,5,5,5,
/*bank0*/5,5,5,5,4,4,4,4,/*bank1*/5,5,5,5,4,4,4,4,
/*bank0*/4,4,4,4,4,4,4,4,/*bank1*/4,4,4,4,4,4,4,4,
/*bank0*/4,3,3,3,3,3,3,3,/*bank1*/4,3,3,3,3,3,3,3,
/*bank0*/3,3,3,3,3,3,3,3,/*bank1*/3,3,3,3,3,3,3,3,
/*bank0*/3,3,3,3,3,3,2,2,/*bank1*/3,3,3,3,3,3,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,1,1,1,1,1,1,1,/*bank1*/2,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
};

// Q0.8 data format
alignas(aie::vector_decl_align) const uint16 lut_inv_8b_cd[] = {
/*bank0*/255,0,128,85,64,51,42,36,/*bank1*/255,0,128,85,64,51,42,36,
/*bank0*/32,28,25,23,21,19,18,17,/*bank1*/32,28,25,23,21,19,18,17,
/*bank0*/16,15,14,13,12,12,11,11,/*bank1*/16,15,14,13,12,12,11,11,
/*bank0*/10,10,9,9,9,8,8,8,/*bank1*/10,10,9,9,9,8,8,8,
/*bank0*/8,7,7,7,7,6,6,6,/*bank1*/8,7,7,7,7,6,6,6,
/*bank0*/6,6,6,5,5,5,5,5,/*bank1*/6,6,6,5,5,5,5,5,
/*bank0*/5,5,5,5,4,4,4,4,/*bank1*/5,5,5,5,4,4,4,4,
/*bank0*/4,4,4,4,4,4,4,4,/*bank1*/4,4,4,4,4,4,4,4,
/*bank0*/4,3,3,3,3,3,3,3,/*bank1*/4,3,3,3,3,3,3,3,
/*bank0*/3,3,3,3,3,3,3,3,/*bank1*/3,3,3,3,3,3,3,3,
/*bank0*/3,3,3,3,3,3,2,2,/*bank1*/3,3,3,3,3,3,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,2,2,2,2,2,2,2,/*bank1*/2,2,2,2,2,2,2,2,
/*bank0*/2,1,1,1,1,1,1,1,/*bank1*/2,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
/*bank0*/1,1,1,1,1,1,1,1,/*bank1*/1,1,1,1,1,1,1,1,
};

constexpr uint16 num_entries_lut_inv_16b = 256;

// Q7.9 data format (inv * 85)
alignas(aie::vector_decl_align) const uint16 lut_inv_16b_ab[] = {
/*bank0*/43520,43520,21760,14506,10880,8704,7253,6217,/*bank1*/43520,43520,21760,14506,10880,8704,7253,6217,
/*bank0*/5440,4835,4352,3956,3626,3347,3108,2901,/*bank1*/5440,4835,4352,3956,3626,3347,3108,2901,
/*bank0*/2720,2560,2417,2290,2176,2072,1978,1892,/*bank1*/2720,2560,2417,2290,2176,2072,1978,1892,
/*bank0*/1813,1740,1673,1611,1554,1500,1450,1403,/*bank1*/1813,1740,1673,1611,1554,1500,1450,1403,
/*bank0*/1360,1318,1280,1243,1208,1176,1145,1115,/*bank1*/1360,1318,1280,1243,1208,1176,1145,1115,
/*bank0*/1088,1061,1036,1012,989,967,946,925,/*bank1*/1088,1061,1036,1012,989,967,946,925,
/*bank0*/906,888,870,853,836,821,805,791,/*bank1*/906,888,870,853,836,821,805,791,
/*bank0*/777,763,750,737,725,713,701,690,/*bank1*/777,763,750,737,725,713,701,690,
/*bank0*/680,669,659,649,640,630,621,612,/*bank1*/680,669,659,649,640,630,621,612,
/*bank0*/604,596,588,580,572,565,557,550,/*bank1*/604,596,588,580,572,565,557,550,
/*bank0*/544,537,530,524,518,512,506,500,/*bank1*/544,537,530,524,518,512,506,500,
/*bank0*/494,488,483,478,473,467,462,458,/*bank1*/494,488,483,478,473,467,462,458,
/*bank0*/453,448,444,439,435,430,426,422,/*bank1*/453,448,444,439,435,430,426,422,
/*bank0*/418,414,410,406,402,399,395,392,/*bank1*/418,414,410,406,402,399,395,392,
/*bank0*/388,385,381,378,375,371,368,365,/*bank1*/388,385,381,378,375,371,368,365,
/*bank0*/362,359,356,353,350,348,345,342,/*bank1*/362,359,356,353,350,348,345,342,
/*bank0*/340,337,334,332,329,327,324,322,/*bank1*/340,337,334,332,329,327,324,322,
/*bank0*/320,317,315,313,310,308,306,304,/*bank1*/320,317,315,313,310,308,306,304,
/*bank0*/302,300,298,296,294,292,290,288,/*bank1*/302,300,298,296,294,292,290,288,
/*bank0*/286,284,282,280,278,277,275,273,/*bank1*/286,284,282,280,278,277,275,273,
/*bank0*/272,270,268,266,265,263,262,260,/*bank1*/272,270,268,266,265,263,262,260,
/*bank0*/259,257,256,254,253,251,250,248,/*bank1*/259,257,256,254,253,251,250,248,
/*bank0*/247,245,244,243,241,240,239,237,/*bank1*/247,245,244,243,241,240,239,237,
/*bank0*/236,235,233,232,231,230,229,227,/*bank1*/236,235,233,232,231,230,229,227,
/*bank0*/226,225,224,223,222,220,219,218,/*bank1*/226,225,224,223,222,220,219,218,
/*bank0*/217,216,215,214,213,212,211,210,/*bank1*/217,216,215,214,213,212,211,210,
/*bank0*/209,208,207,206,205,204,203,202,/*bank1*/209,208,207,206,205,204,203,202,
/*bank0*/201,200,199,198,197,196,196,195,/*bank1*/201,200,199,198,197,196,196,195,
/*bank0*/194,193,192,191,190,190,189,188,/*bank1*/194,193,192,191,190,190,189,188,
/*bank0*/187,186,185,185,184,183,182,182,/*bank1*/187,186,185,185,184,183,182,182,
/*bank0*/181,180,179,179,178,177,176,176,/*bank1*/181,180,179,179,178,177,176,176,
/*bank0*/175,174,174,173,172,172,171,170,/*bank1*/175,174,174,173,172,172,171,170,
};

// Q7.9 data format (inv * 85)
alignas(aie::vector_decl_align) const uint16 lut_inv_16b_cd[] = {
/*bank0*/43520,43520,21760,14506,10880,8704,7253,6217,/*bank1*/43520,43520,21760,14506,10880,8704,7253,6217,
/*bank0*/5440,4835,4352,3956,3626,3347,3108,2901,/*bank1*/5440,4835,4352,3956,3626,3347,3108,2901,
/*bank0*/2720,2560,2417,2290,2176,2072,1978,1892,/*bank1*/2720,2560,2417,2290,2176,2072,1978,1892,
/*bank0*/1813,1740,1673,1611,1554,1500,1450,1403,/*bank1*/1813,1740,1673,1611,1554,1500,1450,1403,
/*bank0*/1360,1318,1280,1243,1208,1176,1145,1115,/*bank1*/1360,1318,1280,1243,1208,1176,1145,1115,
/*bank0*/1088,1061,1036,1012,989,967,946,925,/*bank1*/1088,1061,1036,1012,989,967,946,925,
/*bank0*/906,888,870,853,836,821,805,791,/*bank1*/906,888,870,853,836,821,805,791,
/*bank0*/777,763,750,737,725,713,701,690,/*bank1*/777,763,750,737,725,713,701,690,
/*bank0*/680,669,659,649,640,630,621,612,/*bank1*/680,669,659,649,640,630,621,612,
/*bank0*/604,596,588,580,572,565,557,550,/*bank1*/604,596,588,580,572,565,557,550,
/*bank0*/544,537,530,524,518,512,506,500,/*bank1*/544,537,530,524,518,512,506,500,
/*bank0*/494,488,483,478,473,467,462,458,/*bank1*/494,488,483,478,473,467,462,458,
/*bank0*/453,448,444,439,435,430,426,422,/*bank1*/453,448,444,439,435,430,426,422,
/*bank0*/418,414,410,406,402,399,395,392,/*bank1*/418,414,410,406,402,399,395,392,
/*bank0*/388,385,381,378,375,371,368,365,/*bank1*/388,385,381,378,375,371,368,365,
/*bank0*/362,359,356,353,350,348,345,342,/*bank1*/362,359,356,353,350,348,345,342,
/*bank0*/340,337,334,332,329,327,324,322,/*bank1*/340,337,334,332,329,327,324,322,
/*bank0*/320,317,315,313,310,308,306,304,/*bank1*/320,317,315,313,310,308,306,304,
/*bank0*/302,300,298,296,294,292,290,288,/*bank1*/302,300,298,296,294,292,290,288,
/*bank0*/286,284,282,280,278,277,275,273,/*bank1*/286,284,282,280,278,277,275,273,
/*bank0*/272,270,268,266,265,263,262,260,/*bank1*/272,270,268,266,265,263,262,260,
/*bank0*/259,257,256,254,253,251,250,248,/*bank1*/259,257,256,254,253,251,250,248,
/*bank0*/247,245,244,243,241,240,239,237,/*bank1*/247,245,244,243,241,240,239,237,
/*bank0*/236,235,233,232,231,230,229,227,/*bank1*/236,235,233,232,231,230,229,227,
/*bank0*/226,225,224,223,222,220,219,218,/*bank1*/226,225,224,223,222,220,219,218,
/*bank0*/217,216,215,214,213,212,211,210,/*bank1*/217,216,215,214,213,212,211,210,
/*bank0*/209,208,207,206,205,204,203,202,/*bank1*/209,208,207,206,205,204,203,202,
/*bank0*/201,200,199,198,197,196,196,195,/*bank1*/201,200,199,198,197,196,196,195,
/*bank0*/194,193,192,191,190,190,189,188,/*bank1*/194,193,192,191,190,190,189,188,
/*bank0*/187,186,185,185,184,183,182,182,/*bank1*/187,186,185,185,184,183,182,182,
/*bank0*/181,180,179,179,178,177,176,176,/*bank1*/181,180,179,179,178,177,176,176,
/*bank0*/175,174,174,173,172,172,171,170,/*bank1*/175,174,174,173,172,172,171,170,
};

#endif