//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTService-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface WIIChatService : NSObject <DTService>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (void)didReceiveSyncMsgDic:(id)arg1 pushList:(id)arg2 syncList:(id)arg3;
- (void)handleSyncNtfcation:(id)arg1;
- (void)registerSyncNotifWithBiz:(id)arg1;
- (void)onLogin:(id)arg1;
- (void)start;
- (void)willDestroy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

