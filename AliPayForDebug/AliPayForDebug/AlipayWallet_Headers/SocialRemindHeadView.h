//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol SocialRemindHeadViewDelegate;

@interface SocialRemindHeadView : UIView
{
    id <SocialRemindHeadViewDelegate> _delegate;
    long long _count;
    UIView *_remindContentView;
    UILabel *_remindCountLabel;
    UIView *_redDotView;
}

@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UILabel *remindCountLabel; // @synthesize remindCountLabel=_remindCountLabel;
@property(retain, nonatomic) UIView *remindContentView; // @synthesize remindContentView=_remindContentView;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) __weak id <SocialRemindHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)remindInfoDidChange:(id)arg1;
- (void)handleClick:(id)arg1;
- (void)refreshReminViewStr:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
