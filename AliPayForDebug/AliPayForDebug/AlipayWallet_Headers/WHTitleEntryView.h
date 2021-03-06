//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WHExposureControl.h"

@class AUBadgeView, AULabel, BSBadgeInfo, UIView;

@interface WHTitleEntryView : WHExposureControl
{
    AULabel *_titleLabel;
    AULabel *_actionDescLabel;
    AUBadgeView *_badgeView;
    UIView *_accessaryView;
    BSBadgeInfo *_badgeInfo;
}

+ (double)estimateHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) BSBadgeInfo *badgeInfo;
- (void)setTitle:(id)arg1 actionDesc:(id)arg2 badge:(id)arg3 expModel:(id)arg4;
- (void)layoutSubviews;
- (id)init;

@end

