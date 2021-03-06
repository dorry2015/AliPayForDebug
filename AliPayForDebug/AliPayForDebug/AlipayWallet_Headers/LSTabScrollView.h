//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "LSCardContentDelegate-Protocol.h"
#import "LSCardLifeCycle-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class LSTabCardContainer, NSMutableArray, NSString, UIView;
@protocol LSCardLoadingViewDelegate, LSCardRetryViewDelegate;

@interface LSTabScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate, LSCardLifeCycle, LSCardContentDelegate>
{
    _Bool _configScrollEnanble;
    long long _selectedIndex;
    long long _pageCount;
    CDUnknownBlockType _selectedIndexDidChangedCallback;
    UIView *_currentView;
    LSTabCardContainer *_tabContainer;
    NSMutableArray *_contentViews;
    NSMutableArray *_loadedViews;
}

@property(retain, nonatomic) NSMutableArray *loadedViews; // @synthesize loadedViews=_loadedViews;
@property(retain, nonatomic) NSMutableArray *contentViews; // @synthesize contentViews=_contentViews;
@property(nonatomic) _Bool configScrollEnanble; // @synthesize configScrollEnanble=_configScrollEnanble;
@property(nonatomic) __weak LSTabCardContainer *tabContainer; // @synthesize tabContainer=_tabContainer;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(copy, nonatomic) CDUnknownBlockType selectedIndexDidChangedCallback; // @synthesize selectedIndexDidChangedCallback=_selectedIndexDidChangedCallback;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)cardDidEndDisplay;
- (void)cardWillDisplay;
- (void)notifyLoadedView:(id)arg1;
- (void)cardDidLoad;
- (void)setFrame:(struct CGRect)arg1;
- (void)showViewAtIndex:(long long)arg1;
- (_Bool)isNeedUpdate:(long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)reloadCurrentView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)reloadWithModel:(id)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned long long cardContentState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView<LSCardLoadingViewDelegate> *loadingView;
@property(retain, nonatomic) UIView<LSCardRetryViewDelegate> *retryView;
@property(copy, nonatomic) NSString *reuseId;
@property(readonly) Class superclass;

@end

