//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage;

@interface PPChatDataCtrlBase : UIControl
{
    int _ctrlAction;
    UIImage *_bgImg;
    NSString *_bgImgUrl;
    double _height;
}

@property(nonatomic) int ctrlAction; // @synthesize ctrlAction=_ctrlAction;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *bgImgUrl; // @synthesize bgImgUrl=_bgImgUrl;
@property(retain, nonatomic) UIImage *bgImg; // @synthesize bgImg=_bgImg;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

