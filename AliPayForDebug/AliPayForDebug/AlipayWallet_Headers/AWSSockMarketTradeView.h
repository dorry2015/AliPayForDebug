//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SFAProfileItemContent, UIControl, UIImageView, UILabel;

@interface AWSSockMarketTradeView : UIView
{
    _Bool _placingShow;
    int _marketViewypType;
    CDUnknownBlockType _closeTradeBlock;
    CDUnknownBlockType _showBlock;
    NSString *_userId;
    UIControl *_clickBtn;
    UILabel *_nameLabel;
    UIImageView *_imageView;
    SFAProfileItemContent *_profileItem;
    NSString *_stockTradeinstId;
    NSString *_instId;
}

@property(retain, nonatomic) NSString *instId; // @synthesize instId=_instId;
@property(nonatomic) int marketViewypType; // @synthesize marketViewypType=_marketViewypType;
@property(retain, nonatomic) NSString *stockTradeinstId; // @synthesize stockTradeinstId=_stockTradeinstId;
@property(retain, nonatomic) SFAProfileItemContent *profileItem; // @synthesize profileItem=_profileItem;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIControl *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) CDUnknownBlockType showBlock; // @synthesize showBlock=_showBlock;
@property(copy, nonatomic) CDUnknownBlockType closeTradeBlock; // @synthesize closeTradeBlock=_closeTradeBlock;
- (void).cxx_destruct;
- (void)doExposureLog;
- (void)stockOpenBtn;
- (void)doBannerLog:(id)arg1;
- (void)setData:(id)arg1;
- (double)subViewWidth;
- (void)setupViews;
- (void)setup;

@end

