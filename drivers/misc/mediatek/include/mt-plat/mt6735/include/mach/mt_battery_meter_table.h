#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#endif

#define RBAT_PULL_UP_VOLT          1800

typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance;
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

#if (BAT_NTC_10 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 68237},
	{-15, 53650},
	{-10, 42506},
	{ -5, 33892},
	{  0, 27219},
	{  5, 22021},
	{ 10, 17926},
	{ 15, 14674},
	{ 20, 12081},
	{ 25, 10000},
	{ 30, 8315},
	{ 35, 6948},
	{ 40, 5834},
	{ 45, 4917},
	{ 50, 4161},
	{ 55, 3535},
	{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 483954},
	{-15, 360850},
	{-10, 271697},
	{ -5, 206463},
	{  0, 158214},
	{  5, 122259},
	{ 10, 95227},
	{ 15, 74730},
	{ 20, 59065},
	{ 25, 47000},
	{ 30, 37643},
	{ 35, 30334},
	{ 40, 24591},
	{ 45, 20048},
	{ 50, 16433},
	{ 55, 13539},
	{ 60, 11210}
	};
#endif

/* T0 -10C */
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
  { 1, 4330 },
  { 1, 4323 },
  { 2, 4316 },
  { 2, 4309 },
  { 3, 4303 },
  { 3, 4296 },
  { 4, 4291 },
  { 4, 4285 },
  { 5, 4279 },
  { 5, 4273 },
  { 6, 4267 },
  { 6, 4261 },
  { 7, 4255 },
  { 7, 4249 },
  { 8, 4243 },
  { 8, 4238 },
  { 9, 4232 },
  { 9, 4226 },
  { 10, 4220 },
  { 10, 4215 },
  { 11, 4209 },
  { 11, 4203 },
  { 12, 4198 },
  { 12, 4192 },
  { 13, 4187 },
  { 14, 4181 },
  { 14, 4176 },
  { 15, 4171 },
  { 15, 4165 },
  { 16, 4160 },
  { 16, 4154 },
  { 17, 4149 },
  { 17, 4144 },
  { 18, 4138 },
  { 18, 4133 },
  { 19, 4127 },
  { 19, 4122 },
  { 20, 4117 },
  { 20, 4111 },
  { 21, 4106 },
  { 21, 4101 },
  { 22, 4096 },
  { 22, 4091 },
  { 23, 4086 },
  { 23, 4081 },
  { 24, 4077 },
  { 24, 4073 },
  { 25, 4070 },
  { 25, 4068 },
  { 26, 4066 },
  { 26, 4063 },
  { 27, 4059 },
  { 27, 4052 },
  { 28, 4044 },
  { 29, 4036 },
  { 29, 4027 },
  { 30, 4018 },
  { 30, 4010 },
  { 31, 4004 },
  { 31, 3998 },
  { 32, 3993 },
  { 32, 3989 },
  { 33, 3986 },
  { 33, 3982 },
  { 34, 3980 },
  { 34, 3978 },
  { 35, 3975 },
  { 35, 3973 },
  { 36, 3971 },
  { 36, 3968 },
  { 37, 3965 },
  { 37, 3961 },
  { 38, 3957 },
  { 38, 3954 },
  { 39, 3950 },
  { 39, 3947 },
  { 40, 3942 },
  { 40, 3939 },
  { 41, 3936 },
  { 42, 3932 },
  { 42, 3929 },
  { 43, 3925 },
  { 43, 3921 },
  { 44, 3917 },
  { 44, 3913 },
  { 45, 3908 },
  { 45, 3903 },
  { 46, 3897 },
  { 46, 3890 },
  { 47, 3884 },
  { 47, 3878 },
  { 48, 3872 },
  { 48, 3867 },
  { 49, 3863 },
  { 49, 3859 },
  { 50, 3855 },
  { 50, 3852 },
  { 51, 3849 },
  { 51, 3846 },
  { 52, 3843 },
  { 52, 3840 },
  { 53, 3838 },
  { 53, 3835 },
  { 54, 3833 },
  { 55, 3830 },
  { 55, 3828 },
  { 56, 3826 },
  { 56, 3824 },
  { 57, 3821 },
  { 57, 3819 },
  { 58, 3817 },
  { 58, 3815 },
  { 59, 3813 },
  { 59, 3812 },
  { 60, 3810 },
  { 60, 3808 },
  { 61, 3806 },
  { 61, 3805 },
  { 62, 3803 },
  { 62, 3801 },
  { 63, 3800 },
  { 63, 3798 },
  { 64, 3797 },
  { 64, 3795 },
  { 65, 3793 },
  { 65, 3792 },
  { 66, 3791 },
  { 66, 3789 },
  { 67, 3788 },
  { 67, 3787 },
  { 68, 3786 },
  { 69, 3784 },
  { 69, 3784 },
  { 70, 3782 },
  { 70, 3781 },
  { 71, 3780 },
  { 71, 3779 },
  { 72, 3777 },
  { 72, 3776 },
  { 73, 3775 },
  { 73, 3774 },
  { 74, 3772 },
  { 74, 3770 },
  { 75, 3768 },
  { 75, 3766 },
  { 76, 3764 },
  { 76, 3763 },
  { 77, 3761 },
  { 77, 3760 },
  { 78, 3759 },
  { 78, 3757 },
  { 79, 3756 },
  { 79, 3754 },
  { 80, 3753 },
  { 80, 3752 },
  { 81, 3750 },
  { 81, 3748 },
  { 82, 3746 },
  { 83, 3744 },
  { 83, 3743 },
  { 84, 3741 },
  { 84, 3738 },
  { 85, 3736 },
  { 85, 3733 },
  { 86, 3730 },
  { 86, 3726 },
  { 87, 3721 },
  { 87, 3718 },
  { 88, 3715 },
  { 88, 3711 },
  { 89, 3706 },
  { 89, 3701 },
  { 90, 3694 },
  { 90, 3690 },
  { 91, 3688 },
  { 91, 3688 },
  { 92, 3658 },
  { 92, 3657 },
  { 93, 3627 },
  { 93, 3626 },
  { 94, 3597 },
  { 94, 3596 },
  { 95, 3575 },
  { 96, 3544 },
  { 96, 3543 },
  { 97, 3512 },
  { 97, 3511 },
  { 98, 3495 },
  { 98, 3494 },
  { 99, 3463 },
  { 99, 3462 },
  { 100, 3425 },
  { 100, 3424 }
};

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
  { 0, 4338 },
  { 1, 4330 },
  { 1, 4323 },
  { 2, 4316 },
  { 2, 4309 },
  { 3, 4303 },
  { 3, 4296 },
  { 4, 4291 },
  { 4, 4285 },
  { 5, 4279 },
  { 5, 4273 },
  { 6, 4267 },
  { 6, 4261 },
  { 7, 4255 },
  { 7, 4249 },
  { 8, 4243 },
  { 8, 4238 },
  { 9, 4232 },
  { 9, 4226 },
  { 10, 4220 },
  { 10, 4215 },
  { 11, 4209 },
  { 11, 4203 },
  { 12, 4198 },
  { 12, 4192 },
  { 13, 4187 },
  { 14, 4181 },
  { 14, 4176 },
  { 15, 4171 },
  { 15, 4165 },
  { 16, 4160 },
  { 16, 4154 },
  { 17, 4149 },
  { 17, 4144 },
  { 18, 4138 },
  { 18, 4133 },
  { 19, 4127 },
  { 19, 4122 },
  { 20, 4117 },
  { 20, 4111 },
  { 21, 4106 },
  { 21, 4101 },
  { 22, 4096 },
  { 22, 4091 },
  { 23, 4086 },
  { 23, 4081 },
  { 24, 4077 },
  { 24, 4073 },
  { 25, 4070 },
  { 25, 4068 },
  { 26, 4066 },
  { 26, 4063 },
  { 27, 4059 },
  { 27, 4052 },
  { 28, 4044 },
  { 29, 4036 },
  { 29, 4027 },
  { 30, 4018 },
  { 30, 4010 },
  { 31, 4004 },
  { 31, 3998 },
  { 32, 3993 },
  { 32, 3989 },
  { 33, 3986 },
  { 33, 3982 },
  { 34, 3980 },
  { 34, 3978 },
  { 35, 3975 },
  { 35, 3973 },
  { 36, 3971 },
  { 36, 3968 },
  { 37, 3965 },
  { 37, 3961 },
  { 38, 3957 },
  { 38, 3954 },
  { 39, 3950 },
  { 39, 3947 },
  { 40, 3942 },
  { 40, 3939 },
  { 41, 3936 },
  { 42, 3932 },
  { 42, 3929 },
  { 43, 3925 },
  { 43, 3921 },
  { 44, 3917 },
  { 44, 3913 },
  { 45, 3908 },
  { 45, 3903 },
  { 46, 3897 },
  { 46, 3890 },
  { 47, 3884 },
  { 47, 3878 },
  { 48, 3872 },
  { 48, 3867 },
  { 49, 3863 },
  { 49, 3859 },
  { 50, 3855 },
  { 50, 3852 },
  { 51, 3849 },
  { 51, 3846 },
  { 52, 3843 },
  { 52, 3840 },
  { 53, 3838 },
  { 53, 3835 },
  { 54, 3833 },
  { 55, 3830 },
  { 55, 3828 },
  { 56, 3826 },
  { 56, 3824 },
  { 57, 3821 },
  { 57, 3819 },
  { 58, 3817 },
  { 58, 3815 },
  { 59, 3813 },
  { 59, 3812 },
  { 60, 3810 },
  { 60, 3808 },
  { 61, 3806 },
  { 61, 3805 },
  { 62, 3803 },
  { 62, 3801 },
  { 63, 3800 },
  { 63, 3798 },
  { 64, 3797 },
  { 64, 3795 },
  { 65, 3793 },
  { 65, 3792 },
  { 66, 3791 },
  { 66, 3789 },
  { 67, 3788 },
  { 67, 3787 },
  { 68, 3786 },
  { 69, 3784 },
  { 69, 3784 },
  { 70, 3782 },
  { 70, 3781 },
  { 71, 3780 },
  { 71, 3779 },
  { 72, 3777 },
  { 72, 3776 },
  { 73, 3775 },
  { 73, 3774 },
  { 74, 3772 },
  { 74, 3770 },
  { 75, 3768 },
  { 75, 3766 },
  { 76, 3764 },
  { 76, 3763 },
  { 77, 3761 },
  { 77, 3760 },
  { 78, 3759 },
  { 78, 3757 },
  { 79, 3756 },
  { 79, 3754 },
  { 80, 3753 },
  { 80, 3752 },
  { 81, 3750 },
  { 81, 3748 },
  { 82, 3746 },
  { 83, 3744 },
  { 83, 3743 },
  { 84, 3741 },
  { 84, 3738 },
  { 85, 3736 },
  { 85, 3733 },
  { 86, 3730 },
  { 86, 3726 },
  { 87, 3721 },
  { 87, 3718 },
  { 88, 3715 },
  { 88, 3711 },
  { 89, 3706 },
  { 89, 3701 },
  { 90, 3694 },
  { 90, 3690 },
  { 91, 3688 },
  { 91, 3688 },
  { 92, 3658 },
  { 92, 3657 },
  { 93, 3627 },
  { 93, 3626 },
  { 94, 3597 },
  { 94, 3596 },
  { 95, 3575 },
  { 96, 3544 },
  { 96, 3543 },
  { 97, 3512 },
  { 97, 3511 },
  { 98, 3495 },
  { 98, 3494 },
  { 99, 3463 },
  { 99, 3462 },
  { 100, 3425 },
  { 100, 3424 }
};

