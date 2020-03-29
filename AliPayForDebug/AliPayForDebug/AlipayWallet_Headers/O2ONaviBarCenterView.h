//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VZFNodeProvider-Protocol.h"

@class NSDictionary, NSString, UIColor, UIViewController, VZFNodeHostingView;

@interface O2ONaviBarCenterView : UIView <VZFNodeProvider>
{
    _Bool _isCenterAlign;
    UIColor *_backColor;
    UIColor *_textColor;
    VZFNodeHostingView *_containterView;
    NSDictionary *_searchDic;
    UIViewController *_vc;
}

+ (void)jumpToSearch:(id)arg1 vc:(id)arg2;
+ (id)nodeForItem:(id)arg1 Store:(id)arg2 Context:(id)arg3;
@property(nonatomic) _Bool isCenterAlign; // @synthesize isCenterAlign=_isCenterAlign;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSDictionary *searchDic; // @synthesize searchDic=_searchDic;
@property(retain, nonatomic) VZFNodeHostingView *containterView; // @synthesize containterView=_containterView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onTapped;
- (void)updateSearchText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initCenterAlignWithVC:(id)arg1;
- (id)initWithVC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
