//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AUButton, SGFundsManageViewController, UIView;

@interface SGFundsActionController : NSObject
{
    int _type;
    SGFundsManageViewController *_manamgerViewController;
    UIView *_contentView;
    AUButton *_actionButton;
}

@property(retain, nonatomic) AUButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak SGFundsManageViewController *manamgerViewController; // @synthesize manamgerViewController=_manamgerViewController;
- (void).cxx_destruct;
- (void)markPaymentAction;
- (void)gatherAction;
- (id)init;
- (void)_applyActionWithType;
- (double)_properHeight;
- (double)_properWidth;

@end