/* T2 25C */
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
  { 0, 4338 },
  { 1, 4330 },
  { 1, 4323 },
  { 2, 4316 },
  { 2, 4309 },
  { 3, 4303 },
  { 3, 4296 },
  { 4, 4291 },
  { 4, 4285 },
  { 5, 4279 },
  { 5, 4273 },
  { 6, 4267 },
  { 6, 4261 },
  { 7, 4255 },
  { 7, 4249 },
  { 8, 4243 },
  { 8, 4238 },
  { 9, 4232 },
  { 9, 4226 },
  { 10, 4220 },
  { 10, 4215 },
  { 11, 4209 },
  { 11, 4203 },
  { 12, 4198 },
  { 12, 4192 },
  { 13, 4187 },
  { 14, 4181 },
  { 14, 4176 },
  { 15, 4171 },
  { 15, 4165 },
  { 16, 4160 },
  { 16, 4154 },
  { 17, 4149 },
  { 17, 4144 },
  { 18, 4138 },
  { 18, 4133 },
  { 19, 4127 },
  { 19, 4122 },
  { 20, 4117 },
  { 20, 4111 },
  { 21, 4106 },
  { 21, 4101 },
  { 22, 4096 },
  { 22, 4091 },
  { 23, 4086 },
  { 23, 4081 },
  { 24, 4077 },
  { 24, 4073 },
  { 25, 4070 },
  { 25, 4068 },
  { 26, 4066 },
  { 26, 4063 },
  { 27, 4059 },
  { 27, 4052 },
  { 28, 4044 },
  { 29, 4036 },
  { 29, 4027 },
  { 30, 4018 },
  { 30, 4010 },
  { 31, 4004 },
  { 31, 3998 },
  { 32, 3993 },
  { 32, 3989 },
  { 33, 3986 },
  { 33, 3982 },
  { 34, 3980 },
  { 34, 3978 },
  { 35, 3975 },
  { 35, 3973 },
  { 36, 3971 },
  { 36, 3968 },
  { 37, 3965 },
  { 37, 3961 },
  { 38, 3957 },
  { 38, 3954 },
  { 39, 3950 },
  { 39, 3947 },
  { 40, 3942 },
  { 40, 3939 },
  { 41, 3936 },
  { 42, 3932 },
  { 42, 3929 },
  { 43, 3925 },
  { 43, 3921 },
  { 44, 3917 },
  { 44, 3913 },
  { 45, 3908 },
  { 45, 3903 },
  { 46, 3897 },
  { 46, 3890 },
  { 47, 3884 },
  { 47, 3878 },
  { 48, 3872 },
  { 48, 3867 },
  { 49, 3863 },
  { 49, 3859 },
  { 50, 3855 },
  { 50, 3852 },
  { 51, 3849 },
  { 51, 3846 },
  { 52, 3843 },
  { 52, 3840 },
  { 53, 3838 },
  { 53, 3835 },
  { 54, 3833 },
  { 55, 3830 },
  { 55, 3828 },
  { 56, 3826 },
  { 56, 3824 },
  { 57, 3821 },
  { 57, 3819 },
  { 58, 3817 },
  { 58, 3815 },
  { 59, 3813 },
  { 59, 3812 },
  { 60, 3810 },
  { 60, 3808 },
  { 61, 3806 },
  { 61, 3805 },
  { 62, 3803 },
  { 62, 3801 },
  { 63, 3800 },
  { 63, 3798 },
  { 64, 3797 },
  { 64, 3795 },
  { 65, 3793 },
  { 65, 3792 },
  { 66, 3791 },
  { 66, 3789 },
  { 67, 3788 },
  { 67, 3787 },
  { 68, 3786 },
  { 69, 3784 },
  { 69, 3784 },
  { 70, 3782 },
  { 70, 3781 },
  { 71, 3780 },
  { 71, 3779 },
  { 72, 3777 },
  { 72, 3776 },
  { 73, 3775 },
  { 73, 3774 },
  { 74, 3772 },
  { 74, 3770 },
  { 75, 3768 },
  { 75, 3766 },
  { 76, 3764 },
  { 76, 3763 },
  { 77, 3761 },
  { 77, 3760 },
  { 78, 3759 },
  { 78, 3757 },
  { 79, 3756 },
  { 79, 3754 },
  { 80, 3753 },
  { 80, 3752 },
  { 81, 3750 },
  { 81, 3748 },
  { 82, 3746 },
  { 83, 3744 },
  { 83, 3743 },
  { 84, 3741 },
  { 84, 3738 },
  { 85, 3736 },
  { 85, 3733 },
  { 86, 3730 },
  { 86, 3726 },
  { 87, 3721 },
  { 87, 3718 },
  { 88, 3715 },
  { 88, 3711 },
  { 89, 3706 },
  { 89, 3701 },
  { 90, 3694 },
  { 90, 3690 },
  { 91, 3688 },
  { 91, 3688 },
  { 92, 3658 },
  { 92, 3657 },
  { 93, 3627 },
  { 93, 3626 },
  { 94, 3597 },
  { 94, 3596 },
  { 95, 3575 },
  { 96, 3544 },
  { 96, 3543 },
  { 97, 3512 },
  { 97, 3511 },
  { 98, 3495 },
  { 98, 3494 },
  { 99, 3463 },
  { 99, 3462 },
  { 100, 3425 },
  { 100, 3424 }
};

