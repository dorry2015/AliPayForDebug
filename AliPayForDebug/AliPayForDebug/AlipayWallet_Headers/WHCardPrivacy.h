//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WHCardPrivacy : NSObject
{
    _Bool _isAmountCiphertext;
    _Bool _isLinkageAvailable;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isLinkageAvailable; // @synthesize isLinkageAvailable=_isLinkageAvailable;
@property(readonly, nonatomic) _Bool isAmountCiphertext; // @synthesize isAmountCiphertext=_isAmountCiphertext;
- (_Bool)checkLinkageAvailable;
- (void)setAmountPrivacy:(_Bool)arg1;
- (void)setLocalAmountPrivacy:(_Bool)arg1;
- (void)amountStatusDidChanged:(id)arg1;
- (void)resynchronizeData;
- (void)bootInit;
- (id)init;

@end
