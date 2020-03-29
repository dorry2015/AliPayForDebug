//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFileManager, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface APMKVStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_trashQueue;
    NSMutableDictionary *_registeredTypes;
    NSString *_path;
    NSString *_dbPath;
    NSString *_dataPath;
    NSString *_trashPath;
    NSString *_name;
    struct sqlite3 *_db;
    struct __CFDictionary *_dbStmtCache;
    double _dbLastOpenErrorTime;
    unsigned long long _dbOpenErrorCount;
    _Bool _dbUpdateExecuted;
    NSFileManager *_fileManager;
    int _defragDeleteCountThreshold;
    int _countBeforeDefrag;
    int _flushWalSizeThreshold;
    NSMutableArray *_zoombieFilenames;
    unsigned long long _zoombieCount;
    struct _opaque_pthread_mutex_t _zoombieLock;
    float _zoombieClearInterval;
    int _zoombieClearPerCount;
    NSString *_zoombieClearTimeKey;
    float _expiredClearInterval;
    NSString *_expiredClearTimeKey;
    _Bool _errorLogsEnabled;
    _Bool _requestingRealtimeOperation;
    _Bool _isLazyRegisterExecuted;
    unsigned long long _type;
    NSArray *_protectedBusinesses;
    unsigned long long _protectedTags;
    NSMutableDictionary *_aliasKeyMap;
    struct _opaque_pthread_mutex_t _aliasKeyLock;
}