/* T3 50C */
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
  { 0, 4338 },
  { 1, 4330 },
  { 1, 4323 },
  { 2, 4316 },
  { 2, 4309 },
  { 3, 4303 },
  { 3, 4296 },
  { 4, 4291 },
  { 4, 4285 },
  { 5, 4279 },
  { 5, 4273 },
  { 6, 4267 },
  { 6, 4261 },
  { 7, 4255 },
  { 7, 4249 },
  { 8, 4243 },
  { 8, 4238 },
  { 9, 4232 },
  { 9, 4226 },
  { 10, 4220 },
  { 10, 4215 },
  { 11, 4209 },
  { 11, 4203 },
  { 12, 4198 },
  { 12, 4192 },
  { 13, 4187 },
  { 14, 4181 },
  { 14, 4176 },
  { 15, 4171 },
  { 15, 4165 },
  { 16, 4160 },
  { 16, 4154 },
  { 17, 4149 },
  { 17, 4144 },
  { 18, 4138 },
  { 18, 4133 },
  { 19, 4127 },
  { 19, 4122 },
  { 20, 4117 },
  { 20, 4111 },
  { 21, 4106 },
  { 21, 4101 },
  { 22, 4096 },
  { 22, 4091 },
  { 23, 4086 },
  { 23, 4081 },
  { 24, 4077 },
  { 24, 4073 },
  { 25, 4070 },
  { 25, 4068 },
  { 26, 4066 },
  { 26, 4063 },
  { 27, 4059 },
  { 27, 4052 },
  { 28, 4044 },
  { 29, 4036 },
  { 29, 4027 },
  { 30, 4018 },
  { 30, 4010 },
  { 31, 4004 },
  { 31, 3998 },
  { 32, 3993 },
  { 32, 3989 },
  { 33, 3986 },
  { 33, 3982 },
  { 34, 3980 },
  { 34, 3978 },
  { 35, 3975 },
  { 35, 3973 },
  { 36, 3971 },
  { 36, 3968 },
  { 37, 3965 },
  { 37, 3961 },
  { 38, 3957 },
  { 38, 3954 },
  { 39, 3950 },
  { 39, 3947 },
  { 40, 3942 },
  { 40, 3939 },
  { 41, 3936 },
  { 42, 3932 },
  { 42, 3929 },
  { 43, 3925 },
  { 43, 3921 },
  { 44, 3917 },
  { 44, 3913 },
  { 45, 3908 },
  { 45, 3903 },
  { 46, 3897 },
  { 46, 3890 },
  { 47, 3884 },
  { 47, 3878 },
  { 48, 3872 },
  { 48, 3867 },
  { 49, 3863 },
  { 49, 3859 },
  { 50, 3855 },
  { 50, 3852 },
  { 51, 3849 },
  { 51, 3846 },
  { 52, 3843 },
  { 52, 3840 },
  { 53, 3838 },
  { 53, 3835 },
  { 54, 3833 },
  { 55, 3830 },
  { 55, 3828 },
  { 56, 3826 },
  { 56, 3824 },
  { 57, 3821 },
  { 57, 3819 },
  { 58, 3817 },
  { 58, 3815 },
  { 59, 3813 },
  { 59, 3812 },
  { 60, 3810 },
  { 60, 3808 },
  { 61, 3806 },
  { 61, 3805 },
  { 62, 3803 },
  { 62, 3801 },
  { 63, 3800 },
  { 63, 3798 },
  { 64, 3797 },
  { 64, 3795 },
  { 65, 3793 },
  { 65, 3792 },
  { 66, 3791 },
  { 66, 3789 },
  { 67, 3788 },
  { 67, 3787 },
  { 68, 3786 },
  { 69, 3784 },
  { 69, 3784 },
  { 70, 3782 },
  { 70, 3781 },
  { 71, 3780 },
  { 71, 3779 },
  { 72, 3777 },
  { 72, 3776 },
  { 73, 3775 },
  { 73, 3774 },
  { 74, 3772 },
  { 74, 3770 },
  { 75, 3768 },
  { 75, 3766 },
  { 76, 3764 },
  { 76, 3763 },
  { 77, 3761 },
  { 77, 3760 },
  { 78, 3759 },
  { 78, 3757 },
  { 79, 3756 },
  { 79, 3754 },
  { 80, 3753 },
  { 80, 3752 },
  { 81, 3750 },
  { 81, 3748 },
  { 82, 3746 },
  { 83, 3744 },
  { 83, 3743 },
  { 84, 3741 },
  { 84, 3738 },
  { 85, 3736 },
  { 85, 3733 },
  { 86, 3730 },
  { 86, 3726 },
  { 87, 3721 },
  { 87, 3718 },
  { 88, 3715 },
  { 88, 3711 },
  { 89, 3706 },
  { 89, 3701 },
  { 90, 3694 },
  { 90, 3690 },
  { 91, 3688 },
  { 91, 3688 },
  { 92, 3658 },
  { 92, 3657 },
  { 93, 3627 },
  { 93, 3626 },
  { 94, 3597 },
  { 94, 3596 },
  { 95, 3575 },
  { 96, 3544 },
  { 96, 3543 },
  { 97, 3512 },
  { 97, 3511 },
  { 98, 3495 },
  { 98, 3494 },
  { 99, 3463 },
  { 99, 3462 },
  { 100, 3425 },
  { 100, 3424 }
};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3 */
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

