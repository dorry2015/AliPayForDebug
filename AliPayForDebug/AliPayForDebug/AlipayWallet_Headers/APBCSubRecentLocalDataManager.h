//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APSubRecentLocalDataManager.h"

@interface APBCSubRecentLocalDataManager : APSubRecentLocalDataManager
{
}

+ (id)sharedInstance;
- (void)onContactNotify:(id)arg1;
- (void)clearRecentContactBoxWithUserType:(id)arg1;
- (void)updateRecentContactBoxWithUserType:(id)arg1 recentMessage:(id)arg2;
- (Class)recentContactClass;
- (id)getUrlParams:(id)arg1;
- (void)calculateRecentContactWithExistInfo:(id)arg1 oldRecent:(id)arg2 recentMessage:(id)arg3 shouldNoticeUser:(_Bool *)arg4;
- (_Bool)canHandleSessionMapWithSessionType:(id)arg1;
- (id)convertProxyNameWithUserType:(id)arg1;
- (id)init;

@end
