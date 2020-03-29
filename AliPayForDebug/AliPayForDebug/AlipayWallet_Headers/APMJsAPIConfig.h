//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMConfigUpdateProtocol-Protocol.h"

@class NSString;

@interface APMJsAPIConfig : NSObject <APMConfigUpdateProtocol>
{
    _Bool _usingAppIdAsDefaultBizType;
    unsigned long long _defaultVideoCompressLevel;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long defaultVideoCompressLevel; // @synthesize defaultVideoCompressLevel=_defaultVideoCompressLevel;
@property(nonatomic) _Bool usingAppIdAsDefaultBizType; // @synthesize usingAppIdAsDefaultBizType=_usingAppIdAsDefaultBizType;
- (id)configWithUTF8EncodeingString:(id)arg1;
- (id)numberValueFromConfig:(id)arg1 withKey:(id)arg2;
- (void)parseConfig:(id)arg1;
- (void)configDidUpdate:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
