//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ARTVCDynamicConfigProtocol;

@interface ARTVCDynamicConfiger : NSObject
{
    id <ARTVCDynamicConfigProtocol> _proxy;
}

@property(nonatomic) __weak id <ARTVCDynamicConfigProtocol> proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (_Bool)stringToBoolean:(id)arg1;
- (id)configWithKey:(id)arg1;
- (id)maxBitrate;
- (_Bool)disableH264;
- (long long)iceTransportPolicy;
- (id)preferVideoCodec;

@end
