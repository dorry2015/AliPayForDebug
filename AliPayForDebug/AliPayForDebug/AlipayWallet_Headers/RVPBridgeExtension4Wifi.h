//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKBridgeExtension.h"

#import "NXEvent4RVPBridgeExtension4Wifi-Protocol.h"

@class NSString;

@interface RVPBridgeExtension4Wifi : RVKBridgeExtension <NXEvent4RVPBridgeExtension4Wifi>
{
}

+ (void)__RVK_export__unregisterSSID1727;
+ (void)__RVK_export__registerSSID1566;
+ (void)__RVK_export__getConnectedWifi1455;
+ (void)__RVK_export__setWifiList1094;
+ (void)__RVK_export__getWifiList913;
+ (void)__RVK_export__connectWifi432;
+ (void)__RVK_export__stopWifi321;
+ (void)__RVK_export__startWifi180;
- (void)unregisterSSID:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)registerSSID:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)getConnectedWifi:(_Bool)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)setWifiList:(id)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)getWifiList:(_Bool)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)connectWifi:(id)arg1 password:(id)arg2 isWEP:(_Bool)arg3 originParam:(id)arg4 page:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)stopWifi:(_Bool)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)startWifi:(_Bool)arg1 originParam:(id)arg2 page:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

