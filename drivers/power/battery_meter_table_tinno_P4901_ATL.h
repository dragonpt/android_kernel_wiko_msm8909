
// ============================================================
// define
// ============================================================




// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
#ifndef _TINNO_DATA_TYPE_DEFINE
#define _TINNO_DATA_TYPE_DEFINE
typedef struct _BATTERY_Q_COST_PROFILE_STRUC
{
    int  q_cost;
    int  voltage;
} BATTERY_Q_COST_PROFILE_STRUC, *BATTERY_Q_COST_PROFILE_STRUC_P;



typedef struct _R_PROFILE_STRUC
{
    int  resistance; // Ohm
    int  voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;


typedef struct _SCALE_R_PROFILE_STRUC
{
    int  scale; 
    int  bat_current;
} SCALE_R_PROFILE_STRUC;


typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;
#endif

#define TEMPERATURE_T0             110
#define TEMPERATURE_T1             0
#define TEMPERATURE_T2             25
#define TEMPERATURE_T3             50
#define TEMPERATURE_T              255 // This should be fixed, never change the value

// <Qcost, Battery_Voltage> Table
// ============================================================

SCALE_R_PROFILE_STRUC battery_scale_r_profile[]=
{
	{10,400},
	{15,300},
	{20,200},
	{30,100},
};

#define TINNO_BAT_MIN_RESISTANCE  60 
#define TINNO_BAT_RESISTANCE_SCALE_POINT   97


BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_t3[] =
{
{	0 	,	4314	},
{	50 	,	4287	},
{	100 	,	4263	},
{	150 	,	4240	},
{	200 	,	4216	},
{	249 	,	4194	},
{	299 	,	4170	},
{	349 	,	4149	},
{	399 	,	4128	},
{	449 	,	4107	},
{	499 	,	4087	},
{	549 	,	4067	},
{	598 	,	4048	},
{	648 	,	4030	},
{	698 	,	4010	},
{	748 	,	3992	},
{	798 	,	3977	},
{	848 	,	3960	},
{	897 	,	3943	},
{	947 	,	3926	},
{	997 	,	3907	},
{	1047 	,	3889	},
{	1097 	,	3869	},
{	1147 	,	3853	},
{	1197 	,	3842	},
{	1246 	,	3832	},
{	1296 	,	3821	},
{	1346 	,	3812	},
{	1396 	,	3805	},
{	1446 	,	3797	},
{	1496 	,	3790	},
{	1546 	,	3783	},
{	1595 	,	3779	},
{	1645 	,	3772	},
{	1695 	,	3765	},
{	1745 	,	3756	},
{	1795 	,	3744	},
{	1845 	,	3735	},
{	1894 	,	3726	},
{	1944 	,	3720	},
{	1994 	,	3713	},
{	2044 	,	3703	},
{	2094 	,	3692	},
{	2144 	,	3678	},
{	2194 	,	3668	},
{	2243 	,	3667	},
{	2293 	,	3664	},
{	2343 	,	3650	},
{	2393 	,	3574	},
{	2443 	,	3439	},
{	2473 	,	3291	},
{	2477 	,	3279	},
{	2480 	,	3273	},
{	2482 	,	3269	},
{	2484 	,	3266	},
{	2485 	,	3260	},
{	2487 	,	3256	},
{	2487 	,	3254	},
{	2488 	,	3253	},
{	2488 	,	3250	},
{	2488 	,	3248	},
{	2489 	,	3243	},
{	2489 	,	3244	},
{	2489 	,	3244	},
{	2489 	,	3244	},
{	2489 	,	3244	},
{	2489 	,	3243	},
{	2489 	,	3243	},
{	2489 	,	3242	},
{	2489 	,	3242	},
{	2489 	,	3240	},
{	2489 	,	3240	},
{	2489 	,	3239	},
{	2489 	,	3238	},
{	2489 	,	3237	},
{	2489 	,	3237	},
{	2489 	,	3235	},
{	2489 	,	3234	},
{	2489 	,	3233	},
{	2489 	,	3232	},
{	2489 	,	3232	},
{	2489 	,	3230	},
{	2489 	,	3229	},
{	2489 	,	3228	},
{	2489 	,	3225	},
{	2489 	,	3224	},
{	2489 	,	3223	},
{	2489 	,	3222	},
{	2489 	,	3220	},
{	2489 	,	3219	},
{	2490 	,	3218	},
{	2490 	,	3217	},
{	2490 	,	3214	},
{	2490 	,	3212	},
{	2490 	,	3211	},
{	2490 	,	3209	},
{	2490 	,	3208	},
{	2490 	,	3206	},
{	2490 	,	3204	},
{	2490 	,	3203	},
{	2490 	,	3201	},
{	2490 	,	3199	}

};


BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_t2[] =
{
{	0 	,	4338	},
{	50 	,	4308	},
{	100 	,	4283	},
{	150 	,	4261	},
{	200 	,	4237	},
{	250 	,	4215	},
{	300 	,	4193	},
{	350 	,	4173	},
{	400 	,	4151	},
{	449 	,	4129	},
{	499 	,	4108	},
{	549 	,	4090	},
{	599 	,	4075	},
{	649 	,	4064	},
{	699 	,	4028	},
{	749 	,	3998	},
{	799 	,	3979	},
{	849 	,	3971	},
{	899 	,	3961	},
{	949 	,	3943	},
{	999 	,	3924	},
{	1049 	,	3904	},
{	1099 	,	3886	},
{	1148 	,	3870	},
{	1198 	,	3858	},
{	1248 	,	3848	},
{	1298 	,	3837	},
{	1348 	,	3828	},
{	1398 	,	3821	},
{	1448 	,	3812	},
{	1498 	,	3806	},
{	1548 	,	3800	},
{	1598 	,	3795	},
{	1648 	,	3790	},
{	1698 	,	3782	},
{	1748 	,	3777	},
{	1798 	,	3772	},
{	1847 	,	3766	},
{	1897 	,	3760	},
{	1947 	,	3751	},
{	1997 	,	3745	},
{	2047 	,	3738	},
{	2097 	,	3725	},
{	2147 	,	3714	},
{	2197 	,	3699	},
{	2247 	,	3694	},
{	2297 	,	3692	},
{	2347 	,	3688	},
{	2397 	,	3655	},
{	2447 	,	3553	},
{	2497 	,	3359	},
{	2506 	,	3302	},
{	2510 	,	3289	},
{	2512 	,	3284	},
{	2514 	,	3280	},
{	2515 	,	3278	},
{	2516 	,	3276	},
{	2518 	,	3274	},
{	2518 	,	3274	},
{	2519 	,	3273	},
{	2520 	,	3271	},
{	2521 	,	3270	},
{	2521 	,	3269	},
{	2522 	,	3268	},
{	2523 	,	3264	},
{	2523 	,	3263	},
{	2523 	,	3260	},
{	2523 	,	3258	},
{	2523 	,	3258	},
{	2524 	,	3255	},
{	2524 	,	3255	},
{	2524 	,	3255	},
{	2524 	,	3251	},
{	2524 	,	3251	},
{	2524 	,	3250	},
{	2524 	,	3249	},
{	2524 	,	3249	},
{	2524 	,	3248	},
{	2524 	,	3247	},
{	2524 	,	3245	},
{	2524 	,	3244	},
{	2524 	,	3243	},
{	2524 	,	3242	},
{	2524 	,	3240	},
{	2524 	,	3239	},
{	2524 	,	3238	},
{	2524 	,	3237	},
{	2524 	,	3235	},
{	2524 	,	3234	},
{	2524 	,	3230	},
{	2524 	,	3229	},
{	2524 	,	3228	},
{	2524 	,	3227	},
{	2524 	,	3224	},
{	2524 	,	3223	},
{	2525 	,	3220	},
{	2525 	,	3219	},
{	2525 	,	3218	},
{	2525 	,	3216	},
{	2525 	,	3214	},
{	2525 	,	3212	},
{	2525 	,	3211	}

};


BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_t1[] =
{
{	0 	,	4330	},
{	50 	,	4298	},
{	100 	,	4271	},
{	150 	,	4249	},
{	200 	,	4226	},
{	249 	,	4205	},
{	299 	,	4184	},
{	349 	,	4163	},
{	399 	,	4142	},
{	449 	,	4122	},
{	499 	,	4101	},
{	549 	,	4084	},
{	598 	,	4072	},
{	648 	,	4054	},
{	698 	,	4013	},
{	748 	,	3978	},
{	798 	,	3956	},
{	848 	,	3938	},
{	897 	,	3927	},
{	947 	,	3915	},
{	997 	,	3900	},
{	1047 	,	3886	},
{	1097 	,	3872	},
{	1147 	,	3859	},
{	1197 	,	3847	},
{	1246 	,	3836	},
{	1296 	,	3827	},
{	1346 	,	3817	},
{	1396 	,	3810	},
{	1446 	,	3802	},
{	1496 	,	3795	},
{	1545 	,	3788	},
{	1595 	,	3782	},
{	1645 	,	3777	},
{	1695 	,	3774	},
{	1745 	,	3771	},
{	1795 	,	3766	},
{	1845 	,	3762	},
{	1894 	,	3760	},
{	1944 	,	3755	},
{	1994 	,	3748	},
{	2044 	,	3740	},
{	2094 	,	3730	},
{	2144 	,	3719	},
{	2194 	,	3705	},
{	2243 	,	3697	},
{	2293 	,	3692	},
{	2343 	,	3687	},
{	2393 	,	3669	},
{	2442 	,	3597	},
{	2461 	,	3552	},
{	2474 	,	3517	},
{	2484 	,	3490	},
{	2490 	,	3467	},
{	2495 	,	3452	},
{	2499 	,	3440	},
{	2502 	,	3430	},
{	2504 	,	3425	},
{	2506 	,	3420	},
{	2507 	,	3415	},
{	2508 	,	3411	},
{	2510 	,	3409	},
{	2510 	,	3406	},
{	2511 	,	3405	},
{	2512 	,	3404	},
{	2512 	,	3404	},
{	2513 	,	3403	},
{	2514 	,	3402	},
{	2514 	,	3400	},
{	2515 	,	3398	},
{	2515 	,	3398	},
{	2515 	,	3398	},
{	2516 	,	3398	},
{	2516 	,	3398	},
{	2516 	,	3397	},
{	2516 	,	3397	},
{	2517 	,	3397	},
{	2517 	,	3395	},
{	2517 	,	3394	},
{	2517 	,	3394	},
{	2518 	,	3393	},
{	2518 	,	3392	},
{	2518 	,	3389	},
{	2519 	,	3388	},
{	2519 	,	3387	},
{	2519 	,	3385	},
{	2519 	,	3384	},
{	2520 	,	3383	},
{	2520 	,	3382	},
{	2520 	,	3380	},
{	2521 	,	3378	},
{	2521 	,	3377	},
{	2521 	,	3375	},
{	2521 	,	3373	},
{	2522 	,	3372	},
{	2522 	,	3371	},
{	2522 	,	3368	},
{	2522 	,	3366	},
{	2523 	,	3364	},
{	2523 	,	3362	},
{	2523 	,	3358	},
{	2524 	,	3357	}


 }; 	
BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_t0[] =
{
{	0 	,	4333	},
{	50 	,	4294	},
{	100 	,	4266	},
{	150 	,	4241	},
{	200 	,	4219	},
{	250 	,	4196	},
{	300 	,	4174	},
{	349 	,	4152	},
{	399 	,	4129	},
{	449 	,	4108	},
{	499 	,	4091	},
{	549 	,	4075	},
{	599 	,	4049	},
{	649 	,	4003	},
{	699 	,	3971	},
{	749 	,	3950	},
{	799 	,	3935	},
{	848 	,	3924	},
{	898 	,	3912	},
{	948 	,	3900	},
{	998 	,	3888	},
{	1048 	,	3875	},
{	1098 	,	3863	},
{	1148 	,	3852	},
{	1198 	,	3842	},
{	1248 	,	3831	},
{	1298 	,	3822	},
{	1347 	,	3814	},
{	1397 	,	3807	},
{	1447 	,	3800	},
{	1497 	,	3795	},
{	1547 	,	3790	},
{	1597 	,	3786	},
{	1647 	,	3782	},
{	1697 	,	3780	},
{	1747 	,	3775	},
{	1797 	,	3770	},
{	1847 	,	3766	},
{	1896 	,	3761	},
{	1946 	,	3755	},
{	1996 	,	3746	},
{	2046 	,	3738	},
{	2085 	,	3731	},
{	2112 	,	3728	},
{	2134 	,	3724	},
{	2154 	,	3720	},
{	2171 	,	3717	},
{	2187 	,	3714	},
{	2201 	,	3712	},
{	2214 	,	3709	},
{	2226 	,	3708	},
{	2237 	,	3707	},
{	2248 	,	3705	},
{	2258 	,	3704	},
{	2268 	,	3703	},
{	2277 	,	3702	},
{	2285 	,	3700	},
{	2294 	,	3699	},
{	2301 	,	3699	},
{	2309 	,	3698	},
{	2316 	,	3697	},
{	2322 	,	3695	},
{	2329 	,	3694	},
{	2335 	,	3692	},
{	2340 	,	3690	},
{	2346 	,	3688	},
{	2351 	,	3686	},
{	2357 	,	3683	},
{	2361 	,	3679	},
{	2366 	,	3677	},
{	2370 	,	3672	},
{	2374 	,	3668	},
{	2378 	,	3663	},
{	2382 	,	3657	},
{	2385 	,	3651	},
{	2388 	,	3646	},
{	2391 	,	3641	},
{	2394 	,	3637	},
{	2396 	,	3632	},
{	2398 	,	3626	},
{	2400 	,	3622	},
{	2403 	,	3619	},
{	2404 	,	3615	},
{	2406 	,	3611	},
{	2408 	,	3609	},
{	2409 	,	3605	},
{	2411 	,	3600	},
{	2412 	,	3597	},
{	2413 	,	3595	},
{	2414 	,	3593	},
{	2415 	,	3590	},
{	2416 	,	3588	},
{	2417 	,	3586	},
{	2418 	,	3584	},
{	2419 	,	3581	},
{	2420 	,	3580	},
{	2420 	,	3579	},
{	2421 	,	3578	},
{	2421 	,	3575	},
{	2422 	,	3574	},
{	2423 	,	3573	},
{	2423 	,	3570	}


 };
BATTERY_Q_COST_PROFILE_STRUC battery_q_cost_profile_temperature[] =
{
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	}

};


