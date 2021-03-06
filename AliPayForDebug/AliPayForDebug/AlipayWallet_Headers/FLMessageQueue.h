//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APLRUMemoryCache, FLAppTracker, FLPageTracker, NSDictionary, NSLock, NSMutableDictionary, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface FLMessageQueue : NSObject
{
    FLAppTracker *_appTracker;
    FLPageTracker *_pageTracker;
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSMutableDictionary *_messageMap;
    long long _isOpenUserDefined;
    APLRUMemoryCache *_userDefinedMessageMap;
    NSMutableDictionary *_costMap;
    NSRecursiveLock *_costLock;
    NSDictionary *_pageSimple;
    NSDictionary *_pageSimpleRate;
    NSLock *_sessionLock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *sessionLock; // @synthesize sessionLock=_sessionLock;
@property(retain, nonatomic) NSDictionary *pageSimpleRate; // @synthesize pageSimpleRate=_pageSimpleRate;
@property(retain, nonatomic) NSDictionary *pageSimple; // @synthesize pageSimple=_pageSimple;
@property(retain, nonatomic) NSRecursiveLock *costLock; // @synthesize costLock=_costLock;
@property(retain, nonatomic) NSMutableDictionary *costMap; // @synthesize costMap=_costMap;
@property(retain, nonatomic) APLRUMemoryCache *userDefinedMessageMap; // @synthesize userDefinedMessageMap=_userDefinedMessageMap;
@property(nonatomic) long long isOpenUserDefined; // @synthesize isOpenUserDefined=_isOpenUserDefined;
@property(retain, nonatomic) NSMutableDictionary *messageMap; // @synthesize messageMap=_messageMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain, nonatomic) FLPageTracker *pageTracker; // @synthesize pageTracker=_pageTracker;
@property(retain, nonatomic) FLAppTracker *appTracker; // @synthesize appTracker=_appTracker;
- (void).cxx_destruct;
- (id)translateMessageIntoLogNode:(id)arg1;
- (void)savePerformanceDiagnoseWithClusterId:(id)arg1 toMessage:(id)arg2;
- (id)mergeMessageWithPageId:(id)arg1 linkId:(id)arg2;
- (void)removeMessageWithPageId:(id)arg1 linkId:(id)arg2;
- (int)simpleRateForDefault;
- (_Bool)shouldSampleForDefault;
- (id)findUserDefinedMessageWithClusterId:(id)arg1 needCreate:(_Bool)arg2;
- (_Bool)isUserDefinedClusterId:(id)arg1;
- (id)findMessageWithClusterId:(id)arg1 needCreate:(_Bool)arg2;
- (void)logDiagnoseInfoMessage:(id)arg1 clusterId:(id)arg2 linkName:(id)arg3 canOverride:(_Bool)arg4;
- (void)logDiagnoseInfoMessage:(id)arg1 clusterId:(id)arg2 canOverride:(_Bool)arg3;
- (void)logBizInfoMessage:(id)arg1 clusterId:(id)arg2 canOverride:(_Bool)arg3;
- (void)logEnvMessage:(id)arg1 clusterId:(id)arg2 canOverride:(_Bool)arg3;
- (void)logExceptionMessage:(id)arg1 clusterId:(id)arg2 level:(unsigned long long)arg3;
- (void)logCostMessage:(id)arg1 clusterId:(id)arg2 canOverride:(_Bool)arg3;
- (void)logStubMessage:(id)arg1 clusterId:(id)arg2 canOverride:(_Bool)arg3;
- (void)checkSessionIdForKillApp;
- (void)delSessionIdsInCache:(id)arg1;
- (void)delSessionIdForKillApp:(id)arg1;
- (void)logSessionIdForKillApp:(id)arg1;
- (double)appLaunchDidFinishTime;
- (id)logMessageQueue;
- (void)stopTrackForType:(unsigned long long)arg1;
- (void)logEnterBackgroundOrForegroundEvent:(_Bool)arg1 time:(double)arg2;
- (void)commitFailMessage:(id)arg1 logNode:(_Bool)arg2 logFull:(_Bool)arg3;
- (void)checkLogAutoFullLink:(id)arg1;
- (void)logMessagePropertyInfo:(id)arg1 clusterId:(id)arg2;
- (void)logPageDidFinish:(id)arg1 value:(id)arg2 pageId:(id)arg3 linkId:(id)arg4;
- (void)stopLogAutoFullLink:(id)arg1 linkId:(id)arg2;
- (void)logSessionId:(id)arg1 targetAppId:(id)arg2 clusterId:(id)arg3 isFirstNode:(_Bool)arg4 isClick:(_Bool)arg5;
- (void)removeMessage:(id)arg1;
- (void)rollbackMessage:(id)arg1;
- (void)commitMessage:(id)arg1 index:(long long)arg2 isPersist:(_Bool)arg3 pageId:(id)arg4;
- (void)commitMessage:(id)arg1 pageId:(id)arg2;
- (void)commit:(id)arg1 bizType:(id)arg2 fullLink:(_Bool)arg3;
- (void)setPageInfo:(id)arg1 clusterId:(id)arg2;
- (void)logCostEnd:(id)arg1 clusterId:(id)arg2 bizType:(id)arg3;
- (void)logCostStart:(id)arg1 clusterId:(id)arg2 bizType:(id)arg3;
- (void)logMessagesWithType:(unsigned long long)arg1 info:(id)arg2 clusterId:(id)arg3 linkName:(id)arg4 level:(unsigned long long)arg5 canOverride:(_Bool)arg6;
- (void)logMessagesWithType:(unsigned long long)arg1 info:(id)arg2 clusterId:(id)arg3 bizType:(id)arg4 level:(unsigned long long)arg5 canOverride:(_Bool)arg6;
- (void)logMessageListWithType:(unsigned long long)arg1 info:(id)arg2 clusterId:(id)arg3;
- (void)logMessageWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3 clusterId:(id)arg4 bizType:(id)arg5 level:(unsigned long long)arg6;
- (void)logMessageWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3 clusterId:(id)arg4 bizType:(id)arg5 linkName:(id)arg6 canOverride:(_Bool)arg7;
- (id)init;

@end

