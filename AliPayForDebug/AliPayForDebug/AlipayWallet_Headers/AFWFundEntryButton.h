//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class BSBadgeSpaceInfo, BSBadgeView;

@interface AFWFundEntryButton : UIControl
{
    CDUnknownBlockType _actionBlock;
    BSBadgeView *_badgeView;
    BSBadgeSpaceInfo *_spaceInfo;
}

@property(retain, nonatomic) BSBadgeSpaceInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;
@property(retain, nonatomic) BSBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)clickAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

