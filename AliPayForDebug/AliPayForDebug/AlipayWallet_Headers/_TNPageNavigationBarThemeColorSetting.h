//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, UIColor, UIImage;

@interface _TNPageNavigationBarThemeColorSetting : NSObject <NSCopying>
{
    UIColor *_backButtonTitleColor;
    UIImage *_backButtonImage;
    UIImage *_rightButtonImage;
    UIColor *_rightButtonTitleColor;
    UIImage *_rightSecondButtonImage;
    UIColor *_rightSecondButtonTitleColor;
    UIColor *_titleColor;
    UIColor *_subTitleColor;
    UIColor *_navibarBackgroundColor;
    UIColor *_bottomLineColor;
    NSNumber *_statusBarStyle;
}

+ (id)settingFrom:(id)arg1 to:(id)arg2 inProgress:(double)arg3;
@property(retain, nonatomic) NSNumber *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) UIColor *bottomLineColor; // @synthesize bottomLineColor=_bottomLineColor;
@property(retain, nonatomic) UIColor *navibarBackgroundColor; // @synthesize navibarBackgroundColor=_navibarBackgroundColor;
@property(retain, nonatomic) UIColor *subTitleColor; // @synthesize subTitleColor=_subTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *rightSecondButtonTitleColor; // @synthesize rightSecondButtonTitleColor=_rightSecondButtonTitleColor;
@property(retain, nonatomic) UIImage *rightSecondButtonImage; // @synthesize rightSecondButtonImage=_rightSecondButtonImage;
@property(retain, nonatomic) UIColor *rightButtonTitleColor; // @synthesize rightButtonTitleColor=_rightButtonTitleColor;
@property(retain, nonatomic) UIImage *rightButtonImage; // @synthesize rightButtonImage=_rightButtonImage;
@property(retain, nonatomic) UIImage *backButtonImage; // @synthesize backButtonImage=_backButtonImage;
@property(retain, nonatomic) UIColor *backButtonTitleColor; // @synthesize backButtonTitleColor=_backButtonTitleColor;
- (void).cxx_destruct;
- (id)mergeWith:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
