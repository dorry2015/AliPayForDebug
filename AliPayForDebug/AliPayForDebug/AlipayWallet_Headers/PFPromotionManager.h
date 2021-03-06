//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PromotionCenterDelegate-Protocol.h"

@class NSString, UIView;

@interface PFPromotionManager : NSObject <PromotionCenterDelegate>
{
    UIView *_promotionView;
    UIView *_portfolioBannerView;
    CDUnknownBlockType _dataChangedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dataChangedBlock; // @synthesize dataChangedBlock=_dataChangedBlock;
@property(retain, nonatomic) UIView *portfolioBannerView; // @synthesize portfolioBannerView=_portfolioBannerView;
@property(retain, nonatomic) UIView *promotionView; // @synthesize promotionView=_promotionView;
- (void).cxx_destruct;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)loadData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

