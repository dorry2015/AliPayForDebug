//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TFHomeATActionViewDelegate-Protocol.h"
#import "TFHomeAssistantTemplateProtocol-Protocol.h"

@class CCard, MFAttributeLabel, NSString, TFHomeATActionView, TFLottieAnimationView, UIButton, UIImageView;

@interface TFHomeAssistantTemplateSeven : UIView <TFHomeATActionViewDelegate, TFHomeAssistantTemplateProtocol>
{
    UIButton *_bgButton;
    UIImageView *_bgImageView;
    UIView *_headerView;
    UIImageView *_descIconImageView;
    UIImageView *_arrowIconImageView;
    MFAttributeLabel *_descLabel;
    MFAttributeLabel *_titleLabel;
    MFAttributeLabel *_subtitleLabel;
    TFLottieAnimationView *_animatedView;
    TFHomeATActionView *_actionButton;
    CCard *_card;
}

@property(retain, nonatomic) CCard *card; // @synthesize card=_card;
@property(retain, nonatomic) TFHomeATActionView *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) TFLottieAnimationView *animatedView; // @synthesize animatedView=_animatedView;
@property(retain, nonatomic) MFAttributeLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MFAttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MFAttributeLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *arrowIconImageView; // @synthesize arrowIconImageView=_arrowIconImageView;
@property(retain, nonatomic) UIImageView *descIconImageView; // @synthesize descIconImageView=_descIconImageView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
- (void).cxx_destruct;
- (_Bool)animationAvailable;
- (void)receiveAnimateNotification:(id)arg1;
- (void)onClickBgButton;
- (void)homeATActionViewClicked:(id)arg1;
- (void)templateClicked:(id)arg1;
- (void)configData:(id)arg1;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)registerNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

