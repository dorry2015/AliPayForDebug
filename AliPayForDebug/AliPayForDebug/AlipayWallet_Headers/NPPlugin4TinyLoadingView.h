//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

@class APBaseLoadingView, H5WebViewController, UIColor, UIView;

@interface NPPlugin4TinyLoadingView : NBPluginBase
{
    _Bool _isCurrentStatusbarHidden;
    _Bool _hasStateSaved;
    APBaseLoadingView *_loadingView;
    UIView *_bgCoverView;
    UIColor *_navbarBottomColor;
    H5WebViewController *_currentVC;
}

@property(nonatomic) _Bool hasStateSaved; // @synthesize hasStateSaved=_hasStateSaved;
@property(nonatomic) _Bool isCurrentStatusbarHidden; // @synthesize isCurrentStatusbarHidden=_isCurrentStatusbarHidden;
@property(nonatomic) __weak H5WebViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) UIColor *navbarBottomColor; // @synthesize navbarBottomColor=_navbarBottomColor;
@property(retain, nonatomic) UIView *bgCoverView; // @synthesize bgCoverView=_bgCoverView;
@property(retain, nonatomic) APBaseLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)hideLoadview:(id)arg1;
- (_Bool)tinyApp:(id)arg1 isSubType:(long long)arg2;
- (void)dealloc;
- (void)handleEvent:(id)arg1;
- (void)pluginDidLoad;

@end