R_PROFILE_STRUC tinno_r_profile_t3[] =
{
{	128 	,	4314	},
{	128 	,	4287	},
{	133 	,	4263	},
{	133 	,	4240	},
{	133 	,	4216	},
{	138 	,	4194	},
{	130 	,	4170	},
{	133 	,	4149	},
{	135 	,	4128	},
{	140 	,	4107	},
{	140 	,	4087	},
{	143 	,	4067	},
{	148 	,	4048	},
{	153 	,	4030	},
{	148 	,	4010	},
{	150 	,	3992	},
{	155 	,	3977	},
{	160 	,	3960	},
{	163 	,	3943	},
{	165 	,	3926	},
{	160 	,	3907	},
{	153 	,	3889	},
{	140 	,	3869	},
{	133 	,	3853	},
{	138 	,	3842	},
{	138 	,	3832	},
{	138 	,	3821	},
{	138 	,	3812	},
{	140 	,	3805	},
{	140 	,	3797	},
{	143 	,	3790	},
{	145 	,	3783	},
{	150 	,	3779	},
{	148 	,	3772	},
{	153 	,	3765	},
{	145 	,	3756	},
{	138 	,	3744	},
{	140 	,	3735	},
{	135 	,	3726	},
{	140 	,	3720	},
{	140 	,	3713	},
{	140 	,	3703	},
{	140 	,	3692	},
{	135 	,	3678	},
{	133 	,	3668	},
{	143 	,	3667	},
{	150 	,	3664	},
{	163 	,	3650	},
{	155 	,	3574	},
{	180 	,	3439	},
{	228 	,	3291	},
{	198 	,	3279	},
{	183 	,	3273	},
{	173 	,	3269	},
{	165 	,	3266	},
{	150 	,	3260	},
{	140 	,	3256	},
{	135 	,	3254	},
{	133 	,	3253	},
{	125 	,	3250	},
{	120 	,	3248	},
{	108 	,	3243	},
{	110 	,	3244	},
{	110 	,	3244	},
{	110 	,	3244	},
{	110 	,	3244	},
{	108 	,	3243	},
{	108 	,	3243	},
{	105 	,	3242	},
{	105 	,	3242	},
{	100 	,	3240	},
{	100 	,	3240	},
{	100 	,	3239	},
{	100 	,	3238	},
{	100 	,	3237	},
{	100 	,	3237	},
{	100 	,	3235	},
{	100 	,	3234	},
{	100 	,	3233	},
{	100 	,	3232	},
{	100 	,	3232	},
{	100 	,	3230	},
{	100 	,	3229	},
{	100 	,	3228	},
{	100 	,	3225	},
{	100 	,	3224	},
{	100 	,	3223	},
{	100 	,	3222	},
{	100 	,	3220	},
{	100 	,	3219	},
{	100 	,	3218	},
{	100 	,	3217	},
{	100 	,	3214	},
{	100 	,	3212	},
{	100 	,	3211	},
{	100 	,	3209	},
{	100 	,	3208	},
{	100 	,	3206	},
{	100 	,	3204	},
{	100 	,	3203	},
{	100 	,	3201	},
{	100 	,	3199	}


};
       
       
R_PROFILE_STRUC tinno_r_profile_t2[] =
{           
{	178 	,	4338	},
{	178 	,	4308	},
{	180 	,	4283	},
{	185 	,	4261	},
{	185 	,	4237	},
{	185 	,	4215	},
{	188 	,	4193	},
{	193 	,	4173	},
{	193 	,	4151	},
{	198 	,	4129	},
{	200 	,	4108	},
{	208 	,	4090	},
{	215 	,	4075	},
{	228 	,	4064	},
{	215 	,	4028	},
{	218 	,	3998	},
{	220 	,	3979	},
{	228 	,	3971	},
{	233 	,	3961	},
{	220 	,	3943	},
{	213 	,	3924	},
{	195 	,	3904	},
{	188 	,	3886	},
{	180 	,	3870	},
{	180 	,	3858	},
{	180 	,	3848	},
{	180 	,	3837	},
{	168 	,	3828	},
{	165 	,	3821	},
{	168 	,	3812	},
{	170 	,	3806	},
{	173 	,	3800	},
{	178 	,	3795	},
{	180 	,	3790	},
{	173 	,	3782	},
{	175 	,	3777	},
{	173 	,	3772	},
{	173 	,	3766	},
{	175 	,	3760	},
{	168 	,	3751	},
{	170 	,	3745	},
{	178 	,	3738	},
{	170 	,	3725	},
{	173 	,	3714	},
{	170 	,	3699	},
{	173 	,	3694	},
{	183 	,	3692	},
{	205 	,	3688	},
{	210 	,	3655	},
{	223 	,	3553	},
{	290 	,	3359	},
{	255 	,	3302	},
{	223 	,	3289	},
{	210 	,	3284	},
{	200 	,	3280	},
{	195 	,	3278	},
{	190 	,	3276	},
{	185 	,	3274	},
{	185 	,	3274	},
{	183 	,	3273	},
{	178 	,	3271	},
{	175 	,	3270	},
{	173 	,	3269	},
{	170 	,	3268	},
{	160 	,	3264	},
{	158 	,	3263	},
{	150 	,	3260	},
{	145 	,	3258	},
{	145 	,	3258	},
{	138 	,	3255	},
{	138 	,	3255	},
{	138 	,	3255	},
{	128 	,	3251	},
{	128 	,	3251	},
{	125 	,	3250	},
{	123 	,	3249	},
{	123 	,	3249	},
{	123 	,	3248	},
{	123 	,	3247	},
{	123 	,	3245	},
{	123 	,	3244	},
{	123 	,	3243	},
{	123 	,	3242	},
{	123 	,	3240	},
{	123 	,	3239	},
{	123 	,	3238	},
{	123 	,	3237	},
{	123 	,	3235	},
{	123 	,	3234	},
{	123 	,	3230	},
{	123 	,	3229	},
{	123 	,	3228	},
{	123 	,	3227	},
{	123 	,	3224	},
{	123 	,	3223	},
{	123 	,	3220	},
{	123 	,	3219	},
{	123 	,	3218	},
{	123 	,	3216	},
{	123 	,	3214	},
{	123 	,	3212	},
{	123 	,	3211	}

};

