//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BeeVideoPlayerPluginDelegate-Protocol.h"

@class NSString, UIColor;

@interface BeeVideoMiniProgressPlugin : UIView <BeeVideoPlayerPluginDelegate>
{
    UIColor *_frontColor;
    UIView *_frontView;
}

@property(retain, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(retain, nonatomic) UIColor *frontColor; // @synthesize frontColor=_frontColor;
- (void).cxx_destruct;
- (void)BeeVideoPlayerView:(id)arg1 playedTime:(double)arg2;
- (void)BeeVideoPlayerView:(id)arg1 controlVisible:(_Bool)arg2;
- (void)pluginItemDidUninstall:(id)arg1;
- (void)pluginItemDidInstall:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
