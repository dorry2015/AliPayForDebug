//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTCoreSoftwarePlayerUnitContext : NSObject
{
    _Bool _needDesoryToken;
    long long _unitToken;
}

@property(nonatomic) _Bool needDesoryToken; // @synthesize needDesoryToken=_needDesoryToken;
@property(nonatomic) long long unitToken; // @synthesize unitToken=_unitToken;
- (void)setNeedDestory;
@property(readonly, nonatomic) _Bool isValidUnitContext;
- (id)init;

@end
