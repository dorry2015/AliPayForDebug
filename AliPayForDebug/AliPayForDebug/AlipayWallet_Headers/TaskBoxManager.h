//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TaskBoxSyncResponse-Protocol.h"

@class NSMutableDictionary, NSString, TaskBoxActionCenter, TaskBoxSyncHandler, TaskBoxTaskConfigResolver, TaskBoxWorker;
@protocol OS_dispatch_semaphore;

@interface TaskBoxManager : NSObject <TaskBoxSyncResponse>
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    TaskBoxSyncHandler *_syncHandler;
    TaskBoxTaskConfigResolver *_taskConfigResolver;
    TaskBoxWorker *_taskBoxWorker;
    TaskBoxActionCenter *_taskActionCenter;
    NSMutableDictionary *_taskInstances;
}

+ (id)shareManager;
@property(retain, nonatomic) NSMutableDictionary *taskInstances; // @synthesize taskInstances=_taskInstances;
@property(retain, nonatomic) TaskBoxActionCenter *taskActionCenter; // @synthesize taskActionCenter=_taskActionCenter;
@property(retain, nonatomic) TaskBoxWorker *taskBoxWorker; // @synthesize taskBoxWorker=_taskBoxWorker;
@property(retain, nonatomic) TaskBoxTaskConfigResolver *taskConfigResolver; // @synthesize taskConfigResolver=_taskConfigResolver;
@property(retain, nonatomic) TaskBoxSyncHandler *syncHandler; // @synthesize syncHandler=_syncHandler;
- (void).cxx_destruct;
- (void)onReceiveResopnse:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)startTask:(id)arg1;
- (void)startSyncListening;
- (void)updateTaskBoxLatestValidTime:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

