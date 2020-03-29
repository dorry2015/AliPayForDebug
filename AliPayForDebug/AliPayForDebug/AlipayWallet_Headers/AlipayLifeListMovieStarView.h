//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCWidgetView.h"

@class UIImageView, UILabel;

@interface AlipayLifeListMovieStarView : CCWidgetView
{
    UILabel *_wantLabel;
    UIImageView *_starImageViewOne;
    UIImageView *_starImageViewTwo;
    UIImageView *_starImageViewThree;
    UIImageView *_starImageViewFour;
    UIImageView *_starImageViewFive;
    UILabel *_starLevelLabel;
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(retain, nonatomic) UILabel *starLevelLabel; // @synthesize starLevelLabel=_starLevelLabel;
@property(retain, nonatomic) UIImageView *starImageViewFive; // @synthesize starImageViewFive=_starImageViewFive;
@property(retain, nonatomic) UIImageView *starImageViewFour; // @synthesize starImageViewFour=_starImageViewFour;
@property(retain, nonatomic) UIImageView *starImageViewThree; // @synthesize starImageViewThree=_starImageViewThree;
@property(retain, nonatomic) UIImageView *starImageViewTwo; // @synthesize starImageViewTwo=_starImageViewTwo;
@property(retain, nonatomic) UIImageView *starImageViewOne; // @synthesize starImageViewOne=_starImageViewOne;
@property(retain, nonatomic) UILabel *wantLabel; // @synthesize wantLabel=_wantLabel;
- (void).cxx_destruct;
- (void)initUIElmentWithextDic:(id)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;

@end
