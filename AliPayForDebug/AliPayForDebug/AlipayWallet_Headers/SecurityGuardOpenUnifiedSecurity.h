//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ISecurityGuardOpenUnifiedSecurity-Protocol.h"

@class NSString;

@interface SecurityGuardOpenUnifiedSecurity : NSObject <ISecurityGuardOpenUnifiedSecurity>
{
}

- (Class)getMetaClass;
- (void)addUTRecord:(int)arg1 errorCode:(int)arg2 timeCost:(long long)arg3 rsv1:(char *)arg4 rsv2:(char *)arg5 rsv3:(char *)arg6 rsv4:(char *)arg7;
- (id)getPluginVersion:(id *)arg1;
- (double)getCurrentTimeMillis;
- (id)getSign:(id)arg1 data:(id)arg2 env:(int)arg3 api:(id)arg4;
- (id)getUmidToken:(int)arg1;
- (id)getWua:(int)arg1 useWua:(_Bool)arg2 error:(id *)arg3;
- (id)getMiniWua:(int)arg1 extendParas:(id)arg2 error:(id *)arg3;
- (id)getSecurityFactors:(id)arg1 error:(id *)arg2;
- (_Bool)init:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

