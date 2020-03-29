//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AntLogInterface-Protocol.h"

@class NSMutableArray, NSRecursiveLock, NSString;
@protocol ABTestInfoProvider, AntLogInterceptor, AutoTrackerObserver;

@interface ATMigrator : NSObject <AntLogInterface>
{
    NSRecursiveLock *_blockArrLock;
    NSMutableArray *_periodBlocks;
    id <AntLogInterceptor> _interceptor;
    id <AutoTrackerObserver> _observer;
    id <ABTestInfoProvider> _provider;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <ABTestInfoProvider> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) id <AutoTrackerObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
@property(retain, nonatomic) id <AntLogInterceptor> interceptor; // @synthesize interceptor=_interceptor;
- (id)getABTestInfoProvider;
- (void)setABTestInfoProvider:(id)arg1;
- (id)getAutoTrackerObserver;
- (void)setAutoTrackerObserver:(id)arg1;
- (void)triggerUploadAllForEvent:(id)arg1 url:(id)arg2;
- (void)triggerUploadForBizType:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)triggerUploadForBizType:(id)arg1 url:(id)arg2;
- (void)triggerUploadForBizType:(id)arg1;
- (void)p_setupPeriodExecutionTimerImpl;
- (void)setupPeriodExecutionTimer;
- (void)addPeriodicallyExecutedBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
