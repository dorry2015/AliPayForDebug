//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFBankVO : NSObject
{
    _Bool _hotBank;
    _Bool _nextDay;
    _Bool _quickSupported;
    NSString *_bankName;
    NSString *_bankShortName;
}

@property(nonatomic) _Bool quickSupported; // @synthesize quickSupported=_quickSupported;
@property(nonatomic) _Bool nextDay; // @synthesize nextDay=_nextDay;
@property(nonatomic) _Bool hotBank; // @synthesize hotBank=_hotBank;
@property(retain, nonatomic) NSString *bankShortName; // @synthesize bankShortName=_bankShortName;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
- (void).cxx_destruct;

@end

