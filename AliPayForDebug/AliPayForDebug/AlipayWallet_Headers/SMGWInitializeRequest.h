//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SMGWBasicRequest.h"

@class NSString, SMAudioConfig;

@interface SMGWInitializeRequest : SMGWBasicRequest
{
    int _procType;
    NSString *_sign;
    SMAudioConfig *_config;
    NSString *_extra;
    NSString *_thirdId;
}

@property(copy, nonatomic) NSString *thirdId; // @synthesize thirdId=_thirdId;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) int procType; // @synthesize procType=_procType;
@property(retain, nonatomic) SMAudioConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
- (void).cxx_destruct;
- (id)init;

@end

