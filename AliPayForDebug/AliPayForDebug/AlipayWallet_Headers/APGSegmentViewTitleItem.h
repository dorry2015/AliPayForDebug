//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface APGSegmentViewTitleItem : UIView
{
    _Bool _hasNormalColor;
    _Bool _hasHighlightColor;
    _Bool _touchedFlag;
    id _target;
    SEL _action;
    _Bool _highlight;
    NSString *_title;
    UIColor *_normalColor;
    UIColor *_highlightColor;
    UIFont *_font;
    UILabel *_titleLabel;
    double _textWidth;
}

+ (double)calcuWidth:(id)arg1;
@property(nonatomic) double textWidth; // @synthesize textWidth=_textWidth;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)setSpace:(double)arg1;
- (void)refreshItemView;
- (void)setItemViewHighlight:(_Bool)arg1;
- (double)calcuWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

