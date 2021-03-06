//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKFalconEventListener-Protocol.h"
#import "CardSDKExceptionHandler-Protocol.h"

@class CSMonitor, CardSDK, NSString;
@protocol CSEventListener;

@interface HCCardSDKBridge : NSObject <CKFalconEventListener, CardSDKExceptionHandler>
{
    id <CSEventListener> _eventListener;
    CardSDK *_cardsdk;
    CSMonitor *_monitor;
}

@property(retain, nonatomic) CSMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) CardSDK *cardsdk; // @synthesize cardsdk=_cardsdk;
@property(nonatomic) __weak id <CSEventListener> eventListener; // @synthesize eventListener=_eventListener;
- (void).cxx_destruct;
- (void)onException:(id)arg1;
- (void)onEvent:(id)arg1 instance:(id)arg2;
- (void)_startMonitor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

