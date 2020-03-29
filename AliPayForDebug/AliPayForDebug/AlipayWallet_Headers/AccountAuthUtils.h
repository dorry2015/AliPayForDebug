//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AccountAuthUtils : NSObject
{
}

+ (id)currentShowController;
+ (_Bool)pureAlipayHomeVC;
+ (id)getValueForKey:(id)arg1;
+ (void)saveValue:(id)arg1 forKey:(id)arg2;
+ (id)cookieFromString:(id)arg1;
+ (void)saveCookiesWithDomain:(id)arg1 cookies:(id)arg2;
+ (void)cleanCookieWithDomain:(id)arg1 cookies:(id)arg2;
+ (void)monitorFrameDate:(id)arg1;
+ (id)getCurrentNetWorkType;
+ (unsigned long long)lockScreenScene;
+ (id)buildLoginOptionsWithLoginId:(id)arg1 password:(id)arg2 loginType:(unsigned long long)arg3 addNewAccount:(_Bool)arg4 startLoginAutoly:(_Bool)arg5 autoLoginResult:(id)arg6 extraInfo:(id)arg7;
+ (void)waitLauncherStart:(id)arg1 animated:(_Bool)arg2;
+ (_Bool)startLoginAppWithLoginId:(id)arg1 password:(id)arg2 loginType:(unsigned long long)arg3 addNewAccount:(_Bool)arg4 startLoginAutoly:(_Bool)arg5 autoLoginResult:(id)arg6 extraInfo:(id)arg7 animated:(_Bool)arg8;
+ (id)queryParamsOfUrl:(id)arg1;
+ (id)wifiNodeName;
+ (id)wifiMac;
+ (id)getIdfaString;
+ (_Bool)isSwitchUserLogin:(id)arg1;
+ (id)getApdidToken;
+ (id)getApdid;
+ (id)getUmidToken;
+ (id)getWalletTid;
+ (void)clearSafePayTid;
+ (id)getSafePayTid;
+ (id)screenHeight;
+ (id)screenWidth;
+ (id)userAgent;
+ (id)osVersion;
+ (id)terminalName;
+ (id)clientId;

@end
