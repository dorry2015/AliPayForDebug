//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface ATParameters : NSObject
{
    NSMutableDictionary *_extParams;
    NSRecursiveLock *_lock;
    _Bool _voiceOver;
    NSString *_userId;
    NSString *_sessionId;
    NSString *_currentAppId;
    double _lastUUIDUpdateTime;
    NSString *_platformId;
    NSString *_clientVersion;
    NSString *_clientId;
    NSString *_idfa;
    NSString *_uploadUrl;
    NSString *_metdsUploadUrl;
    NSString *_configUrl;
    unsigned long long _maxLengthOfLine;
    unsigned long long _maxSizeOfLog;
    unsigned long long _maxLengthOfCustom;
    NSDictionary *_configABTestInfo;
    NSString *_appState;
    NSString *_pageSerialNo;
    NSString *_lastViewId;
    NSString *_currentViewId;
    NSString *_lastPageTitle;
    NSString *_currentPageTitle;
    NSString *_currentTrackId;
    NSString *_currentTrackToken;
    unsigned long long _tokenTimestamp;
    NSString *_lastAppId;
    NSString *_currentAutoRefer;
    NSString *_foundationExtended;
    NSString *_sourceId;
    NSString *_utdid;
    NSString *_deviceModel;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_networkType;
    NSString *_netType;
    NSString *_netCarrier;
    NSString *_language;
    NSString *_hpVersion;
    NSString *_resolution;
    NSString *_timeZone;
    NSString *_channelId;
}

+ (void)handleApplicationWillTerminateNotification:(id)arg1;
+ (void)handleApplicationDidStartNotification:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) _Bool voiceOver; // @synthesize voiceOver=_voiceOver;
@property(retain, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSString *hpVersion; // @synthesize hpVersion=_hpVersion;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *netCarrier; // @synthesize netCarrier=_netCarrier;
@property(retain, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *foundationExtended; // @synthesize foundationExtended=_foundationExtended;
@property(retain, nonatomic) NSString *currentAutoRefer; // @synthesize currentAutoRefer=_currentAutoRefer;
@property(copy) NSString *lastAppId; // @synthesize lastAppId=_lastAppId;
@property(nonatomic) unsigned long long tokenTimestamp; // @synthesize tokenTimestamp=_tokenTimestamp;
@property(copy) NSString *currentTrackToken; // @synthesize currentTrackToken=_currentTrackToken;
@property(copy) NSString *currentTrackId; // @synthesize currentTrackId=_currentTrackId;
@property(copy) NSString *currentPageTitle; // @synthesize currentPageTitle=_currentPageTitle;
@property(copy) NSString *lastPageTitle; // @synthesize lastPageTitle=_lastPageTitle;
@property(copy) NSString *currentViewId; // @synthesize currentViewId=_currentViewId;
@property(copy) NSString *lastViewId; // @synthesize lastViewId=_lastViewId;
@property(copy) NSString *pageSerialNo; // @synthesize pageSerialNo=_pageSerialNo;
@property(copy) NSString *appState; // @synthesize appState=_appState;
@property(retain, nonatomic) NSDictionary *configABTestInfo; // @synthesize configABTestInfo=_configABTestInfo;
@property(nonatomic) unsigned long long maxLengthOfCustom; // @synthesize maxLengthOfCustom=_maxLengthOfCustom;
@property(nonatomic) unsigned long long maxSizeOfLog; // @synthesize maxSizeOfLog=_maxSizeOfLog;
@property(nonatomic) unsigned long long maxLengthOfLine; // @synthesize maxLengthOfLine=_maxLengthOfLine;
@property(retain, nonatomic) NSString *configUrl; // @synthesize configUrl=_configUrl;
@property(retain, nonatomic) NSString *metdsUploadUrl; // @synthesize metdsUploadUrl=_metdsUploadUrl;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
@property(retain, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *platformId; // @synthesize platformId=_platformId;
@property(nonatomic) double lastUUIDUpdateTime; // @synthesize lastUUIDUpdateTime=_lastUUIDUpdateTime;
- (void).cxx_destruct;
- (id)currentApplicationParams:(_Bool)arg1;
- (void)viewWillAppear:(id)arg1 appId:(id)arg2 title:(id)arg3;
- (id)parameterForKey:(id)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
@property(copy) NSString *currentAppId; // @synthesize currentAppId=_currentAppId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)init;
- (id)currentApplicationParams:(_Bool)arg1;

@end