/* T0 -10C */
R_PROFILE_STRUCT r_profile_t0[] = {
  { 108, 4338 },
  { 108, 4330 },
  { 108, 4323 },
  { 110, 4316 },
  { 108, 4309 },
  { 110, 4303 },
  { 110, 4296 },
  { 113, 4291 },
  { 113, 4285 },
  { 113, 4279 },
  { 113, 4273 },
  { 113, 4267 },
  { 113, 4261 },
  { 113, 4255 },
  { 113, 4249 },
  { 110, 4243 },
  { 113, 4238 },
  { 113, 4232 },
  { 110, 4226 },
  { 110, 4220 },
  { 113, 4215 },
  { 113, 4209 },
  { 110, 4203 },
  { 110, 4198 },
  { 110, 4192 },
  { 113, 4187 },
  { 110, 4181 },
  { 113, 4176 },
  { 113, 4171 },
  { 113, 4165 },
  { 113, 4160 },
  { 110, 4154 },
  { 113, 4149 },
  { 115, 4144 },
  { 113, 4138 },
  { 113, 4133 },
  { 113, 4127 },
  { 113, 4122 },
  { 115, 4117 },
  { 113, 4111 },
  { 113, 4106 },
  { 113, 4101 },
  { 113, 4096 },
  { 120, 4091 },
  { 120, 4086 },
  { 120, 4081 },
  { 125, 4077 },
  { 125, 4073 },
  { 128, 4070 },
  { 130, 4068 },
  { 130, 4066 },
  { 130, 4063 },
  { 130, 4059 },
  { 128, 4052 },
  { 125, 4044 },
  { 128, 4036 },
  { 128, 4027 },
  { 128, 4018 },
  { 125, 4010 },
  { 128, 4004 },
  { 125, 3998 },
  { 125, 3993 },
  { 125, 3989 },
  { 128, 3986 },
  { 125, 3982 },
  { 128, 3980 },
  { 130, 3978 },
  { 128, 3975 },
  { 128, 3973 },
  { 130, 3971 },
  { 128, 3968 },
  { 128, 3965 },
  { 128, 3961 },
  { 128, 3957 },
  { 130, 3954 },
  { 130, 3950 },
  { 133, 3947 },
  { 130, 3942 },
  { 130, 3939 },
  { 133, 3936 },
  { 133, 3932 },
  { 138, 3929 },
  { 140, 3925 },
  { 138, 3921 },
  { 140, 3917 },
  { 140, 3913 },
  { 140, 3908 },
  { 138, 3903 },
  { 135, 3897 },
  { 133, 3890 },
  { 130, 3884 },
  { 128, 3878 },
  { 123, 3872 },
  { 120, 3867 },
  { 120, 3863 },
  { 115, 3859 },
  { 115, 3855 },
  { 115, 3852 },
  { 115, 3849 },
  { 113, 3846 },
  { 113, 3843 },
  { 110, 3840 },
  { 113, 3838 },
  { 110, 3835 },
  { 113, 3833 },
  { 110, 3830 },
  { 110, 3828 },
  { 113, 3826 },
  { 113, 3824 },
  { 110, 3821 },
  { 110, 3819 },
  { 110, 3817 },
  { 110, 3815 },
  { 110, 3813 },
  { 113, 3812 },
  { 113, 3810 },
  { 113, 3808 },
  { 110, 3806 },
  { 113, 3805 },
  { 113, 3803 },
  { 113, 3801 },
  { 113, 3800 },
  { 113, 3798 },
  { 115, 3797 },
  { 113, 3795 },
  { 113, 3793 },
  { 113, 3792 },
  { 115, 3791 },
  { 113, 3789 },
  { 113, 3788 },
  { 115, 3787 },
  { 115, 3786 },
  { 113, 3784 },
  { 118, 3784 },
  { 115, 3782 },
  { 115, 3781 },
  { 115, 3780 },
  { 115, 3779 },
  { 115, 3777 },
  { 113, 3776 },
  { 115, 3775 },
  { 115, 3774 },
  { 113, 3772 },
  { 113, 3770 },
  { 113, 3768 },
  { 110, 3766 },
  { 110, 3764 },
  { 113, 3763 },
  { 110, 3761 },
  { 113, 3760 },
  { 113, 3759 },
  { 110, 3757 },
  { 113, 3756 },
  { 113, 3754 },
  { 115, 3753 },
  { 115, 3752 },
  { 115, 3750 },
  { 115, 3748 },
  { 115, 3746 },
  { 115, 3744 },
  { 115, 3743 },
  { 115, 3741 },
  { 115, 3738 },
  { 118, 3736 },
  { 115, 3733 },
  { 115, 3730 },
  { 115, 3726 },
  { 113, 3721 },
  { 115, 3718 },
  { 115, 3715 },
  { 115, 3711 },
  { 113, 3706 },
  { 115, 3701 },
  { 110, 3694 },
  { 110, 3690 },
  { 110, 3688 },
  { 110, 3688 },
  { 110, 3658 },
  { 110, 3657 },
  { 110, 3627 },
  { 113, 3626 },
  { 115, 3597 },
  { 113, 3596 },
  { 115, 3575 },
  { 115, 3544 },
  { 115, 3543 },
  { 118, 3512 },
  { 120, 3511 },
  { 118, 3495 },
  { 120, 3494 },
  { 115, 3463 },
  { 118, 3462 },
  { 123, 3425 },
  { 120, 3424 }
};

