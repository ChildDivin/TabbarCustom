


// IN App Purchase When live app then uncomment these two lines
//#define APP_ENVIRONMENT     1
//#define DISTRIBUTION_APP_STORE_ENVIRONMENT


#ifdef DISTRIBUTION_APP_STORE_ENVIRONMENT
#define ITMS_VERIFY_RECEIPT_URL  @"http://topsdemo.in/mit/parles/verifyReceipt.php?testing=0";
#else
#define ITMS_VERIFY_RECEIPT_URL @"http://192.168.0.28/parles/trunk/verifyReceipt.php?testing=1";
#endif


#define font_NAME_OpenSans_Bold @"OpenSans-Bold"
#define font_NAME_OpenSans_Light_Italic @"OpenSansLight-Italic"
#define font_NAME_OpenSans_Semibold @"OpenSans-Semibold"
#define font_NAME_OpenSans_Italic @"OpenSans-Italic"
#define font_NAME_OpenSans @"OpenSans"


#define AppNameAler @""

#define g_Applicatin_link @"https://itunes.apple.com/us/app/parlez/id984445220?ls=1&mt=8"
#define g_LinkPrivacy @""
#define g_LinkTerms @""
#define g_LinkInformation @""


#define g_IS_IPHONE             ( [[[UIDevice currentDevice] model] isEqualToString:@"iPhone"] )
#define g_IS_IPOD               ( [[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"] )
#define g_IS_IPAD               ( [[[UIDevice currentDevice] model] isEqualToString:@"iPad"] )

#define g_IS_IPHONE_5_SCREEN    [[UIScreen mainScreen] bounds].size.height >= 568.0f && [[UIScreen mainScreen] bounds].size.height < 1024.0f
#define g_IS_IPHONE_4_SCREEN    [[UIScreen mainScreen] bounds].size.height >= 480.0f && [[UIScreen mainScreen] bounds].size.height < 568.0f

#define g_IS_IOS_7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define g_IS_IOS_6 ([[[UIDevice currentDevice] systemVersion] floatValue] < 7.0)
#define g_IS_IOS_8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

#define imgLoging @"loading.gif"

#define g_userUsername @"user_Name"
#define g_userImageUrl @"userImageUrl"
#define g_userPlace @"user_Place"
#define g_userId @"userId"
#define g_userFBId @"userFBId"
#define g_HeaderHeight 64

#define g_userRelation_status @"Relationship_status"
#define g_userIdenity @"User_identity"
#define g_userInterest @"User_Interest"

#define g_userRelation_status_name @"Relationship_status_name"
#define g_userIdenity_name @"User_identity_name"
#define g_userInterest_name @"User_Interest_name"

#define g_userNotification @"User_Notification"
#define g_user_Predistance @"Pre_distance"
#define g_userType @"user_type"
#define g_user_isLogin @"user_LoginState"

//common date and time format
#define g_DateTimeFormatDefault			@"yyyy-MM-dd HH:mm:ss"	//yyyy-MM-dd'T'HH:mm:ss.S
#define g_DateFormatDefault				@"yyyy-MM-dd"

//Color
#define RGB(r, g, b)            [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define RGBA(r, g, b, a)        [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define alertViewColor [UIColor colorWithRed:215.0/255.0 green:205.0/255.0 blue:194.0/255.0 alpha:1]
#define alertViewButtoncolor [UIColor colorWithRed:134.0/255.0 green:9.0/255.0 blue:6.0/255.0 alpha:1]

//Conversion
#define M_PI                        3.14159265358979323846264338327950288   /* pi */
#define DegreesToRadians(degrees)   (degrees * M_PI / 180)
#define RadiansToDegrees(radians)   (radians * 180/M_PI)
