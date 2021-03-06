//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKUdpSocketClient, NSData, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AKPHotspotService : NSObject
{
    AKUdpSocketClient *_udpSocketClient;
    NSData *_payload;
    NSMutableArray *_deviceList;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (_Bool)isConnectedByDevice;
+ (_Bool)isSupportedHotspot;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableArray *deviceList; // @synthesize deviceList=_deviceList;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) AKUdpSocketClient *udpSocketClient; // @synthesize udpSocketClient=_udpSocketClient;
- (void).cxx_destruct;
- (void)stopDiscover;
- (_Bool)addDevice:(id)arg1;
- (void)discoverDevices:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

