//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WealthAccountAssetInfo : NSObject
{
    _Bool _success;
    NSString *_errorView;
    NSString *_availableAmount;
}

@property(retain, nonatomic) NSString *availableAmount; // @synthesize availableAmount=_availableAmount;
@property(retain, nonatomic) NSString *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
