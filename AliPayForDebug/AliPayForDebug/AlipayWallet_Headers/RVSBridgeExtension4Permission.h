//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKBridgeExtension.h"

#import "NXEvent4RVSBridgeExtension4Permission-Protocol.h"

@class NSString;

@interface RVSBridgeExtension4Permission : RVKBridgeExtension <NXEvent4RVSBridgeExtension4Permission>
{
}

+ (void)__RVK_export__getPermissionConfig140;
- (void)getPermissionConfig:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

