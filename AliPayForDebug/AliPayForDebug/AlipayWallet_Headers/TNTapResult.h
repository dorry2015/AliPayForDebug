//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface TNTapResult : NSObject
{
    _Bool _success;
    NSError *_err;
    NSDictionary *_data;
}

+ (id)syncTapResult:(_Bool)arg1 err:(id)arg2;
+ (id)syncBailTapResult:(_Bool)arg1 err:(id)arg2 data:(id)arg3;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *err; // @synthesize err=_err;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
