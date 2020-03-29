//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUInputBox, UIButton;
@protocol AuthCodeDelegate;

@interface APAuthCodeBox : UIView
{
    _Bool _waiting;
    AUInputBox *_inputBox;
    UIButton *_button;
    id <AuthCodeDelegate> _delegate;
}

+ (float)heightOfControl;
@property(nonatomic) __weak id <AuthCodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) AUInputBox *inputBox; // @synthesize inputBox=_inputBox;
- (void).cxx_destruct;
- (void)stopWaiting;
- (void)startWaiting;
- (id)initWithFrame:(struct CGRect)arg1;

@end
