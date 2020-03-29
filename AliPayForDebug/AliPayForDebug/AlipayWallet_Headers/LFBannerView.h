//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AUBannerViewDelegate-Protocol.h"
#import "LFInfoSubviewProtocol-Protocol.h"

@class AUBannerView, LifeHomeResult, LifeHomeViewController, NSArray, NSMutableArray, NSString;

@interface LFBannerView : UIView <AUBannerViewDelegate, LFInfoSubviewProtocol>
{
    AUBannerView *_bannerView;
    NSMutableArray *_actionUrls;
    NSString *_publicId;
    LifeHomeViewController *_controller;
    LifeHomeResult *_lifeInfo;
    NSMutableArray *_imageUrls;
    NSArray *_bannerInfoItemList;
}

@property(retain, nonatomic) NSArray *bannerInfoItemList; // @synthesize bannerInfoItemList=_bannerInfoItemList;
@property(retain, nonatomic) NSMutableArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(retain, nonatomic) LifeHomeResult *lifeInfo; // @synthesize lifeInfo=_lifeInfo;
@property(nonatomic) __weak LifeHomeViewController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) NSMutableArray *actionUrls; // @synthesize actionUrls=_actionUrls;
@property(retain, nonatomic) AUBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)__adEventLogEventId:(id)arg1 status:(unsigned long long)arg2 trace_id:(id)arg3;
- (void)bannerView:(id)arg1 didExposureItemAtPos:(long long)arg2;
- (void)bannerView:(id)arg1 didTapedItemAtPos:(long long)arg2;
- (id)bannerView:(id)arg1 itemViewAtPos:(long long)arg2;
- (long long)numberOfItemsInBannerView:(id)arg1;
- (void)refreshLifeInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lifeInfo:(id)arg2 infoView:(id)arg3 controller:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