R_PROFILE_STRUC tinno_r_profile_t1[] =
{ 
{	553 	,	4330	},
{	553 	,	4298	},
{	555 	,	4271	},
{	565 	,	4249	},
{	558 	,	4226	},
{	558 	,	4205	},
{	558 	,	4184	},
{	558 	,	4163	},
{	555 	,	4142	},
{	558 	,	4122	},
{	553 	,	4101	},
{	555 	,	4084	},
{	570 	,	4072	},
{	583 	,	4054	},
{	553 	,	4013	},
{	533 	,	3978	},
{	525 	,	3956	},
{	513 	,	3938	},
{	518 	,	3927	},
{	513 	,	3915	},
{	503 	,	3900	},
{	493 	,	3886	},
{	488 	,	3872	},
{	488 	,	3859	},
{	480 	,	3847	},
{	485 	,	3836	},
{	485 	,	3827	},
{	483 	,	3817	},
{	495 	,	3810	},
{	493 	,	3802	},
{	495 	,	3795	},
{	498 	,	3788	},
{	503 	,	3782	},
{	505 	,	3777	},
{	513 	,	3774	},
{	515 	,	3771	},
{	523 	,	3766	},
{	530 	,	3762	},
{	543 	,	3760	},
{	555 	,	3755	},
{	563 	,	3748	},
{	580 	,	3740	},
{	598 	,	3730	},
{	620 	,	3719	},
{	635 	,	3705	},
{	678 	,	3697	},
{	723 	,	3692	},
{	803 	,	3687	},
{	908 	,	3669	},
{	993 	,	3597	},
{	880 	,	3552	},
{	793 	,	3517	},
{	725 	,	3490	},
{	668 	,	3467	},
{	630 	,	3452	},
{	600 	,	3440	},
{	575 	,	3430	},
{	563 	,	3425	},
{	550 	,	3420	},
{	538 	,	3415	},
{	528 	,	3411	},
{	523 	,	3409	},
{	515 	,	3406	},
{	513 	,	3405	},
{	510 	,	3404	},
{	510 	,	3404	},
{	508 	,	3403	},
{	505 	,	3402	},
{	500 	,	3400	},
{	495 	,	3398	},
{	495 	,	3398	},
{	495 	,	3398	},
{	495 	,	3398	},
{	495 	,	3398	},
{	493 	,	3397	},
{	493 	,	3397	},
{	493 	,	3397	},
{	488 	,	3395	},
{	485 	,	3394	},
{	485 	,	3394	},
{	483 	,	3393	},
{	480 	,	3392	},
{	473 	,	3389	},
{	473 	,	3388	},
{	470 	,	3387	},
{	465 	,	3385	},
{	463 	,	3384	},
{	460 	,	3383	},
{	458 	,	3382	},
{	453 	,	3380	},
{	448 	,	3378	},
{	445 	,	3377	},
{	440 	,	3375	},
{	435 	,	3373	},
{	433 	,	3372	},
{	430 	,	3371	},
{	425 	,	3368	},
{	420 	,	3366	},
{	415 	,	3364	},
{	410 	,	3362	},
{	400 	,	3358	},
{	398 	,	3357	}


};

