//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface RTServiceFactory : NSObject
{
    NSMutableDictionary *_services;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
- (void).cxx_destruct;
- (id)serviceForProtocol:(id)arg1;
- (void)unRegisterService:(id)arg1;
- (void)registerService:(id)arg1 forProtocol:(id)arg2;

@end
