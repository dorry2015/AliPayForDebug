//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TitleButton, UILabel;

@interface AUIActionButton : UIControl
{
    unsigned long long _style;
    TitleButton *_titleButton;
    UILabel *_messageLabel;
}

@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) TitleButton *titleButton; // @synthesize titleButton=_titleButton;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupTitle:(id)arg1 message:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;

@end
