//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface WHSwitchEditionFooterView : UIView
{
    NSString *_switchEdition;
    CDUnknownBlockType _switch_edition_block;
    UIButton *_switchEditionButton;
}

+ (double)cellHeightForScalingModel:(id)arg1;
@property(retain, nonatomic) UIButton *switchEditionButton; // @synthesize switchEditionButton=_switchEditionButton;
@property(copy, nonatomic) CDUnknownBlockType switch_edition_block; // @synthesize switch_edition_block=_switch_edition_block;
@property(readonly, nonatomic) NSString *switchEdition; // @synthesize switchEdition=_switchEdition;
- (void).cxx_destruct;
- (void)setCellScale:(_Bool)arg1 scale:(double)arg2;
- (void)layoutWithScale:(id)arg1;
- (void)didTappedSwitchEditionButton;
- (void)reloadWithSwitchEdition:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