/* T1 0C */
R_PROFILE_STRUCT r_profile_t1[] = {
  { 108, 4338 },
  { 108, 4330 },
  { 108, 4323 },
  { 110, 4316 },
  { 108, 4309 },
  { 110, 4303 },
  { 110, 4296 },
  { 113, 4291 },
  { 113, 4285 },
  { 113, 4279 },
  { 113, 4273 },
  { 113, 4267 },
  { 113, 4261 },
  { 113, 4255 },
  { 113, 4249 },
  { 110, 4243 },
  { 113, 4238 },
  { 113, 4232 },
  { 110, 4226 },
  { 110, 4220 },
  { 113, 4215 },
  { 113, 4209 },
  { 110, 4203 },
  { 110, 4198 },
  { 110, 4192 },
  { 113, 4187 },
  { 110, 4181 },
  { 113, 4176 },
  { 113, 4171 },
  { 113, 4165 },
  { 113, 4160 },
  { 110, 4154 },
  { 113, 4149 },
  { 115, 4144 },
  { 113, 4138 },
  { 113, 4133 },
  { 113, 4127 },
  { 113, 4122 },
  { 115, 4117 },
  { 113, 4111 },
  { 113, 4106 },
  { 113, 4101 },
  { 113, 4096 },
  { 120, 4091 },
  { 120, 4086 },
  { 120, 4081 },
  { 125, 4077 },
  { 125, 4073 },
  { 128, 4070 },
  { 130, 4068 },
  { 130, 4066 },
  { 130, 4063 },
  { 130, 4059 },
  { 128, 4052 },
  { 125, 4044 },
  { 128, 4036 },
  { 128, 4027 },
  { 128, 4018 },
  { 125, 4010 },
  { 128, 4004 },
  { 125, 3998 },
  { 125, 3993 },
  { 125, 3989 },
  { 128, 3986 },
  { 125, 3982 },
  { 128, 3980 },
  { 130, 3978 },
  { 128, 3975 },
  { 128, 3973 },
  { 130, 3971 },
  { 128, 3968 },
  { 128, 3965 },
  { 128, 3961 },
  { 128, 3957 },
  { 130, 3954 },
  { 130, 3950 },
  { 133, 3947 },
  { 130, 3942 },
  { 130, 3939 },
  { 133, 3936 },
  { 133, 3932 },
  { 138, 3929 },
  { 140, 3925 },
  { 138, 3921 },
  { 140, 3917 },
  { 140, 3913 },
  { 140, 3908 },
  { 138, 3903 },
  { 135, 3897 },
  { 133, 3890 },
  { 130, 3884 },
  { 128, 3878 },
  { 123, 3872 },
  { 120, 3867 },
  { 120, 3863 },
  { 115, 3859 },
  { 115, 3855 },
  { 115, 3852 },
  { 115, 3849 },
  { 113, 3846 },
  { 113, 3843 },
  { 110, 3840 },
  { 113, 3838 },
  { 110, 3835 },
  { 113, 3833 },
  { 110, 3830 },
  { 110, 3828 },
  { 113, 3826 },
  { 113, 3824 },
  { 110, 3821 },
  { 110, 3819 },
  { 110, 3817 },
  { 110, 3815 },
  { 110, 3813 },
  { 113, 3812 },
  { 113, 3810 },
  { 113, 3808 },
  { 110, 3806 },
  { 113, 3805 },
  { 113, 3803 },
  { 113, 3801 },
  { 113, 3800 },
  { 113, 3798 },
  { 115, 3797 },
  { 113, 3795 },
  { 113, 3793 },
  { 113, 3792 },
  { 115, 3791 },
  { 113, 3789 },
  { 113, 3788 },
  { 115, 3787 },
  { 115, 3786 },
  { 113, 3784 },
  { 118, 3784 },
  { 115, 3782 },
  { 115, 3781 },
  { 115, 3780 },
  { 115, 3779 },
  { 115, 3777 },
  { 113, 3776 },
  { 115, 3775 },
  { 115, 3774 },
  { 113, 3772 },
  { 113, 3770 },
  { 113, 3768 },
  { 110, 3766 },
  { 110, 3764 },
  { 113, 3763 },
  { 110, 3761 },
  { 113, 3760 },
  { 113, 3759 },
  { 110, 3757 },
  { 113, 3756 },
  { 113, 3754 },
  { 115, 3753 },
  { 115, 3752 },
  { 115, 3750 },
  { 115, 3748 },
  { 115, 3746 },
  { 115, 3744 },
  { 115, 3743 },
  { 115, 3741 },
  { 115, 3738 },
  { 118, 3736 },
  { 115, 3733 },
  { 115, 3730 },
  { 115, 3726 },
  { 113, 3721 },
  { 115, 3718 },
  { 115, 3715 },
  { 115, 3711 },
  { 113, 3706 },
  { 115, 3701 },
  { 110, 3694 },
  { 110, 3690 },
  { 110, 3688 },
  { 110, 3688 },
  { 110, 3658 },
  { 110, 3657 },
  { 110, 3627 },
  { 113, 3626 },
  { 115, 3597 },
  { 113, 3596 },
  { 115, 3575 },
  { 115, 3544 },
  { 115, 3543 },
  { 118, 3512 },
  { 120, 3511 },
  { 118, 3495 },
  { 120, 3494 },
  { 115, 3463 },
  { 118, 3462 },
  { 123, 3425 },
  { 120, 3424 }
};

