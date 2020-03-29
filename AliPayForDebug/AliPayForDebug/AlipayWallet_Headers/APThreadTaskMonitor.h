//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface APThreadTaskMonitor : NSObject
{
    _Bool _openThreadTaskMonitor;
    _Bool _isCoreTaskInProgress;
    NSMutableArray *_taskList;
    NSMutableArray *_runningTaskList;
    NSString *_uploadLogStr;
    NSObject<OS_dispatch_queue> *_queueForThreadMonitor;
    long long _startAnalysisTime;
    long long _endAnalysisTime;
    NSMutableDictionary *_startMonitorTasksInfoDic;
    NSMutableDictionary *_endMonitorTasksInfoDic;
}

+ (id)getThreadQueueName:(unsigned int)arg1;
+ (id)getDetailInfoFromThreadId:(unsigned int)arg1;
+ (id)getAllThreadInfo;
+ (void)endMonitorTasksInfo;
+ (void)startMonitorTasksInfo;
+ (void)endTask:(id)arg1;
+ (void)startTask:(id)arg1 biz:(long long)arg2 tag:(id)arg3;
+ (CDUnknownBlockType)addThreadTask:(unsigned long long)arg1 tag:(const char *)arg2 block:(CDUnknownBlockType)arg3;
+ (id)threadTasksDetail;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *endMonitorTasksInfoDic; // @synthesize endMonitorTasksInfoDic=_endMonitorTasksInfoDic;
@property(retain, nonatomic) NSMutableDictionary *startMonitorTasksInfoDic; // @synthesize startMonitorTasksInfoDic=_startMonitorTasksInfoDic;
@property(nonatomic) long long endAnalysisTime; // @synthesize endAnalysisTime=_endAnalysisTime;
@property(nonatomic) long long startAnalysisTime; // @synthesize startAnalysisTime=_startAnalysisTime;
@property(nonatomic) _Bool isCoreTaskInProgress; // @synthesize isCoreTaskInProgress=_isCoreTaskInProgress;
@property(nonatomic) _Bool openThreadTaskMonitor; // @synthesize openThreadTaskMonitor=_openThreadTaskMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueForThreadMonitor; // @synthesize queueForThreadMonitor=_queueForThreadMonitor;
@property(retain, nonatomic) NSString *uploadLogStr; // @synthesize uploadLogStr=_uploadLogStr;
@property(retain, nonatomic) NSMutableArray *runningTaskList; // @synthesize runningTaskList=_runningTaskList;
@property(retain, nonatomic) NSMutableArray *taskList; // @synthesize taskList=_taskList;
- (void).cxx_destruct;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (_Bool)checkThreadTaskMonitor;
- (id)getUploadStrFromRunningTaskList:(id)arg1;
- (void)endMonitorRunningTasksInfo;
- (id)init;

@end
