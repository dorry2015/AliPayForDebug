//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AUScalingModel, UIColor;

@interface AUBannerViewConfig : NSObject
{
    _Bool _pageControlDotTapEnabled;
    _Bool _autoTurn;
    _Bool _autoStartTurn;
    _Bool _neverAdjustContentInset;
    _Bool _reuseContentView;
    unsigned long long _style;
    UIColor *_pageControlNormalColor;
    UIColor *_pageControlSelectedColor;
    double _pageControlMarginBottom;
    double _duration;
    AUScalingModel *_scalingModel;
    struct UIEdgeInsets _contentViewMargin;
    struct UIEdgeInsets _contentViewPadding;
}

@property(retain, nonatomic) AUScalingModel *scalingModel; // @synthesize scalingModel=_scalingModel;
@property(nonatomic) _Bool reuseContentView; // @synthesize reuseContentView=_reuseContentView;
@property(nonatomic) _Bool neverAdjustContentInset; // @synthesize neverAdjustContentInset=_neverAdjustContentInset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool autoStartTurn; // @synthesize autoStartTurn=_autoStartTurn;
@property(nonatomic) _Bool autoTurn; // @synthesize autoTurn=_autoTurn;
@property(nonatomic) struct UIEdgeInsets contentViewPadding; // @synthesize contentViewPadding=_contentViewPadding;
@property(nonatomic) struct UIEdgeInsets contentViewMargin; // @synthesize contentViewMargin=_contentViewMargin;
@property(nonatomic) _Bool pageControlDotTapEnabled; // @synthesize pageControlDotTapEnabled=_pageControlDotTapEnabled;
@property(nonatomic) double pageControlMarginBottom; // @synthesize pageControlMarginBottom=_pageControlMarginBottom;
@property(retain, nonatomic) UIColor *pageControlSelectedColor; // @synthesize pageControlSelectedColor=_pageControlSelectedColor;
@property(retain, nonatomic) UIColor *pageControlNormalColor; // @synthesize pageControlNormalColor=_pageControlNormalColor;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;

@end