R_PROFILE_STRUC tinno_r_profile_t0[] =
{ 
{	1180 	,	4333	},
{	1180 	,	4294	},
{	1213 	,	4266	},
{	1210 	,	4241	},
{	1200 	,	4219	},
{	1183 	,	4196	},
{	1168 	,	4174	},
{	1155 	,	4152	},
{	1138 	,	4129	},
{	1125 	,	4108	},
{	1115 	,	4091	},
{	1123 	,	4075	},
{	1105 	,	4049	},
{	1048 	,	4003	},
{	1028 	,	3971	},
{	1020 	,	3950	},
{	1018 	,	3935	},
{	1020 	,	3924	},
{	1020 	,	3912	},
{	1013 	,	3900	},
{	1013 	,	3888	},
{	1005 	,	3875	},
{	1003 	,	3863	},
{	1003 	,	3852	},
{	1003 	,	3842	},
{	1000 	,	3831	},
{	1003 	,	3822	},
{	1003 	,	3814	},
{	1010 	,	3807	},
{	1015 	,	3800	},
{	1025 	,	3795	},
{	1030 	,	3790	},
{	1043 	,	3786	},
{	1060 	,	3782	},
{	1080 	,	3780	},
{	1098 	,	3775	},
{	1120 	,	3770	},
{	1150 	,	3766	},
{	1180 	,	3761	},
{	1218 	,	3755	},
{	1258 	,	3746	},
{	1305 	,	3738	},
{	1328 	,	3731	},
{	1320 	,	3728	},
{	1310 	,	3724	},
{	1300 	,	3720	},
{	1293 	,	3717	},
{	1285 	,	3714	},
{	1280 	,	3712	},
{	1273 	,	3709	},
{	1270 	,	3708	},
{	1268 	,	3707	},
{	1263 	,	3705	},
{	1260 	,	3704	},
{	1258 	,	3703	},
{	1255 	,	3702	},
{	1250 	,	3700	},
{	1248 	,	3699	},
{	1248 	,	3699	},
{	1245 	,	3698	},
{	1243 	,	3697	},
{	1238 	,	3695	},
{	1235 	,	3694	},
{	1230 	,	3692	},
{	1225 	,	3690	},
{	1220 	,	3688	},
{	1215 	,	3686	},
{	1208 	,	3683	},
{	1198 	,	3679	},
{	1193 	,	3677	},
{	1180 	,	3672	},
{	1170 	,	3668	},
{	1158 	,	3663	},
{	1143 	,	3657	},
{	1128 	,	3651	},
{	1115 	,	3646	},
{	1103 	,	3641	},
{	1093 	,	3637	},
{	1080 	,	3632	},
{	1065 	,	3626	},
{	1055 	,	3622	},
{	1048 	,	3619	},
{	1038 	,	3615	},
{	1028 	,	3611	},
{	1023 	,	3609	},
{	1013 	,	3605	},
{	1000 	,	3600	},
{	1000 	,	3597	},
{	1000 	,	3595	},
{	1000 	,	3593	},
{	1000 	,	3590	},
{	1000 	,	3588	},
{	1000 	,	3586	},
{	1000 	,	3584	},
{	1000 	,	3581	},
{	1000 	,	3580	},
{	1000 	,	3579	},
{	1000 	,	3578	},
{	1000 	,	3575	},
{	1000 	,	3574	},
{	1000 	,	3573	},
{	1000 	,	3570	}

};

R_PROFILE_STRUC tinno_r_profile_temperature[] =
{
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	},
{	0 	,	0	}

}; 

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_Q_COST_PROFILE_STRUC_P fgauge_get_profile(int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(int temperature);

