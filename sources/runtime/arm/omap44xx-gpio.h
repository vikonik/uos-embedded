///////////////////////////////////////////////////////////////
//                 OMAP 4430 GPIO Registers
///////////////////////////////////////////////////////////////

#define GPIO_REVISION(i)        OMAP_R(((i)==1) ? (0x4A310000) : (0x48055000+(i)*0x2000))
#define GPIO_SYSCONFIG(i)       OMAP_R(((i)==1) ? (0x4A310010) : (0x48055010+(i)*0x2000))
#define GPIO_IRQSTATUS_RAW_0(i) OMAP_R(((i)==1) ? (0x4A310024) : (0x48055024+(i)*0x2000))
#define GPIO_IRQSTATUS_RAW_1(i) OMAP_R(((i)==1) ? (0x4A310028) : (0x48055028+(i)*0x2000))
#define GPIO_IRQSTATUS_0(i)     OMAP_R(((i)==1) ? (0x4A31002C) : (0x4805502C+(i)*0x2000))
#define GPIO_IRQSTATUS_1(i)     OMAP_R(((i)==1) ? (0x4A310030) : (0x48055030+(i)*0x2000))
#define GPIO_IRQSTATUS_SET_0(i) OMAP_R(((i)==1) ? (0x4A310034) : (0x48055034+(i)*0x2000))
#define GPIO_IRQSTATUS_SET_1(i) OMAP_R(((i)==1) ? (0x4A310038) : (0x48055038+(i)*0x2000))
#define GPIO_IRQSTATUS_CLR_0(i) OMAP_R(((i)==1) ? (0x4A31003C) : (0x4805503C+(i)*0x2000))
#define GPIO_IRQSTATUS_CLR_1(i) OMAP_R(((i)==1) ? (0x4A310040) : (0x48055040+(i)*0x2000))
#define GPIO_IRQWAKEN_0(i)      OMAP_R(((i)==1) ? (0x4A310044) : (0x48055044+(i)*0x2000))
#define GPIO_IRQWAKEN_1(i)      OMAP_R(((i)==1) ? (0x4A310048) : (0x48055048+(i)*0x2000))
#define GPIO_SYSSTATUS(i)       OMAP_R(((i)==1) ? (0x4A310114) : (0x48055114+(i)*0x2000))
#define GPIO_WAKEUPENABLE(i)    OMAP_R(((i)==1) ? (0x4A310120) : (0x48055120+(i)*0x2000))
#define GPIO_CTRL(i)            OMAP_R(((i)==1) ? (0x4A310130) : (0x48055130+(i)*0x2000))
#define GPIO_OE(i)              OMAP_R(((i)==1) ? (0x4A310134) : (0x48055134+(i)*0x2000))
#define GPIO_DATAIN(i)          OMAP_R(((i)==1) ? (0x4A310138) : (0x48055138+(i)*0x2000))
#define GPIO_DATAOUT(i)         OMAP_R(((i)==1) ? (0x4A31013C) : (0x4805513C+(i)*0x2000))
#define GPIO_LEVELDETECT0(i)    OMAP_R(((i)==1) ? (0x4A310140) : (0x48055140+(i)*0x2000))
#define GPIO_LEVELDETECT1(i)    OMAP_R(((i)==1) ? (0x4A310144) : (0x48055144+(i)*0x2000))
#define GPIO_RISINGDETECT(i)    OMAP_R(((i)==1) ? (0x4A310148) : (0x48055148+(i)*0x2000))
#define GPIO_FALLINGDETECT(i)   OMAP_R(((i)==1) ? (0x4A31014C) : (0x4805514C+(i)*0x2000))
#define GPIO_DEBOUNCENABLE(i)   OMAP_R(((i)==1) ? (0x4A310150) : (0x48055150+(i)*0x2000))
#define GPIO_DEBOUNCINGTIME(i)  OMAP_R(((i)==1) ? (0x4A310154) : (0x48055154+(i)*0x2000))
#define GPIO_CLEARWKUPENA(i)    OMAP_R(((i)==1) ? (0x4A310180) : (0x48055180+(i)*0x2000))
#define GPIO_SETWKUENA(i)       OMAP_R(((i)==1) ? (0x4A310184) : (0x48055184+(i)*0x2000))
#define GPIO_CLEARDATAOUT(i)    OMAP_R(((i)==1) ? (0x4A310190) : (0x48055190+(i)*0x2000))
#define GPIO_SETDATAOUT(i)      OMAP_R(((i)==1) ? (0x4A310194) : (0x48055194+(i)*0x2000))

