/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6735M. Copyright MediaTek Inc. (C) 2013.
 * Tue Nov 08 17:42:10 2016
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH
#ifdef __cplusplus
extern "C" {
#endif
#define CUST_EINTF_TRIGGER_RISING     			1    //High Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_FALLING    			2    //Low Polarity and Edge Sensitive
#define CUST_EINTF_TRIGGER_HIGH      				4    //High Polarity and Level Sensitive
#define CUST_EINTF_TRIGGER_LOW       				8    //Low Polarity and Level Sensitive
#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1
//////////////////////////////////////////////////////////////////////////////


#define CUST_EINT_MSDC1_INS_NUM              5
#define CUST_EINT_MSDC1_INS_DEBOUNCE_CN      1
#define CUST_EINT_MSDC1_INS_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_MSDC1_INS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_ACCDET_NUM              6
#define CUST_EINT_ACCDET_DEBOUNCE_CN      256
#define CUST_EINT_ACCDET_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE

#define CUST_EINT_TOUCH_NUM              10
#define CUST_EINT_TOUCH_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_TYPE							CUST_EINTF_TRIGGER_FALLING
#define CUST_EINT_TOUCH_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_ALS_NUM              65
#define CUST_EINT_ALS_DEBOUNCE_CN      0
#define CUST_EINT_ALS_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_ALS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_GSE_1_NUM              66
#define CUST_EINT_GSE_1_DEBOUNCE_CN      0
#define CUST_EINT_GSE_1_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_GSE_1_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_GYRO_NUM              67
#define CUST_EINT_GYRO_DEBOUNCE_CN      0
#define CUST_EINT_GYRO_TYPE							CUST_EINTF_TRIGGER_LOW
#define CUST_EINT_GYRO_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE

#define CUST_EINT_EXT_BUCK_OC_NUM              78
#define CUST_EINT_EXT_BUCK_OC_DEBOUNCE_CN      0
#define CUST_EINT_EXT_BUCK_OC_TYPE							CUST_EINTF_TRIGGER_HIGH
#define CUST_EINT_EXT_BUCK_OC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
#endif //_CUST_EINT_H


