//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class NSString;

@interface SDKLineSignalInfoModel : FMLBaseModel
{
    _Bool _isClearCache;
    NSString *_date;
    NSString *_signalText;
    long long _index;
    long long _type;
}

@property(nonatomic) _Bool isClearCache; // @synthesize isClearCache=_isClearCache;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *signalText; // @synthesize signalText=_signalText;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end

