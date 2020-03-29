//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DFBootLinkManager : NSObject
{
    _Bool _shouldSkipHome;
    _Bool _shouldSkipLogin;
    _Bool _shouldSpliceParams;
    _Bool _mainSwitch;
    _Bool _delaySkipLogin;
    NSDictionary *_regularAllRules;
    NSString *_outUrl;
}

+ (id)taobaoLoginDomains;
+ (_Bool)urlMatchSinkH5Rules:(id)arg1;
+ (_Bool)longLinkSkipLogin;
+ (_Bool)rpcSkipLogin:(id)arg1;
+ (_Bool)showLoadingFakeSplash;
+ (_Bool)checkMainSwitch;
+ (_Bool)miniAppBootLinkEnable;
+ (_Bool)extraBootInfoWithURL:(id)arg1;
+ (id)sharedLinkManager;
@property(copy, nonatomic) NSString *outUrl; // @synthesize outUrl=_outUrl;
@property(retain, nonatomic) NSDictionary *regularAllRules; // @synthesize regularAllRules=_regularAllRules;
@property(nonatomic) _Bool delaySkipLogin; // @synthesize delaySkipLogin=_delaySkipLogin;
@property(nonatomic) _Bool mainSwitch; // @synthesize mainSwitch=_mainSwitch;
@property(nonatomic) _Bool shouldSpliceParams; // @synthesize shouldSpliceParams=_shouldSpliceParams;
@property(nonatomic) _Bool shouldSkipLogin; // @synthesize shouldSkipLogin=_shouldSkipLogin;
@property(nonatomic) _Bool shouldSkipHome; // @synthesize shouldSkipHome=_shouldSkipHome;
- (void).cxx_destruct;
- (void)notifySplashScreenTimeout:(_Bool)arg1;
- (void)BLM_MTBIZ_Report:(id)arg1 params:(id)arg2;
- (void)preLoadRegularAllRules;
- (id)regularRulesWithKey:(id)arg1;
- (_Bool)urlRegularMatch:(id)arg1 url:(id)arg2;
- (_Bool)urlMatchRules:(id)arg1 rulesKey:(id)arg2;
- (_Bool)matchLowerEndDevice:(id)arg1;
- (_Bool)matchLowDeviceSinkH5;
- (_Bool)matchNotLoginSinkH5;
- (_Bool)matchAllSceneSinkH5;
- (id)spliceParamsWithMatchUrl:(id)arg1;
- (_Bool)canSpliceParamsWithUrl:(id)arg1;
- (void)skipLoginCancel:(_Bool)arg1;
- (_Bool)isLogin;
- (_Bool)rpcSkipLogin:(id)arg1;
- (_Bool)shouldSkipLoginWithURL:(id)arg1;
- (void)skipHomeCancel;
- (_Bool)skipHomeThroughMatchConfigWithURL:(id)arg1;
- (_Bool)disableSkipHomeThroughUrlParams:(id)arg1;
- (_Bool)skipHomeThroughUrlParams:(id)arg1;
- (_Bool)skipHomeWithNativeApp:(id)arg1;
- (_Bool)isTinyApp:(id)arg1;
- (_Bool)shouldSkipHomeWithURL:(id)arg1;
- (_Bool)enableNativeAppSkipHome;
- (_Bool)disableDefaultSkipHome;
- (_Bool)readFakeSplashSwitch;
- (void)didEnterBackGround:(id)arg1;
- (void)allSkipCancel;
- (_Bool)disableHandlePush;
- (_Bool)urlMatchMainBlacklist:(id)arg1;
- (_Bool)readMainSwitch;
- (id)fetchURLWhenRemotePushLaunch;
- (_Bool)extraBootInfoWithURL:(id)arg1;
- (id)init;
- (void)dealloc;

@end
