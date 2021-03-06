//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LogDispatcher-Protocol.h"

@class NSMutableArray, NSOperationQueue, NSString;
@protocol AIXEventFlowDelegate;

@interface AIXEventFlow : NSObject <LogDispatcher>
{
    id <AIXEventFlowDelegate> _delegate;
    NSOperationQueue *_eventFlowQueue;
    NSMutableArray *_revicedEvents;
}

@property(retain, nonatomic) NSMutableArray *revicedEvents; // @synthesize revicedEvents=_revicedEvents;
@property(retain, nonatomic) NSOperationQueue *eventFlowQueue; // @synthesize eventFlowQueue=_eventFlowQueue;
@property(nonatomic) __weak id <AIXEventFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)filteredActionIds;
- (void)onLogAppend:(id)arg1;
- (void)registerEvent;
- (void)callBackToDelegate:(id)arg1;
- (long long)eventSourceByType:(id)arg1;
- (id)lastEventForType:(id)arg1;
- (void)onTrackingViewController:(id)arg1;
- (void)onTrackingDTMicroApplication:(id)arg1;
- (void)onTrackingEnterBackOrForeground:(id)arg1;
- (void)registerNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