/* T2 25C */
R_PROFILE_STRUCT r_profile_t2[] = {
  { 108, 4338 },
  { 108, 4330 },
  { 108, 4323 },
  { 110, 4316 },
  { 108, 4309 },
  { 110, 4303 },
  { 110, 4296 },
  { 113, 4291 },
  { 113, 4285 },
  { 113, 4279 },
  { 113, 4273 },
  { 113, 4267 },
  { 113, 4261 },
  { 113, 4255 },
  { 113, 4249 },
  { 110, 4243 },
  { 113, 4238 },
  { 113, 4232 },
  { 110, 4226 },
  { 110, 4220 },
  { 113, 4215 },
  { 113, 4209 },
  { 110, 4203 },
  { 110, 4198 },
  { 110, 4192 },
  { 113, 4187 },
  { 110, 4181 },
  { 113, 4176 },
  { 113, 4171 },
  { 113, 4165 },
  { 113, 4160 },
  { 110, 4154 },
  { 113, 4149 },
  { 115, 4144 },
  { 113, 4138 },
  { 113, 4133 },
  { 113, 4127 },
  { 113, 4122 },
  { 115, 4117 },
  { 113, 4111 },
  { 113, 4106 },
  { 113, 4101 },
  { 113, 4096 },
  { 120, 4091 },
  { 120, 4086 },
  { 120, 4081 },
  { 125, 4077 },
  { 125, 4073 },
  { 128, 4070 },
  { 130, 4068 },
  { 130, 4066 },
  { 130, 4063 },
  { 130, 4059 },
  { 128, 4052 },
  { 125, 4044 },
  { 128, 4036 },
  { 128, 4027 },
  { 128, 4018 },
  { 125, 4010 },
  { 128, 4004 },
  { 125, 3998 },
  { 125, 3993 },
  { 125, 3989 },
  { 128, 3986 },
  { 125, 3982 },
  { 128, 3980 },
  { 130, 3978 },
  { 128, 3975 },
  { 128, 3973 },
  { 130, 3971 },
  { 128, 3968 },
  { 128, 3965 },
  { 128, 3961 },
  { 128, 3957 },
  { 130, 3954 },
  { 130, 3950 },
  { 133, 3947 },
  { 130, 3942 },
  { 130, 3939 },
  { 133, 3936 },
  { 133, 3932 },
  { 138, 3929 },
  { 140, 3925 },
  { 138, 3921 },
  { 140, 3917 },
  { 140, 3913 },
  { 140, 3908 },
  { 138, 3903 },
  { 135, 3897 },
  { 133, 3890 },
  { 130, 3884 },
  { 128, 3878 },
  { 123, 3872 },
  { 120, 3867 },
  { 120, 3863 },
  { 115, 3859 },
  { 115, 3855 },
  { 115, 3852 },
  { 115, 3849 },
  { 113, 3846 },
  { 113, 3843 },
  { 110, 3840 },
  { 113, 3838 },
  { 110, 3835 },
  { 113, 3833 },
  { 110, 3830 },
  { 110, 3828 },
  { 113, 3826 },
  { 113, 3824 },
  { 110, 3821 },
  { 110, 3819 },
  { 110, 3817 },
  { 110, 3815 },
  { 110, 3813 },
  { 113, 3812 },
  { 113, 3810 },
  { 113, 3808 },
  { 110, 3806 },
  { 113, 3805 },
  { 113, 3803 },
  { 113, 3801 },
  { 113, 3800 },
  { 113, 3798 },
  { 115, 3797 },
  { 113, 3795 },
  { 113, 3793 },
  { 113, 3792 },
  { 115, 3791 },
  { 113, 3789 },
  { 113, 3788 },
  { 115, 3787 },
  { 115, 3786 },
  { 113, 3784 },
  { 118, 3784 },
  { 115, 3782 },
  { 115, 3781 },
  { 115, 3780 },
  { 115, 3779 },
  { 115, 3777 },
  { 113, 3776 },
  { 115, 3775 },
  { 115, 3774 },
  { 113, 3772 },
  { 113, 3770 },
  { 113, 3768 },
  { 110, 3766 },
  { 110, 3764 },
  { 113, 3763 },
  { 110, 3761 },
  { 113, 3760 },
  { 113, 3759 },
  { 110, 3757 },
  { 113, 3756 },
  { 113, 3754 },
  { 115, 3753 },
  { 115, 3752 },
  { 115, 3750 },
  { 115, 3748 },
  { 115, 3746 },
  { 115, 3744 },
  { 115, 3743 },
  { 115, 3741 },
  { 115, 3738 },
  { 118, 3736 },
  { 115, 3733 },
  { 115, 3730 },
  { 115, 3726 },
  { 113, 3721 },
  { 115, 3718 },
  { 115, 3715 },
  { 115, 3711 },
  { 113, 3706 },
  { 115, 3701 },
  { 110, 3694 },
  { 110, 3690 },
  { 110, 3688 },
  { 110, 3688 },
  { 110, 3658 },
  { 110, 3657 },
  { 110, 3627 },
  { 113, 3626 },
  { 115, 3597 },
  { 113, 3596 },
  { 115, 3575 },
  { 115, 3544 },
  { 115, 3543 },
  { 118, 3512 },
  { 120, 3511 },
  { 118, 3495 },
  { 120, 3494 },
  { 115, 3463 },
  { 118, 3462 },
  { 123, 3425 },
  { 120, 3424 }
};

