//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class NSString, UIImageView, UILabel;

@interface SCExtensionLoginViewController : DTViewController
{
    NSString *_source;
    UIImageView *_arrowView;
    UIImageView *_iconView;
    UILabel *_targetTitleLabel;
    UILabel *_targetInfoLabel;
}

@property(retain, nonatomic) UILabel *targetInfoLabel; // @synthesize targetInfoLabel=_targetInfoLabel;
@property(retain, nonatomic) UILabel *targetTitleLabel; // @synthesize targetTitleLabel=_targetTitleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)loginFinish:(id)arg1;
- (void)onCancel;
- (void)onConfirm;
- (id)createBlackLabel;
- (void)createSubviews;
- (id)imageWithResourceName:(id)arg1;
- (void)viewDidLoad;

@end

