//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APDynamicDeploymentCenter : NSObject
{
}

+ (void)requestForPolicyType:(int)arg1;
+ (void)setPolicysForRequestCenter;
+ (void)responseForBusinessName:(id)arg1 dynamicResourceInfo:(id)arg2 success:(_Bool)arg3 error:(id)arg4;
+ (void)doSyncForRequest:(id)arg1 businessNames:(id)arg2;
+ (void)startListenLongLink;
+ (_Bool)syncRequestForBusinessInteraction:(id)arg1 bizType:(int)arg2;
+ (void)requestForBusinessInteraction:(id)arg1;
+ (_Bool)encounterFlowControl:(id)arg1 resend:(CDUnknownBlockType)arg2;
+ (void)requestForBusinessNames:(id)arg1 userId:(id)arg2;
+ (void)initializeRequest:(id)arg1;
+ (_Bool)registerBusiness:(id)arg1 error:(id *)arg2;

@end

