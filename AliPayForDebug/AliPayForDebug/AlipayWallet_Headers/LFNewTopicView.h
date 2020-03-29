//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BEEPhotoGalleryViewDelegate-Protocol.h"
#import "LFInfoSubviewProtocol-Protocol.h"

@class BEEPhotoGalleryView, LFNewTopicTopImageView, LifeHomeViewController, NSMutableSet, NSString, TopicInfo, UILabel;

@interface LFNewTopicView : UIView <BEEPhotoGalleryViewDelegate, LFInfoSubviewProtocol>
{
    UIView *_topContainerView;
    UIView *_bottomContainerView;
    UILabel *_topTitleLabel;
    LFNewTopicTopImageView *_topImageView;
    BEEPhotoGalleryView *_bottomGalleryView;
    TopicInfo *_topicInfo;
    NSString *_publicId;
    LifeHomeViewController *_controller;
    double _oldItemWidth;
    NSMutableSet *_exposureMonitorKeys;
}

@property(retain, nonatomic) NSMutableSet *exposureMonitorKeys; // @synthesize exposureMonitorKeys=_exposureMonitorKeys;
@property(nonatomic) double oldItemWidth; // @synthesize oldItemWidth=_oldItemWidth;
@property(nonatomic) __weak LifeHomeViewController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) TopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(retain, nonatomic) BEEPhotoGalleryView *bottomGalleryView; // @synthesize bottomGalleryView=_bottomGalleryView;
@property(retain, nonatomic) LFNewTopicTopImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
- (void).cxx_destruct;
- (void)bottomGallertViewClick:(long long)arg1;
- (void)topImageViewClick:(id)arg1;
- (void)photoGalleryView:(id)arg1 didClickBottomViewAtIndex:(long long)arg2;
- (void)photoGalleryView:(id)arg1 didSelectPhotoAtIndex:(long long)arg2;
- (void)resizeBottomGalleryView:(double)arg1;
- (void)resizeTopImageView:(double)arg1;
- (void)createContainerView;
- (void)refreshLifeInfo:(id)arg1;
- (void)exposureReport;
- (id)initWithFrame:(struct CGRect)arg1 lifeInfo:(id)arg2 infoView:(id)arg3 controller:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