/* T3 50C */
R_PROFILE_STRUCT r_profile_t3[] = {
  { 108, 4338 },
  { 108, 4330 },
  { 108, 4323 },
  { 110, 4316 },
  { 108, 4309 },
  { 110, 4303 },
  { 110, 4296 },
  { 113, 4291 },
  { 113, 4285 },
  { 113, 4279 },
  { 113, 4273 },
  { 113, 4267 },
  { 113, 4261 },
  { 113, 4255 },
  { 113, 4249 },
  { 110, 4243 },
  { 113, 4238 },
  { 113, 4232 },
  { 110, 4226 },
  { 110, 4220 },
  { 113, 4215 },
  { 113, 4209 },
  { 110, 4203 },
  { 110, 4198 },
  { 110, 4192 },
  { 113, 4187 },
  { 110, 4181 },
  { 113, 4176 },
  { 113, 4171 },
  { 113, 4165 },
  { 113, 4160 },
  { 110, 4154 },
  { 113, 4149 },
  { 115, 4144 },
  { 113, 4138 },
  { 113, 4133 },
  { 113, 4127 },
  { 113, 4122 },
  { 115, 4117 },
  { 113, 4111 },
  { 113, 4106 },
  { 113, 4101 },
  { 113, 4096 },
  { 120, 4091 },
  { 120, 4086 },
  { 120, 4081 },
  { 125, 4077 },
  { 125, 4073 },
  { 128, 4070 },
  { 130, 4068 },
  { 130, 4066 },
  { 130, 4063 },
  { 130, 4059 },
  { 128, 4052 },
  { 125, 4044 },
  { 128, 4036 },
  { 128, 4027 },
  { 128, 4018 },
  { 125, 4010 },
  { 128, 4004 },
  { 125, 3998 },
  { 125, 3993 },
  { 125, 3989 },
  { 128, 3986 },
  { 125, 3982 },
  { 128, 3980 },
  { 130, 3978 },
  { 128, 3975 },
  { 128, 3973 },
  { 130, 3971 },
  { 128, 3968 },
  { 128, 3965 },
  { 128, 3961 },
  { 128, 3957 },
  { 130, 3954 },
  { 130, 3950 },
  { 133, 3947 },
  { 130, 3942 },
  { 130, 3939 },
  { 133, 3936 },
  { 133, 3932 },
  { 138, 3929 },
  { 140, 3925 },
  { 138, 3921 },
  { 140, 3917 },
  { 140, 3913 },
  { 140, 3908 },
  { 138, 3903 },
  { 135, 3897 },
  { 133, 3890 },
  { 130, 3884 },
  { 128, 3878 },
  { 123, 3872 },
  { 120, 3867 },
  { 120, 3863 },
  { 115, 3859 },
  { 115, 3855 },
  { 115, 3852 },
  { 115, 3849 },
  { 113, 3846 },
  { 113, 3843 },
  { 110, 3840 },
  { 113, 3838 },
  { 110, 3835 },
  { 113, 3833 },
  { 110, 3830 },
  { 110, 3828 },
  { 113, 3826 },
  { 113, 3824 },
  { 110, 3821 },
  { 110, 3819 },
  { 110, 3817 },
  { 110, 3815 },
  { 110, 3813 },
  { 113, 3812 },
  { 113, 3810 },
  { 113, 3808 },
  { 110, 3806 },
  { 113, 3805 },
  { 113, 3803 },
  { 113, 3801 },
  { 113, 3800 },
  { 113, 3798 },
  { 115, 3797 },
  { 113, 3795 },
  { 113, 3793 },
  { 113, 3792 },
  { 115, 3791 },
  { 113, 3789 },
  { 113, 3788 },
  { 115, 3787 },
  { 115, 3786 },
  { 113, 3784 },
  { 118, 3784 },
  { 115, 3782 },
  { 115, 3781 },
  { 115, 3780 },
  { 115, 3779 },
  { 115, 3777 },
  { 113, 3776 },
  { 115, 3775 },
  { 115, 3774 },
  { 113, 3772 },
  { 113, 3770 },
  { 113, 3768 },
  { 110, 3766 },
  { 110, 3764 },
  { 113, 3763 },
  { 110, 3761 },
  { 113, 3760 },
  { 113, 3759 },
  { 110, 3757 },
  { 113, 3756 },
  { 113, 3754 },
  { 115, 3753 },
  { 115, 3752 },
  { 115, 3750 },
  { 115, 3748 },
  { 115, 3746 },
  { 115, 3744 },
  { 115, 3743 },
  { 115, 3741 },
  { 115, 3738 },
  { 118, 3736 },
  { 115, 3733 },
  { 115, 3730 },
  { 115, 3726 },
  { 113, 3721 },
  { 115, 3718 },
  { 115, 3715 },
  { 115, 3711 },
  { 113, 3706 },
  { 115, 3701 },
  { 110, 3694 },
  { 110, 3690 },
  { 110, 3688 },
  { 110, 3688 },
  { 110, 3658 },
  { 110, 3657 },
  { 110, 3627 },
  { 113, 3626 },
  { 115, 3597 },
  { 113, 3596 },
  { 115, 3575 },
  { 115, 3544 },
  { 115, 3543 },
  { 118, 3512 },
  { 120, 3511 },
  { 118, 3495 },
  { 120, 3494 },
  { 115, 3463 },
  { 118, 3462 },
  { 123, 3425 },
  { 120, 3424 }
};

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3 */
R_PROFILE_STRUCT r_profile_temperature[] = {
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

/* ============================================================
// function prototype
// ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif	/*#ifndef _CUST_BATTERY_METER_TABLE_H*/

