//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class NSString;

@interface ErrorCodePlatformAppDelegate : NSObject <DTMicroApplicationDelegate>
{
}

- (void)callBackToSDK:(id)arg1 scheme:(id)arg2;
- (void)verifySignWithPageData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)postNotificationWithName:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (_Bool)applicationShouldStartMultapplication:(id)arg1 launchMode:(long long)arg2 sourceId:(id)arg3;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
