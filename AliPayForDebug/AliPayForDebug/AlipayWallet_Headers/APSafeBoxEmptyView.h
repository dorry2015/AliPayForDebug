//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface APSafeBoxEmptyView : UIView
{
    UIImageView *_emptyImageView;
    UIView *_emptyArrowView;
}

@property(retain, nonatomic) UIView *emptyArrowView; // @synthesize emptyArrowView=_emptyArrowView;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
- (void).cxx_destruct;
- (void)showArrowView;
- (void)hiddenArrowView;
- (void)drawSubView:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

