//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;

@interface SAScanPredictCacheManager : NSObject
{
    _Bool _isRunning;
    _Bool _canUseCache;
    _Bool _supportPreDict;
    _Bool _onlyWIFI;
    int _supportScenes;
    NSRecursiveLock *_launchLock;
    NSRecursiveLock *_dbLock;
    double _lastStopTimeMS;
    double _predictIntervalMS;
    unsigned long long _localCacheCountLimit;
    unsigned long long _freeSpaceLimit;
    double _payTagAvailableSeconds;
    NSString *_supportBiz;
}

+ (id)strConfigKeys;
+ (id)numConfigKeys;
+ (id)sharedPreCacheManager;
@property(copy, nonatomic) NSString *supportBiz; // @synthesize supportBiz=_supportBiz;
@property(nonatomic) double payTagAvailableSeconds; // @synthesize payTagAvailableSeconds=_payTagAvailableSeconds;
@property(nonatomic) _Bool onlyWIFI; // @synthesize onlyWIFI=_onlyWIFI;
@property(nonatomic) unsigned long long freeSpaceLimit; // @synthesize freeSpaceLimit=_freeSpaceLimit;
@property(nonatomic) unsigned long long localCacheCountLimit; // @synthesize localCacheCountLimit=_localCacheCountLimit;
@property(nonatomic) double predictIntervalMS; // @synthesize predictIntervalMS=_predictIntervalMS;
@property(nonatomic) int supportScenes; // @synthesize supportScenes=_supportScenes;
@property(nonatomic) _Bool supportPreDict; // @synthesize supportPreDict=_supportPreDict;
@property(nonatomic) _Bool canUseCache; // @synthesize canUseCache=_canUseCache;
@property(nonatomic) double lastStopTimeMS; // @synthesize lastStopTimeMS=_lastStopTimeMS;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSRecursiveLock *dbLock; // @synthesize dbLock=_dbLock;
@property(retain, nonatomic) NSRecursiveLock *launchLock; // @synthesize launchLock=_launchLock;
- (void).cxx_destruct;
- (void)cleanPreCache;
- (void)deleteCacheWithFileID:(id)arg1 fileCreateTime:(id)arg2;
- (void)deleteCache:(id)arg1;
- (void)deleteExpireCaches;
- (void)createTableIfNeed;
- (id)matchCacheModleWithCode:(id)arg1;
- (id)getCacheModelDicList:(id)arg1;
- (void)savePredictCache:(id)arg1 loaderCacheModel:(id)arg2 userId:(id)arg3 actNum:(id *)arg4;
- (void)downloadCacheFile:(id)arg1 response:(id)arg2;
- (void)logRpcPerformance:(double)arg1 rpcException:(id)arg2 resultCode:(int)arg3;
- (_Bool)checkCacheFilesOrder:(id)arg1;
- (_Bool)isResponseValid:(id)arg1;
- (id)buildCachePbReq:(id)arg1;
- (void)deleteOldestFile:(id)arg1;
- (_Bool)checkIfMoreThanLimit:(unsigned long long)arg1 fileNum:(unsigned long long)arg2;
- (id)logResponseCacheModels:(id)arg1;
- (id)selectDownloadModel:(id)arg1 localFiles:(id)arg2;
- (id)pickDownloadCacheModel:(id)arg1 localFiles:(id)arg2 localCacheCount:(unsigned long long)arg3;
- (void)requestPreCacheData:(id)arg1 localFiles:(id)arg2 localCacheCount:(unsigned long long)arg3;
- (_Bool)checkPayTagAvailable;
- (void)savePayTag;
- (_Bool)checkIfSystemFreeSizeIsEnough;
- (void)loadLocalFiles:(id *)arg1 localCacheCount:(unsigned long long *)arg2;
- (void)requestPreDictCache;
- (void)closePredict;
- (_Bool)checkConfig:(id)arg1;
- (void)resetPredictConfig;
- (_Bool)simplePredictSwitchCheck;
- (id)sceneStr:(unsigned int)arg1;
- (void)deleteOldCachePath;
- (_Bool)isLoggedIn;
- (void)stopRunning;
- (void)startRunning:(id)arg1;
- (void)startRunningAsync:(id)arg1;
- (long long)taskDelayTime;
- (void)startPredictTask:(unsigned int)arg1;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (id)init;

@end
