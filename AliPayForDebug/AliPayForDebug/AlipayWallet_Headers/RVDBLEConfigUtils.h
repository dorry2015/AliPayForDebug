//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RVDConfigProtocol;

@interface RVDBLEConfigUtils : NSObject
{
    id <RVDConfigProtocol> _configDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <RVDConfigProtocol> configDelegate; // @synthesize configDelegate=_configDelegate;
- (void).cxx_destruct;
- (id)ble_needWaitExit;
- (id)ble_connectMaxtimeout;
- (id)ble_hexStringUseLowcase;

@end