@property(nonatomic) _Bool isLazyRegisterExecuted; // @synthesize isLazyRegisterExecuted=_isLazyRegisterExecuted;
@property(nonatomic, getter=isRequestingRealtimeOperation) _Bool requestingRealtimeOperation; // @synthesize requestingRealtimeOperation=_requestingRealtimeOperation;
@property(nonatomic) struct _opaque_pthread_mutex_t aliasKeyLock; // @synthesize aliasKeyLock=_aliasKeyLock;
@property(retain, nonatomic) NSMutableDictionary *aliasKeyMap; // @synthesize aliasKeyMap=_aliasKeyMap;
@property(nonatomic) unsigned long long protectedTags; // @synthesize protectedTags=_protectedTags;
@property(copy, nonatomic) NSArray *protectedBusinesses; // @synthesize protectedBusinesses=_protectedBusinesses;
@property(nonatomic) _Bool errorLogsEnabled; // @synthesize errorLogsEnabled=_errorLogsEnabled;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)releaseRealtimeOperation;
- (void)requestRealtimeOperation;
- (id)pathForItem:(id)arg1;
- (id)pathForFilename:(id)arg1 type:(unsigned long long)arg2;
- (id)rootPathForType:(unsigned long long)arg1;
- (id)getItemInfoWithFileLengths:(id)arg1;
- (id)getItemInfoForTag:(unsigned long long)arg1 laterThanTime:(int)arg2;
- (id)getItemsSizeGroupByBusinessAndTag;
- (long long)getItemsSizeWithType:(unsigned long long)arg1;
- (long long)getItemsSizeEarlierThanTime:(int)arg1;
- (long long)getItemsSize;
- (int)getItemsCount;
- (_Bool)itemExistsForKey:(id)arg1;
- (id)getItemValueForRecordId:(unsigned long long)arg1;
- (id)getItemsInfoForKey:(id)arg1;
- (id)getAliasKeyForKey:(id)arg1;
- (id)getItemInfoForKey:(id)arg1;
- (id)getItemForKey:(id)arg1;
- (_Bool)removeItemsForBusiness:(id)arg1 earlierThanTime:(int)arg2 exceptTag:(unsigned long long)arg3;
- (_Bool)removeAllItems;
- (_Bool)removeItemsToFitCount:(int)arg1;
- (_Bool)removeItemsToFitSizeForProtectedBusinesses:(long long)arg1;
- (_Bool)removeItemsToFitSize:(long long)arg1 busisinessType:(unsigned long long)arg2;
- (_Bool)removeItemsToFitSize:(long long)arg1;
- (_Bool)removeItemsExpiredEarlierThanTime:(int)arg1 finished:(_Bool *)arg2;
- (_Bool)removeItemsEarlierThanTime:(int)arg1;
- (_Bool)removeItemForKey:(id)arg1;
- (_Bool)updateAccessTimeWithPath:(id)arg1;
- (_Bool)updateItemWithKey:(id)arg1 tag:(unsigned long long)arg2 addOrRemove:(_Bool)arg3;
- (_Bool)updateItemWithKey:(id)arg1 info:(id)arg2;
- (_Bool)updateItemWithKey:(id)arg1 aliasKey:(id)arg2 business:(id)arg3;
- (_Bool)updateItemWithKey:(id)arg1 business:(id)arg2;
- (_Bool)updateItemWithKey:(id)arg1 aliasKey:(id)arg2;
- (_Bool)saveItemWithKey:(id)arg1 path:(id)arg2 type:(unsigned long long)arg3 business:(id)arg4 tag:(unsigned long long)arg5 extendedInfo:(id)arg6 expirationTime:(int)arg7;
- (_Bool)saveItemWithKey:(id)arg1 value:(id)arg2 filename:(id)arg3 type:(unsigned long long)arg4 business:(id)arg5 tag:(unsigned long long)arg6 extendedInfo:(id)arg7 expirationTime:(int)arg8;
- (void)dealloc;
- (void)clean;
- (void)close;
- (void)open;
- (void)lazyRegister;
- (void)registerType:(int)arg1;
- (void)setProtectionNoneAttributeAtPath:(id)arg1;
- (id)initWithPath:(id)arg1 type:(unsigned long long)arg2;
- (id)init;
- (void)_logForType:(id)arg1 result:(int)arg2 time:(double)arg3 ext:(id)arg4;
- (void)_clearExpiredFiles;
- (void)_clearZoombieFiles;
- (void)_flush;
- (void)_defrag;
- (void)_handleErrorCode:(int)arg1 message:(id)arg2 function:(const char *)arg3 line:(int)arg4;
- (void)_loadAliasKeyMap:(_Bool)arg1;
- (void)_resetAliasKeyMap;
- (void)_setAliasKeyImpl:(id)arg1 forKey:(id)arg2;
- (void)_setAliasKey:(id)arg1 forKey:(id)arg2;
- (_Bool)_removeAllItems;
- (void)_reset;
- (void)_fileClearZoombieFiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_fileGetZoombieFiles;
- (void)_fileEmptyTrashInBackground;
- (_Bool)_fileMoveAllToTrash;
- (_Bool)_fileDeleteWithName:(id)arg1;
- (id)_fileReadWithName:(id)arg1;
- (_Bool)_fileWriteWithName:(id)arg1 data:(id)arg2;
- (id)_fileReletivePathWithPath:(id)arg1;
- (id)_fileReletivePathWithName:(id)arg1 type:(int)arg2;
- (id)_fileReletiveFolderForType:(int)arg1;
- (void)_fileRegisterType:(int)arg1;
- (void)_fileReregisterTypes;
- (_Bool)_dbRepair;
- (_Bool)_dbUpdateVersion:(id)arg1 fromVersion:(id)arg2;
- (id)_dbGetVersionFromCacheInfoTable;
- (id)_dbGetVersionFromCacheVersionTable;
- (id)_dbGetCurrentVersion;
- (_Bool)_dbHasUniqueKey;
- (id)_dbGetAllClolumnsOfCacheTable;
- (int)_dbGetTotalItemCount;
- (id)_dbGetItemsWithFileLengths:(id)arg1;
- (id)_dbGetItemsWithTag:(long long)arg1 laterThanTime:(int)arg2 excludeInlineData:(_Bool)arg3;
- (id)_dbGetItemsSizeGroupByBusinessAndTag;
- (long long)_dbGetTotalItemSizeWithType:(int)arg1;
- (long long)_dbGetTotalItemSizeEarlierThan:(int)arg1;
- (long long)_dbGetTotalItemSizeWithbusinessType:(unsigned long long)arg1;
- (int)_dbGetItemCountWithFilename:(id)arg1;
- (int)_dbGetItemCountWithKey:(id)arg1;
- (id)_dbGetAliasKeyMap;
- (id)_dbGetItemSizeInfoOrderByTimeAscWithLimit:(int)arg1 busisinessType:(unsigned long long)arg2;
- (id)_dbGetFilenames;
- (id)_dbGetFilenamesWithBusiness:(id)arg1 earlierThan:(int)arg2 exceptTag:(long long)arg3;
- (id)_dbGetFilenamesWithExpirationTimeEarlierThan:(int)arg1;
- (id)_dbGetFilenamesWithTimeEarlierThan:(int)arg1;
- (id)_dbGetFilenamesWithClause:(id)arg1 time:(int)arg2;
- (id)_dbGetFilenameWithRecordId:(int)arg1;
- (id)_dbGetFilenamesWithKey:(id)arg1;
- (id)_dbGetFilenamesStmt:(struct sqlite3_stmt *)arg1;
- (id)_dbGetValueWithRecordId:(int)arg1;
- (id)_dbGetItemsWithKey:(id)arg1 excludeInlineData:(_Bool)arg2;
- (id)_dbGetItemWithKey:(id)arg1 excludeInlineData:(_Bool)arg2;
- (id)_dbGetItemFromStmt:(struct sqlite3_stmt *)arg1 excludeInlineData:(_Bool)arg2;
- (_Bool)_dbDeleteAllItems:(int)arg1;
- (_Bool)_dbDeleteItemsWithBusiness:(id)arg1 earlierThan:(int)arg2 exceptTag:(long long)arg3 limit:(int)arg4;
- (_Bool)_dbDeleteItemsWithExpirationTimeEarlierThan:(int)arg1 limit:(int)arg2;
- (_Bool)_dbDeleteItemsWithTimeEarlierThan:(int)arg1 limit:(int)arg2;
- (_Bool)_dbDeleteItemsWithClause:(id)arg1 time:(int)arg2 limit:(int)arg3;
- (_Bool)_dbDeleteItemWithRecordId:(int)arg1;
- (_Bool)_dbDeleteItemWithKey:(id)arg1;
- (_Bool)_dbUpdateTag:(long long)arg1 forKey:(id)arg2 addOrRemove:(_Bool)arg3;
- (_Bool)_dbUpdateInfo:(id)arg1 forKey:(id)arg2;
- (_Bool)_dbUpdateAliasKey:(id)arg1 business:(id)arg2 forKey:(id)arg3;
- (_Bool)_dbUpdateBusiness:(id)arg1 forKey:(id)arg2;
- (_Bool)_dbClearAliasKey:(id)arg1;
- (_Bool)_dbUpdateAliasKey:(id)arg1 forKey:(id)arg2;
- (_Bool)_dbUpdateAccessTimeWithFilename:(id)arg1;
- (_Bool)_dbUpdateAccessTimeWithRecordId:(int)arg1;
- (_Bool)_dbSaveWithKey:(id)arg1 value:(id)arg2 size:(long long)arg3 fileName:(id)arg4 type:(int)arg5 business:(id)arg6 tag:(long long)arg7 extendedInfo:(id)arg8 expirationTime:(int)arg9;
- (void)_dbBindJoinedArguments:(id)arg1 stmt:(struct sqlite3_stmt *)arg2 fromIndex:(int)arg3;
- (id)_dbJoinedArguments:(id)arg1;
- (struct sqlite3_stmt *)_dbPrepareStmt:(id)arg1;
- (_Bool)_dbExecute:(id)arg1;
- (void)_dbCheckpoint;
- (_Bool)_dbFinalize;
- (_Bool)_dbVacuum;
- (_Bool)_dbNeedsExecuteUpdateOnInit;
- (id)_dbUpdateSQLs;
- (_Bool)_dbUpdateImpl;
- (_Bool)_dbTryUpdate;
- (_Bool)_dbInitialize;
- (_Bool)_dbCheck;
- (_Bool)_dbClose;
- (_Bool)_dbOpen;

@end
