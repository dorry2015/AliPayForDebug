//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DeviceInfo : NSObject
{
    NSString *_device_type;
    NSString *_device_id;
    NSString *_system_locale;
    NSString *_timezone;
}

@property(copy, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(copy, nonatomic) NSString *system_locale; // @synthesize system_locale=_system_locale;
@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(copy, nonatomic) NSString *device_type; // @synthesize device_type=_device_type;
- (void).cxx_destruct;
- (id)init;

@end
