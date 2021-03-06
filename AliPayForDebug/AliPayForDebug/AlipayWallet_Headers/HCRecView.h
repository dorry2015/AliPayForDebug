//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSMutableArray, UILabel;

@interface HCRecView : UIView
{
    UILabel *_titleLabel;
    CALayer *_leftLine;
    CALayer *_rightLine;
    double _flexHeight;
    NSMutableArray *_itemViews;
    NSMutableArray *_itemViewsPool;
    NSArray *_items;
    struct CGRect _titleLabel_frame;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *itemViewsPool; // @synthesize itemViewsPool=_itemViewsPool;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) double flexHeight; // @synthesize flexHeight=_flexHeight;
@property(nonatomic) struct CGRect titleLabel_frame; // @synthesize titleLabel_frame=_titleLabel_frame;
@property(retain, nonatomic) CALayer *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) CALayer *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)exposure:(id)arg1;
- (void)click:(id)arg1 index:(unsigned long long)arg2;
- (void)open:(id)arg1;
- (void)onTap:(id)arg1;
- (void)setSlogan:(id)arg1;
- (id)init;
- (void)display;
- (void)bind:(id)arg1;
- (void)resetRecViews;
- (void)genRecViews;

@end

