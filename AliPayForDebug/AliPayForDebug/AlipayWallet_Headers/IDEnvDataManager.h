//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEnvDataManager : NSObject
{
}

+ (id)defaultManager;
- (void)timeoutTimerHandler:(id)arg1;
- (void)fetchFeatureDataAndReportWithVerifyId:(id)arg1 sceneId:(id)arg2 type:(id)arg3 extractSceneModel:(id)arg4;
- (void)pwdExitExtractAndReportIfNeedWithVerifyId:(id)arg1 sceneId:(id)arg2;
- (void)pwdEnterExtractAndReportIfNeedWithVerifyId:(id)arg1 sceneId:(id)arg2;
- (void)viExitExtractAndReportIfNeedWithVerifyId:(id)arg1 sceneId:(id)arg2;
- (void)viEnterExtractAndReportIfNeedWithVerifyId:(id)arg1 sceneId:(id)arg2;
- (void)payExitExtractAndReportIfNeedWithVerifyId:(id)arg1;
- (void)payEnterExtractAndReportIfNeedWithVerifyId:(id)arg1 bioType:(id)arg2;
- (_Bool)sceneId:(id)arg1 isInWhiteList:(id)arg2;
- (void)fetchFeatureDataFromAIXWithSceneCode:(id)arg1 options:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

