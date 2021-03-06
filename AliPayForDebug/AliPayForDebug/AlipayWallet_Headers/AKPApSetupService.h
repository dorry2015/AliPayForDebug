//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAccessibleDeviceItem, AKUdpSocketClient, NSArray;

@interface AKPApSetupService : NSObject
{
    AKAccessibleDeviceItem *_device;
    AKUdpSocketClient *_searchWifiListUdpSocketClient;
    AKUdpSocketClient *_switchApUdpSocketClient;
    NSArray *_wifiList;
}

+ (id)setupServiceForDevice:(id)arg1;
@property(retain, nonatomic) NSArray *wifiList; // @synthesize wifiList=_wifiList;
@property(retain, nonatomic) AKUdpSocketClient *switchApUdpSocketClient; // @synthesize switchApUdpSocketClient=_switchApUdpSocketClient;
@property(retain, nonatomic) AKUdpSocketClient *searchWifiListUdpSocketClient; // @synthesize searchWifiListUdpSocketClient=_searchWifiListUdpSocketClient;
@property(retain, nonatomic) AKAccessibleDeviceItem *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)switchToAccessPoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)encryptedString:(id)arg1 withSecurityLevel:(long long)arg2;
- (void)stopSearchWifiList;
- (_Bool)isValid:(id)arg1 forResponse:(id)arg2;
- (_Bool)addWifiList:(id)arg1;
- (void)searchWifiList:(CDUnknownBlockType)arg1;

@end

