//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUButton, LifeHomeResult, UIImageView;

@interface LFHomeVipComponentView : UIView
{
    _Bool _isAdding;
    CDUnknownBlockType _closeAction;
    CDUnknownBlockType _addAction;
    AUButton *_addButton;
    UIImageView *_iconView;
    LifeHomeResult *_lifeInfo;
}

@property(nonatomic) _Bool isAdding; // @synthesize isAdding=_isAdding;
@property(retain, nonatomic) LifeHomeResult *lifeInfo; // @synthesize lifeInfo=_lifeInfo;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) AUButton *addButton; // @synthesize addButton=_addButton;
@property(copy, nonatomic) CDUnknownBlockType addAction; // @synthesize addAction=_addAction;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void).cxx_destruct;
- (void)addClick:(id)arg1;
- (void)closeClick:(id)arg1;
- (void)refreshLifeInfo:(id)arg1;
- (void)createControls;
- (id)initWithFrame:(struct CGRect)arg1;

@end
