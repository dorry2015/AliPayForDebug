//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APTemplateSyncManager : NSObject
{
}

+ (_Bool)whetherNeedUpdate:(id)arg1 localTpl:(id)arg2;
+ (id)defaultManager;
+ (_Bool)readSwitch:(id)arg1;
- (void)processTplToDownload:(id)arg1;
- (void)updateSyncTemplate;
- (void)downloadTpls:(id)arg1 isSyncUpdate:(_Bool)arg2 retryCount:(int)arg3;
- (void)downloadTpls:(id)arg1 retryCount:(int)arg2;
- (void)saveTemplatesFromSync:(id)arg1 withInfo:(id)arg2;
- (id)templateFromSyncMessage:(id)arg1;
- (void)handleSyncPush:(id)arg1;
- (void)syncPushNotification:(id)arg1;
- (void)notifySyncPushHandleComplete:(id)arg1;
- (void)registerInSyncService;
- (void)observeSyncPushNotification;
- (id)init;

@end
